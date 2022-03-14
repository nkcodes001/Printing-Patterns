
#include <iostream>

using namespace std;

/*int main()
{
   int i,j,n;
   cin>>n;
   for(i=1;i<n;i++){
       for(j=1;j<=i;j++ && i++){
           cout<<i<<" ";
       }
       cout<<"\n";
   }
   

    return 0;
}*/
/* floyds Triangle*/
int main(){
   int i,j,n;
   cin>>n;
   for(i=1;i<n;i++){
       for(j=1;j<=i;j++&& i++){
           cout<<i<<" ";
       }
       cout<<"\n";
   }
   

    return 0;
}

