#include <stdio.h>
#include <math.h>

char A[5];
char B[5];

int main()
{
  //  for(int i = 0; i< 5; i++) {
        printf("entrer premiere serie de chiffre\n");
        scanf("%d %d %d %d %d",&A[0], &A[1], &A[2], &A[3], &A[4] );
//        printf("COUCOU\n");
//    for(int i = 0; i< 5; i++) {
        printf("entrer seconde serie de chiffre\n");
        scanf("%d %d %d %d %d",&B[0], &B[1], &B[2], &B[3], &B[4] );
    
    if (A[0]+A[1]+A[2]+A[3]+A[4]<B[0]+B[1]+B[2]+B[3]+B[4] /* condition */)
    
        printf("resultat B est plus fort\n");
        else
       printf("resultat A est plus fort\n");
        /* code */
    

}
