#include <graphics.h>
#include <conio.h>
#include <dos.h>
#include <iostream>

using namespace std;

int fx=2450,fy=1250,sx=50,sy=50,w=10,c;

main(){
	initwindow(fx+100,fy+100);
	bool vet[5000]={0};
	int pivot=0;
	for(int i=1;i<100;i++){
		vet[pivot]=true;
		if(pivot-i>0 && !vet[pivot-i]){
			if(i%2==0)
				arc(sx+w*pivot-((w*pivot-(w*(pivot-i)))/2),fy/2,0,180,((w*pivot-(w*(pivot-i)))/2));
			else
				arc(sx+w*pivot-((w*pivot-(w*(pivot-i)))/2),fy/2,180,0,((w*pivot-(w*(pivot-i)))/2));
			pivot-=i;
		}
		else{
			if(i%2==0)
				arc(sx+w*pivot+(i*w)/2,fy/2,0,180,(i*w)/2);
			else
				arc(sx+w*pivot+(i*w)/2,fy/2,180,0,(i*w)/2);
			pivot+=i;
		}
	}
	getch();
	closegraph();
}
