#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main(int argc, char *argv[]){
    
    FILE *fp;
    int i=2;
    int j=0;
    char name[10];
    char name2[100000];
    char *file =NULL;
    file = malloc(sizeof(char)*1000);
    if(argc==3){
        if((argv[1][0]=='-')&&(argv[1][1]=='F'))
        {
            strcpy(name,argv[2]);
        }
    }else if(argc==2){
        strcpy(name,argv[1]);
        
        while(name[i]!='\0'){
        
            
            name2[j]=name[i];
            i++;
            j++;
        }
    }else{
        while(fgets(file,1000,stdin));
    }

printf("%s",name2);

free(file);
    return(0);
}