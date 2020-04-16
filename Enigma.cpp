#include <cstdlib>
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

char rot1[26],rot2[26],rot3[26],c1,c2,c3;
int  i,j,nr=0,nr2=0,nr3=0;
char tastiera[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char diso1[]="HJLCPRTXVZNYEIWGAKMUSQOBDF";
char diso2[]="JDKSIRUXBLHWTMCQGZNPYFVOEA";
char diso3[]="EKMFLGDQVZNTOWYHXUSPAIBRCJ";
char riflettore[]="BCDEFGDIJKGMKMIEBFTCVVJAT";
char app1[26];
char app2[26];
char app3[26];

void gotoxy(int a,int b){
	
 COORD CursorPos={a,b};
 HANDLE hConsole=GetStdHandle(STD_OUTPUT_HANDLE);
 SetConsoleCursorPosition(hConsole,CursorPos);
}

void caselle(){

 //Prima casella-----------------
 j=4;
 i=6;
 while(i<10){
    
  if(i==6){
   
   gotoxy(i-1,j);  
   putch(201);
  }
  if(i==9){
      
   gotoxy(i,j);
   putch(187);
  }
  else{  
   
   gotoxy(i,j);
   putch(205);
  }
  i++;
 }  
  
 j=5;
 i=5;
 while(j<9){
  
  if(j!=8){
  
   gotoxy(i,j);
   putch(186);
  }
  else{
   
   gotoxy(i,j);
   putch(200);
  }
  j++;
 }  
   
 j=8;
 i=6;
 while(i<10){
    
  if(i!=9){
      
   gotoxy(i,j);
   putch(205);
  }
  else{
   
   gotoxy(i,j);
   putch(188);
  }
  i++;
 } 
  
 i=9;
 j=7;
 while(j>4){
    
  gotoxy(i,j);
  putch(186);
  j--;
 }
 //gotoxy(7,6);         //Coordinate lettera 1
 //cout<<"A";
 
 //Seconda casella-----------------
 j=4;
 i=19;
 while(i<23){
    
  if(i==19){
            
   gotoxy(i-1,j);  
   putch(201);
  }
  if(i==22){
            
   gotoxy(i,j);
   putch(187);
  }
  else{  
         
   gotoxy(i,j);
   putch(205);
  }
  i++;
 }  
  
 j=5;
 i=18;
 while(j<9){
    
  if(j!=8){
           
   gotoxy(i,j);
   putch(186);
  }
  else{
      
   gotoxy(i,j);
   putch(200);
  }
  j++;
 }  
   
 j=8;
 i=19;
 while(i<23){
    
  if(i!=22){
            
   gotoxy(i,j);
   putch(205);
  }
  else{
       
   gotoxy(i,j);
   putch(188);
  }
  i++;
 } 
  
 i=22;
 j=7;
 while(j>4){ 
             
  gotoxy(i,j);
  putch(186);
  j--;
 }
 //gotoxy(20,6);         //Coordinate casella 2
 //cout<<"B";
 
 //Terza casella-----------------
 j=4;
 i=32;
 while(i<36){
             
  if(i==32){
            
   gotoxy(i-1,j);  
   putch(201);
  }
  if(i==35){
            
   gotoxy(i,j);
   putch(187);
  }
  else{  
         
   gotoxy(i,j);
   putch(205);
  }
  i++;
 }  
  
 j=5;
 i=31;
 while(j<9){
            
  if(j!=8){
           
   gotoxy(i,j);
   putch(186);
  }
  else{
      
   gotoxy(i,j);
   putch(200);
  }
  j++;
 }  
   
 j=8;
 i=32;
 while(i<36){
             
  if(i!=35){
            
   gotoxy(i,j);
   putch(205);
  }
  else{
       
   gotoxy(i,j);
   putch(188);
  }
  i++;
 } 
  
 i=35;
 j=7;
 while(j>4){
            
  gotoxy(i,j);
  putch(186);
  j--;
 }
 //gotoxy(33,6);         //Coordinate casella 3
 //cout<<"C";
}

void rotori(){

 //Primo rotore-----------------
 i=12;
 j=1;
 while(i<14){
             
  if(i==12){
            
   gotoxy(i,j);
   putch(218);
  }
  else{
       
   gotoxy(i,j);
   putch(196);
  }
  i++;
  if(i==14){
            
   gotoxy(i,j);
   putch(191);
  }
 }

 i=12;
 j=2;
 while(j<12){
             
  if(j==11){
            
   gotoxy(i,j);
   putch(192);    
  }
  else{
       
   gotoxy(i,j);
   putch(179);
  }
  j++;
 }
  
 j=11;
 i=13;
 while(i<15){
             
  if(i==14){
            
   gotoxy(i,j);
   putch(217);
  }
  else{
       
   gotoxy(i,j);
   putch(196);
  }
  i++;
 }
  
 i=14;
 j=10;
 while(j>1){
            
  gotoxy(i,j);
  putch(179);
  j--;
 }
  
 j=0;
 i=0;
 while(i<5){
            
  j+=2;
  gotoxy(13,j);
  putch(220);
  i++;
 }
 
 //Secondo rotore-----------------
 i=25;
 j=1;
 while(i<27){
             
  if(i==25){
            
   gotoxy(i,j);
   putch(218);
  }
  else{
       
   gotoxy(i,j);
   putch(196);
  }
  i++;
  if(i==27){
            
   gotoxy(i,j);
   putch(191);
  }
 }

 i=25;
 j=2;
 while(j<12){
             
  if(j==11){
            
   gotoxy(i,j);
   putch(192);    
  }
  else{
       
   gotoxy(i,j);
   putch(179);
  }
  j++;
 }
  
 j=11;
 i=26;
 while(i<28){
             
  if(i==27){
            
   gotoxy(i,j);
   putch(217);
  }
  else{
       
   gotoxy(i,j);
   putch(196);
  }
  i++;
 }
  
 i=27;
 j=10;
 while(j>1){
            
  gotoxy(i,j);
  putch(179);
  j--;
 }
  
 j=0;
 i=0;
 while(i<5){
            
  j+=2;
  gotoxy(26,j);
  putch(220);
  i++;
 }
 
 //Terzo rotore-----------------
 i=38;
 j=1;
 while(i<40){
             
  if(i==38){
            
   gotoxy(i,j);
   putch(218);
  }
  else{
       
   gotoxy(i,j);
   putch(196);
  }
  i++;
  if(i==40){
            
   gotoxy(i,j);
   putch(191);
  }
 }

 i=38;
 j=2;
 while(j<12){
             
  if(j==11){
            
   gotoxy(i,j);
   putch(192);    
  }
  else{
       
   gotoxy(i,j);
   putch(179);
  }
  j++;
 }
  
 j=11;
 i=39;
 while(i<41){
             
  if(i==40){
            
   gotoxy(i,j);
   putch(217);
  }
  else{
       
   gotoxy(i,j);
   putch(196);
  }
  i++;
 }
  
 i=40;
 j=10;
 while(j>1){
            
  gotoxy(i,j);
  putch(179);
  j--;
 }
  
 j=0;
 i=0;
 while(i<5){
            
  j+=2;
  gotoxy(39,j);
  putch(220);
  i++;
 }
}

void animazione1(){
 
 int v,u;

 v=0;
 u=0;
 while(v<5){
            
  u+=2;
  gotoxy(13,u);
  putch(32);
  v++;
 }
  
 v=0;
 u=0;
 while(v<4){
            
  if(v==0){
           
   u=0;
   u+=3;
   gotoxy(13,u);
   putch(220);
  }
  else
   if(v<5){
      u+=2;
      gotoxy(13,u);
      putch(220);
   }
   v++;
 }
  
 Sleep(250);
  
 v=0;
 u=0;
 while(v<5){
            
  if(v==0){
           
   u=0;
   u+=3;
   gotoxy(13,u);
   putch(32);
  }
  else
  if(v<4){
          
   u+=2;
   gotoxy(13,u);
   putch(32);
  }
  v++;
 }
  
 u=0;
 v=0;
 while(v<5){
            
  u+=2;
  gotoxy(13,u);
  putch(220);
  v++;
 }
 gotoxy(7,6);
 cout<<rot3[0];
}

void animazione2(){

 int v,u;
 
 v=0;
 u=0;
 while(v<5){
            
  u+=2;
  gotoxy(26,u);
  putch(32);
  v++;
 }
  
 v=0;
 u=0;
 while(v<4){
            
  if(v==0){
           
   u=0;
   u+=3;
   gotoxy(26,u);
   putch(220);
  }
  else
  if(v<5){
          
   u+=2;
   gotoxy(26,u);
   putch(220);
  }
  v++;
 }
  
 Sleep(250);
  
 v=0;
 u=0;
 while(v<5){
            
  if(v==0){
           
   u=0;
   u+=3;
   gotoxy(26,u);
   putch(32);
  }
  else
  if(v<4){
          
   u+=2;
   gotoxy(26,u);
   putch(32);
  }
  v++;
 }
  
 u=0;
 v=0;
 while(v<5){
            
  u+=2;
  gotoxy(26,u);
  putch(220);
  v++;
 }    
 gotoxy(20,6);
 cout<<rot2[0];
}

void animazione3(){
 
 int v,u;
 
 v=0;
 u=0;
 while(v<5){
            
  u+=2;
  gotoxy(39,u);
  putch(32);
  v++;
 }
  
 v=0;
 u=0;
 while(v<4){
            
  if(v==0){
           
   u=0;
   u+=3;
   gotoxy(39,u);
   putch(220);
  }
  else
  if(v<5){
          
   u+=2;
   gotoxy(39,u);
   putch(220);
  }
  v++;
 }
  
 Sleep(250);
  
 v=0;
 u=0;
 while(v<5){
            
  if(v==0){
      
   u=0;
   u+=3;
   gotoxy(39,u);
   putch(32);
  }
  else
  if(v<4){
          
   u+=2;
   gotoxy(39,u);
   putch(32);
  }
  v++;
 }
  
 u=0;
 v=0;
 while(v<5){
            
  u+=2;
  gotoxy(39,u);
  putch(220);
  v++;
 }    
 gotoxy(33,6);
 cout<<rot1[0];
}

void memoria(){

 for(int m=0;m<26;m++){
 
  app1[m]=diso1[m];
  app2[m]=diso2[m];
  app3[m]=diso3[m]; 
 }
}

void reset(){
 
 for(int r=0;r<26;r++){
 
  diso1[r]=app1[r];
  diso2[r]=app2[r];
  diso3[r]=app3[r];
 }     
 nr=0;
 nr2=0;
 nr3=0;
}

void chiave(){

 int t,l; 
 
 gotoxy(41,3);
 cout<<"Inserisci la chiave : |   |-|   |-|   |";
 gotoxy(65,3);
 cin>>c1;
 gotoxy(71,3);
 cin>>c2;
 gotoxy(77,3);
 cin>>c3;
 
 if((c1>=97)&&(c1<=122))
  c1-=32;  
 if((c2>=97)&&(c2<=122))
  c2-=32;
 if((c3>=97)&&(c3<=122))
  c3-=32;
  
 rot1[0]=c1;
 rot2[0]=c2;
 rot3[0]=c3; 
 
 //Prima chiave----------------- 
 t=1;
 l=1;
 while(t<26){  
               
  rot1[t]=c1+l;
       
  if(rot1[t]==90){
                  
   c1=64;
   l=0;
  }
  t++;
  l++;
 }
 
 //Seconda chiave-----------------
 t=1;
 l=1;
 while(t<26){  
               
  rot2[t]=c2+l;
       
  if(rot2[t]==90){
                  
   c2=64;
   l=0;
  }
  t++;
  l++;
 }
 
 //Terza chiave-----------------
 t=1;
 l=1;
 while(t<26){  
               
  rot3[t]=c3+l;
       
  if(rot3[t]==90){
                  
   c3=64;
   l=0;
  }
  t++;
  l++;
 }
}

void rotazione1(){

 int ro=0;
 char app[26];
 while(ro<26){
             
  app[ro]=rot1[ro];
  ro++;
 }
       
 ro=25;
 while(1){
          
  if(ro==0){
           
   rot1[25]=app[ro];
	break;
  }
  rot1[ro-1]=app[ro];
  ro--;
 }
 
//-------------------------------------

 ro=0;
 while(ro<26){
             
  app[ro]=diso1[ro];
  ro++;
 }
       
 ro=25;
 while(1){
          
  if(ro==0){
           
   diso1[25]=app[ro];
	break;
  }
  diso1[ro-1]=app[ro];
  ro--;
 }
}

void rotazione2(){

 int ro=0;  
 char app[26];            
 while(ro<26){
             
  app[ro]=rot2[ro];
  ro++;
 }
 
 ro=25;
 while(1){
          
  if(ro==0){
           
	rot2[25]=app[ro];
	break;
  }
  rot2[ro-1]=app[ro];
  ro--;
 }
 
//-------------------------------------

 ro=0;              
 while(ro<26){
             
  app[ro]=diso2[ro];
  ro++;
 }
       
 ro=25;
 while(1){
          
  if(ro==0){
           
	diso2[25]=app[ro];
	break;
  }
  diso2[ro-1]=app[ro];
  ro--;
 }
}

void rotazione3(){

 int ro=0; 
 char app[26];             
 while(ro<26){
             
  app[ro]=rot3[ro];
  ro++;
 }
       
 ro=25;
 while(1){
          
  if(ro==0){
           
   rot3[25]=app[ro];
   break;
  }
  rot3[ro-1]=app[ro];
  ro--;
 }
 
//----------------------------------

 ro=0;              
 while(ro<26){
             
  app[ro]=diso3[ro];
  ro++;
 }
       
 ro=25;
 while(1){
          
  if(ro==0){
           
	diso3[25]=app[ro];
   break;
  }
  diso3[ro-1]=app[ro];
  ro--;
 }
}

void cifratura(char &c,int &i1,int &j1,int &conta){
     
 int x,y,re;
 
 for(y=0;y<26;y++){
                   
  if(c==tastiera[y]){
                     
   x=y;
   break;             
  }        
 }
   
 for(y=0;y<26;y++){     
                                    
  if(diso1[x]==rot1[y]){
                        
   x=y;
   break;                     
  }                 
 }
  
 for(y=0;y<26;y++){
                   
  if(diso2[x]==rot2[y]){
                        
   x=y;
   break;                     
  }                 
 }
  
 for(y=0;y<26;y++){
                   
  if(diso3[x]==rot3[y]){
                        
   x=y;
   break;                     
  }      
 }           
   
 re=x+1;
 if(re==26)
  re=0;
 while(re<26){
              
  if(riflettore[x]==riflettore[re]){
                                    
   x=re;
   break;
  }
  else
   re++;
    
  if(re==26)
   re=0;
 }
     
 for(y=0;y<26;y++){
                   
  if(rot3[x]==diso3[y]){
                        
   x=y;
   break;
  }
 }
  
 for(y=0;y<26;y++){
                   
  if(rot2[x]==diso2[y]){
                        
   x=y;
   break;
  }
 } 
  
 for(y=0;y<26;y++){
                   
  if(rot1[x]==diso1[y]){
                        
   x=y;
   break;
  }
 }     
 
 i1+=1;
 gotoxy(i1,j1);
 if(conta==5){
              
  i1+=1;
  cout<<" "<<tastiera[x];
  conta=0;
 }
 else
  cout<<tastiera[x];
        
 conta++;
 
 rotazione1();
 nr++;
 animazione3();
 
 if(nr==26){
 
  rotazione2();
  nr2++;
  nr=0;
  animazione2();
  animazione3();
 }
 if(nr2==26){
 
  rotazione3();
  nr3++;
  nr2=0;
  animazione1();
  animazione2();          
 }
 if(nr3==26)
  nr3=0;
}

int main(){   
 
 char c,ch;
 int conta=0,i1,j1,gx,gy;
 bool repeat=true;
 
 gx=32;
 gy=2;
 while(gx<45){
             
  gx++;
  gotoxy(gx,gy);
  putch(220);
 }
    
 while(gy<6){
            
  gy++;
  gotoxy(gx,gy);
  putch(220);
 }
    
 while(gx>33){
             
  gx--;
  gotoxy(gx,gy);
  putch(220);
 } 
    
 while(gy>2){
            
  gy--;
  gotoxy(gx,gy);
  putch(220);
 }
 
 gotoxy(37,4);
 cout<<"ENIGMA";  
 gotoxy(24,13);
 cout<<"La macchina cifrante dei nazisti";
 
 Sleep(5000);
 gotoxy(22,19);
 cout<<"Premere un tasto a caso per casare...";
 getchar();
 
 system("cls");
 memoria();
 caselle();
 rotori();
 chiave();
 
 system("cls");
 caselle();
 rotori();
 animazione1();
 animazione2();
 animazione3();
 
 Sleep(500);
 gotoxy(2,18);
 cout<<"| Messaggio : ";
 gotoxy(2,21);
 cout<<"| Cifratura : ";
 gotoxy(44,3);
 cout<<"- Premere '<--' per cambiare";
 gotoxy(44,5);
 cout<<"- Premere 'SPAZIO' per cancellare";
 gotoxy(44,7);
 cout<<"- Premere 'ESC' per terminare";
 
 i=15;
 j=18;
 i1=15;
 j1=21;
 while(repeat){
 
  if(kbhit()){
   
   ch=getch();
   if((ch!=27)&&(ch!=32)&&(ch!=8)){
   
    i+=1;
    gotoxy(i,j);
    c=ch-32;
    cout<<c;
    gotoxy(i+1,j+1);
    putch(127);
    gotoxy(i,j+1);
    putch(32);
    cifratura(c,i1,j1,conta);
   }
   
   switch(ch){
   
    case 27:
     repeat=false;
     break;
    case 32:
     i=15;
     i1=15;
     while(i<81){
                 
      gotoxy(i,j);
      putch(32);
      gotoxy(i,j+1);
      putch(32);
      gotoxy(i1,j1);
      putch(32);
      i1++;
      i++;
     }
     i=15;
     i1=15;
     conta=0;
     break;
    case 8:
     chiave();
     system("cls");
     rotori();
     caselle();
     reset();
     gotoxy(2,18);
     cout<<"| Messaggio : ";
     gotoxy(2,21);
     cout<<"| Cifratura : ";
     gotoxy(44,3);
     cout<<"- Digitare '<--' per cambiare";
     gotoxy(44,5);
     cout<<"- Digitare 'SPAZIO' per cancellare";
     gotoxy(44,7);
     cout<<"- Digitare 'ESC' per terminare";
     animazione1();
     animazione2();
     animazione3();
     i=15;
     j=18;
     i1=15;
     conta=0;
   }
  }
 }
 return 0;
}
