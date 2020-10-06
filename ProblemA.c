#include<stdio.h>
#include<string.h>

int main(){
int i,j,temp;
char s[100];

gets(s);

for(i=0;s[i+1]!='\0';i++){
    for(j=i;s[j]!='\0';j++){
        if(s[i]!='+' && s[j]!='+')
            if(s[j]<s[i]){
                temp=s[j];
                s[j]=s[i];
                s[i]=temp;

            }
    }
}

printf("%s\t",s);
return 0;

}
