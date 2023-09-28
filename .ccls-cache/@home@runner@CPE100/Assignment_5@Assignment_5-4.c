#include <stdio.h>

int main5_4(){
    int m1[5][5] ,m2[5][5];
    int irow1 ,icol1 ,irow2 ,icol2;
    int i,j;

    printf("Enter row of M1 : ");
    scanf("%d",&irow1);
    printf("Enter column of M1 : ");
    scanf("%d" ,&icol1);
    printf("\nEnter row of M2 : ");
    scanf("%d",&irow2);
    printf("Enter column of M2 : ");
    scanf("%d" ,&icol2);
  if(irow1==irow2 && icol1==icol2){
    for(i=0 ;i<irow1 ;i++){
        for(j=0 ;j<icol1 ;j++){
            printf("Enter M1[%d][%d] : ",i+1,j+1);
            scanf("%d",&m1[i][j]);
        }
    }    
    for(i=0 ;i<irow2 ;i++){
        for(j=0 ;j<icol2 ;j++){
            printf("Enter M2[%d][%d] : ",i+1,j+1);
            scanf("%d",&m2[i][j]);
        }
    }
    printf("\nMA :\n");
        for(i=0 ;i<irow1 ;i++){
            for(j=0 ;j<icol1 ;j++){ printf("%d " ,m1[i][j]+m2[i][j]); }
            printf("\n");
        }
  }
  else{ printf("Can't sum matrix"); }
    return 0;
}