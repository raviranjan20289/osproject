
#include<bits/stdc++.h>
using namespace std;
int main()
{
 int Pono;    
 int Rollno;    
 int j,i,k,cntt,cnt;
 int need[100][100],allocated[100][100],maximum[100][100],available[100],p[100];;

 cout<<"Number of process :";
 scanf("%d",&Pono);
 cout<<"\n  Available Resources: ";
 scanf("%d",&Rollno);
 cout<<"\nInsatnces for resources :\n";
 for(i=0;i<Rollno;i++)
 {  printf("R%d ",i+1);
  scanf("%d",&available[i]);
  }
 printf("\n Enter allocation matrix  \n");
 for(i=0;i<Pono;i++)
 {
 printf("p%d",i+1);   
    p[i]=0;
 for(j=0;j<Rollno;j++)
 {
  scanf("%d",&allocated[i][j]);
 }
}
  printf("\n Enter MAX matrix  \n");

 for(i=0;i<Pono;i++)
 {
 printf("p%d",i+1);
 for(j=0;j<Rollno;j++)
 {
  scanf("%d",&maximum[i][j]);
 }
 }

 for(i=0;i<Pono;i++)
 {
 printf("\np%d\t",i+1) ;
 for(j=0;j<Rollno;j++)
 {
  need[i][j]=maximum[i][j]-allocated[i][j];
  printf("\t%d",need[i][j]);
  }
 }
 k=0;     cntt=0;
 printf("\n\n");
 while(k<15)
 {
 for(i=0;i<Pono;i++)
 {  cnt=0;
 for(j=0;j<Rollno;j++)
 {
  if(p[i]==1)
   break;
  if(need[i][j]<=available[j])
  {
  cnt++;
  }
  if(cnt==Rollno)
  {
  for(j=0;j<Rollno;j++)
  {
  available[j]+=allocated[i][j];
  }
  printf("p%d\t",i+1); 
   p[i]=1;   
    cntt++;
  }
 }
 } k++;
 }
 if(cntt<Pono-1)
 {
 printf("\n deadlock Occured");
 }
      return 0;
 }
