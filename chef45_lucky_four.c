//lucky four
#include<stdio.h>
#include<math.h>

int main(){
int t,n,count;
scanf("%d",&t);
while(t--){
count=0;
scanf("%d",&n);
while(n>0){
    if(n%10==4)count++;
    n/=10;
}
printf("%d\n",count);

}
return 0;

}

