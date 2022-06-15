

#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>

using namespace std;


int main(int argc, char** argv) {
     int miktar,mod=0,sayac=0,gecici,tut,deger;
     float toplam=0;
     float ortalama,medyan;
     float x,y;
     
       printf("Sayi miktarini girin:");
       scanf("%d",&miktar);
       int sayi[miktar];
       
       


       for(int a=0; a<miktar; a++){
       printf("%d nci sayiyi girin:",a+1);
       scanf("%d",&sayi[a]);
               
       
       }
       for(int i=0; i<miktar ;i++){
       toplam=toplam+sayi[i];
       }
       ortalama=toplam/miktar;
       printf("Aritmetik ortalama: %.2f\n",ortalama);
       
       for(int a=0 ;a<miktar; a++){
           sayac=0;
           for(int b=0; b<miktar; b++){
               if(sayi[a]==sayi[b]){
                   sayac++;   
               }
               
            if(mod<sayac){
               mod=sayac;
             deger=sayi[a];  
           }
           }
           
               
          
       }
       
      
       printf("mod: %d",deger);
       printf("\n");
       
       
       for(gecici=1; gecici<miktar ;gecici++)
       {
           for (int k=0; k<miktar-1;k++)
          {
           if (sayi[k]>sayi[k+1])
           {
               tut=sayi[k];
               sayi[k]=sayi[k+1];
               sayi[k+1]=tut;
           }
          }
       }
       if(miktar%2==1){
           medyan=sayi[(miktar/2)+1];
       }
       if(miktar%2==0){
          x= sayi[miktar/2];
          y= sayi[(miktar/2)-1];
           
           medyan=(x+y)/2;
           
       
       
       }
       printf("medyan: %.2f",medyan);
       
       
    system("pause");

    return 0;
}

