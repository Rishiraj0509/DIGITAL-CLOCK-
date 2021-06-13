#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int h,m,s;
    printf("ENter the time in HH:MM:SS format : ");
    scanf("%d%d%d",&h,&m,&s );
    for (h; h < 24; h++)
    {
        for (m ; m < 60; m++)
        {
            for (s;s < 60; s++)
            {
                 
                if (h>12){
                    system("CLS");
                    printf("\n\n\n\n\n\n\t\t\t\t\t\t %d:%d:%d AM", h,m,s);
                    printf("\n");
                    sleep(1);
                }
                else if(h<12){
                    system("CLS");
                    printf("\n\n\n\n\n\n\t\t\t\t\t\t %d:%d:%d PM", h,m,s);
                    printf("\n");
                    sleep(1);
                }

            }
            s=0;
        }
        m=0;        
    }
    h=0;


    
}