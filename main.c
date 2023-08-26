#include <stdio.h>
#include <stdlib.h>

int main()
{ char t[20];
 int frq[20];
 int i,j,count,max;

 puts("enter the word");
 gets(t);
 for(i=0;i<10;i++)
    t[i]=-1;
 for(i=0;i<strlen(t);i++ ){
        count=1;
    for (j=i+1;j<strlen(t);j++){
    if(t[i]==t[j]){
       count ++;
       frq[j]=0;

    }

       }
 if(frq[i]!=0)
 frq[i]=count;
}
max=0;
for(i=1;i<strlen(t);i++){
    if(frq[i]>frq[max])
        max=i;

}printf("the letter wich is repeat is :%'c'=%d",t[max],frq[max]);
    return 0;
}
