#include <stdio.h>
int main()
{
    int t,i,n;
    int temp,rear,head,j,maxrear,maxhead,sum,max;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d",&n);
        for(maxrear=0,maxhead=0,sum=-1,max=-21000,j=1,head=1,rear=1;j<=n;j++){
            scanf("%d",&temp);
            if(sum<0){
                head=j;
                rear=j;
                sum=temp;
            }
            else {
                sum+=temp;
            }
            if(sum>max){
                max=sum;
                maxhead=head;
                maxrear=rear;
            }
            rear++;
        }
        printf("Case %d:\n",i);
        printf("%d %d %d\n",max,maxhead,maxrear);
        if(i!=t)printf("\n");
    }
    return 0;
}
