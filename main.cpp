#include <stdlib.h>
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <dirent.h>
#include <filesystem>
#include "DoubleLinkedList.h"


using namespace  std;

int main(int argc, char **argv){

    //DoubleLinkedList *test = new DoubleLinkedList();
    //test->AddNodeToEnd(new Record("test"));
    //test->printList();
    //test->pop();
    //test->printList();
    //test->~DoubleLinkedList();
    //cout<<"HEY SKAN"<<endl;


    char ch;
    FILE *fp;
    int file_count=0;
    DIR *dirp,*dirp2,*dirp3;
    struct dirent * entry;
    struct dirent * entry2;
    struct dirent * entry3;
    string specs;
    char path[100],path2[100];
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
        cout<<entry2->d_name<<endl;;
        strcat(entry2->d_name,"/");
        strcat(path,entry2->d_name);
        cout<<path<<endl;

        dirp3 = opendir(path);
        while ((entry3 = readdir(dirp3)) != NULL) {
            specs="";
            strcpy(path2,path);
            if(entry3->d_name[0]=='.') continue;
            strcat(path2,entry3->d_name);
            //cout<<path2<<endl;

            fp = fopen(path2, "r");
            while ((ch = fgetc(fp)) != EOF)
            {
                specs+=ch;
                //cout<<ch;
                
            }
            //cout<<specs<<endl;
        }
    }
    //cout<<specs<<endl;
      




    fp = fopen("sigmod_large_labelled_dataset.csv", "r");
    if (fp){
        while ((ch = fgetc(fp)) != EOF)
        {
            cout<<ch;
        }

    }else{
        fp = fopen("../sigmod_large_labelled_dataset.csv", "r");
        while ((ch = fgetc(fp)) != EOF)
        {
            //cout<<ch;
        }
    }

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



    return 0;
}
