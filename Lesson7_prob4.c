#include<stdio.h>

int main(){
    int stuA[5],stuB[5],stuC[5],i,j,k;

    printf("Please input score in same line order by subject\n");
    printf("Subject ==> Mathematic English Chemical Physical Computer\n");
    printf("For example ==> student A : 50 60 70 80 90\n");

    printf("Student A:");
        for(i=0;i<5;i++){
            scanf("%d",&stuA[i]);
        }
    printf("Student B:");
        for(j=0;j<5;j++){
            scanf("%d",&stuB[j]);
        }
    printf("Student C:");
         for(k=0;k<5;k++){
            scanf("%d",&stuC[k]);
        }


    printf("Total Scaore");
    printf("Student A:%d",stuA[0]+stuA[1]+stuA[2]+stuA[3]+stuA[4]);
    printf("Student B:%d",stuB[0]+stuB[1]+stuB[2]+stuB[3]+stuB[4]);
    prinf("Student C:%d",stuC[0]+stuC[1]+stuC[2]+stuC[3]+stuC[4]);

    return 0;
}