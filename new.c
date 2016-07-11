#include <stdio.h>
#include<string.h>
int main()
{
    int num,i,j;
    scanf("%d",&num);
    char a[num+1][10];
    int max=0,len[num+1];
    for(i=0;i<num;i++){
       scanf("%s",a[i]);
       len[i]=strlen(a[i]);
       max=(max>strlen(a[i]))?max:strlen(a[i]);
    }
    for(i=0;i<num;i++){
        int l=strlen(a[i]);
        char ch=a[i][l-1];
        for(j=l;j<max;j++){
            a[i][j]=ch;
        }
        a[i][j]='\0';
    }
    for(i=0;i<num;i++){
        for(j=i+1;j<num;j++){
            if(strcmp(a[i],a[j])<0){
                char str[20];
                int temp;
                strcpy(str,a[i]);
                temp=len[i];
                strcpy(a[i],a[j]);
                len[i]=len[j];
                strcpy(a[j],str);
                len[j]=temp;
            }
        }
    }
printf("\n");
for(i=0;i<num;i++){
a[i][len[i]]='\0';
printf("%s",a[i]);
}

return 0;
}
