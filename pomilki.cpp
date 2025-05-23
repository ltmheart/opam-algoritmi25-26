# include<iostream>
# include<conio.h>
# include<iomanip> 
using namespace std;
int main (){
int ryad, stovp; cin>>ryad>> stovp; 
int i, j;
int **a=new int *[ryad]; 
for (i=0; i<ryad; i++)
a[i]= new int [stovp];

for(i=0; i<ryad; i++)
for (j=0; j<stovp; j++)
    cin>>a[i][j];
    
for(i=0; i<ryad; i++) {
  for (j=0; j<stovp; j++)
 cout <<setw(4) <<a[i][j]<<" ";
     cout<<endl;}
     
int n=-1; bool dodat; 
for (j=0; j<stovp; j++){
     dodat=true;
     for (i=0; i<ryad; i++)
        if (a[i][j]<0)    {dodat=false; break;}
      if (dodat)   {n=j; break;}
}

if (n==-1) cout<<"no"<<endl;
else cout<<"n="<< n <<endl;
delete []a;
getch();}
