#include <stdio.h>
#include <string.h>

void parser(char* arr){  //The main html parser function
    int i=0,j=1,k=0,d=0,l;
    if (*arr=='<'){
        while (*(arr+i)!='>'){
            i++;
        }
        i=i+1;
        l=i;
        while (*(arr+j)!='<')
        {
            j++;
        }
        for ( k; k<j-1;k++)
        {
            *(arr+k)=*(arr+i);
            i++;
        }
        *(arr+(k-l+1))='\0';    
    }
    else
    {
        printf("Enter a valid statement !");
    }   
}
void whitespace_rem(char arr[]){ //Removes whitespaces before and after of string.
    int i=0,j,k=0,whitespace_before,whitespace_after;
    j= strlen(arr)-1;
    while (arr[i]==' ')
    {
        i++;
    }
    whitespace_before=i;
    while (arr[j]==' ')
    {
        j--;
    }
    whitespace_after=j;
    for (k; k < j+1; k++)
    {
        arr[k]=arr[i];
        i++;
    }
    arr[whitespace_after-whitespace_before+1]='\0' ; 
}
int main()
{
    char sample[]="<span    >  This is a string   </span>";
    puts(sample); 
    parser(sample);
    puts(sample);
    whitespace_rem(sample);  
    puts(sample);
    printf("%d",strlen(sample));
    return 0; 
}