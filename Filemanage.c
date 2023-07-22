#include<stdio.h>
#include<string.h>
int main()
{
    FILE *filepointer;
    char a[100] , b[100] , c[100] , name1[100] ,name2[100] ;
    FILE *sourcefile, *destinationfile;
    char ch;
    while(1)
    {
    printf("\n \t \t \t **** FILE MANAGER **** \t \t \t \n \n ");
    printf("You can 'Create' , 'Delete' , 'Copy' and 'Move'  your file \n \n ");
    printf("\t \t \t *** Select ***\t \t \t \n ");
    printf("1) Create \n 2) Delete \n 3) Copy \n 4) Move \n 5) Exist \n ");
    printf("Enter the Operation :::  ");
    scanf("%99s",a);
    if(strcmp(a,"Create")==0)
    {
        printf("Insert a file Name ::");
        scanf("%99s",b);
        filepointer = fopen(b, "w");
        printf("Your file is created Sucessfully !! ");
        continue;
    }
    else if(strcmp(a,"Delete")==0)
    {
        printf("Insert a file you want to delete ::");
        scanf("%99s",c);
        remove(c);
        printf("Your file is Removed Sucessfully !! ");
        continue;
    }
    else if(strcmp(a,"Copy")==0)
    {
        printf("Insert The name of file :: ");
        scanf("%99s",name1);
        sourcefile=fopen(name1,"r");
        printf("Insert The name of file to copy :: ");
        scanf("%99s",name2);
        destinationfile=fopen(name2,"w");
        while (( ch= fgetc(sourcefile)) != EOF) 
    {
        fputc(ch,destinationfile );
    }
    printf("\nContents copied to %s",name2);
    fclose(sourcefile);
    fclose(destinationfile);
    continue;
    }
    else if(strcmp(a,"Move")==0)
    {
        printf("Insert the name of file :: ");
        scanf("%99s",name1);
        printf("Insert the name of file to move :: ");
        scanf("%99s",name2);

        if (rename(name1, name2) == 0)
        {
        printf("File moved successfully.\n");
        } 
        else 
        {
        printf("Failed to move the file.\n");
        }
        continue;
    }
    else if(strcmp(a,"Exist"));
    {
        printf("Ending the program !! ");
    }
    return 0;
    }
}