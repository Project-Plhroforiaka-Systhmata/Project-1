#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <dirent.h>
#include <filesystem>
#include <cstring>
#include <fstream>
#include <sstream>
#include <algorithm>
#include <string>
#include "hashTable.h"


using namespace  std;

int main(int argc, char **argv){


    auto *hash = new hashTable(1000);
    char ch;
    FILE *fp;
    int file_count=0;
    DIR *dirp,*dirp2,*dirp3;
    struct dirent * entry;
    struct dirent * entry2;
    struct dirent * entry3;
    string specs;
    char path[200],path2[200];
    if (argv[1] == nullptr){
        cout << "Please insert json files path!" << endl;
        exit(-1);
    }
    strcpy(path,argv[1]);
    strcat(path,"/");
    dirp = opendir(argv[1]);
    dirp2 = opendir(argv[1]);
    

    while ((entry2 = readdir(dirp2)) != NULL) {
        strcpy(path,argv[1]);

        if(entry2->d_name[0]=='.') continue;
        
        strcat(entry2->d_name,"/");
        strcat(path,entry2->d_name);
        //cout<<path<<endl;

        dirp3 = opendir(path);
        while ((entry3 = readdir(dirp3)) != NULL) {
            specs="";
            strcpy(path2,path);
            
            if(entry3->d_name[0]=='.') continue;
            strcat(path2,entry3->d_name);

            fp = fopen(path2, "r");
            while ((ch = fgetc(fp)) != EOF)
            {
                specs+=ch;
                //cout<<ch;
                
            }
            fclose(fp);
            hash->insert(path2,new vertex(path2,specs));
            //cout << path2 << endl;
            //cout<<specs<<endl;
        }


    }


    fstream fin;
    fin.open("../sigmod_medium_labelled_dataset.csv", ios::in);
    string line, word, temp;
    string leftSpecId, rightSpecId, label;
    int count;
    while (getline(fin, line)){
        stringstream s(line);
        count = 0;
        while (getline(s, word, ',')) {
            count++;
            switch (count) {
                case 1:
                    leftSpecId = word;
                    break;
                case 2:
                    rightSpecId = word;
                    break;
                default:
                    label = word;
            }
        }
        if(label == "1"){
            leftSpecId.append(".json");
            rightSpecId.append(".json");
            replace(leftSpecId.begin(), leftSpecId.end(), "//", '/');
            replace(rightSpecId.begin(), rightSpecId.end(), "//", '/');
            //cout << line << endl;
            vertex *vert1, *vert2;
            vert1 = hash->search(leftSpecId);
            vert2 = hash->search(rightSpecId);
            cout << leftSpecId << endl;
            cout << vert1->spec << endl;
            if(vert1 != nullptr && vert2 != nullptr) {
                cout << "doing copy" << endl;
                vert1->copyList(vert2->specList);
            }
        }
    }
    /*if (fp){
        while ((ch = fgetc(fp)) != EOF)
        {
            //cout<<ch;
        }

    }else{
        fp = fopen("../sigmod_large_labelled_dataset.csv", "r");
        while ((ch = fgetc(fp)) != EOF)
        {
            //cout<<ch;
        }
    }
    fclose(fp);
    fp = fopen("sigmod_medium_labelled_dataset.csv", "r");
    if (fp){
        while ((ch = fgetc(fp)) != EOF)
        {
            //cout<<ch;
        }
    }else{
        fp = fopen("../sigmod_medium_labelled_dataset.csv", "r");
        while ((ch = fgetc(fp)) != EOF)
        {
            //cout<<ch;
        }
    }
    fclose(fp);*/

    



    return 0;
}
