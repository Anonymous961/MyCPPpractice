#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        if(i==0 || i==n/2 || i==n){
            for(j=0;j<n;j++){
                printf("X");
            }
        }else{
            for(j=0;j<=n;j++){
                if(j==0 || j==n){
                    printf("X");
                }else{
                    printf(" ");
                }
            }
        }
        printf("\n");
    }
    // int a=1;
    // printf("%d%d%d",++a,a,a++);
    // int a=5,b=6;
    // printf("%d%d%d%d%d%d",b=a++,a++,a++,b,++b,b--);
    // int n,i,j;
    // scanf("%d",&n);
    // printf("\n");
    // for(i=1;i<=n;i++){
    //     for(j=1;j<=n-i;j++){
    //         printf(" ");
    //     }
    //     for(j=i;j>0;j--){
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }
    // for(i=1;i<n;i++){
    //     for(j=1;j<=i;j++){
    //         printf(" ");
    //     }
    //     for(j=n-i;j>0;j--){
    //         printf("%d",j);
    //     }
    //     printf("\n");
    // }
}
// int main(){
//     int a,b,c,d=0,e,i;
//     scanf("%d",&a);
//     for(i=10;i<=a;i*=10){
//         b=a%i;
//         c=(b-d)*10/i;
//         d=b;
//         printf("%d",c);
//     }
//     e=(a-d)*10/i;
//     printf("%d",e);
//     return 0;
// }
// void main(){
//     int n;
//     // printf("enter n:");
//     scanf("%d",&n);
//     switch(n){
//         case 1:
//             printf("january");
//             break;
//         case 2:
//             printf("feb");
//             break;
//         case 3:
//             printf("march");
//             break;
//         case 4:
//             printf("april");
//             break;
//         case 5:
//             printf("may");
//             break;
//         case 1:
//             printf("january");
//             break;
//         case 1:
//             printf("january");
//             break;
//         case 1:
//             printf("january");
//             break;
//         case 1:
//             printf("january");
//             break;
//         case 1:
//             printf("january");
//             break;
//         case 1:
//             printf("january");
//             break;
//         case 1:
//             printf("january");
//             break;
//     }
// }
// int main(){
//     int n,i;
//     scanf("%d",&n);
//     for(i=5;i<=n;i++){
//         printf("%d\n",i);
//     }
//     for(i=5;i>=n;i--){
//         printf("%d\n",i);
//     }
//     return 0;
// }

// int main(){
//     int n;
//     scanf("%d",&n);
//     char s=64;
//     printf("%c",s+n);
//     return 0;
// }