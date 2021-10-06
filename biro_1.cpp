#include <iostream>

using namespace std;
 
int main()
{

   int i, n, p, m, max = 0;
   int count = 0;
   cout << "Foglalások száma majd a napok száma:";
   cin >> n;
   cin >> m;
   int st[n];
   int ed[n];
   for ( i = 0; i < n; ++i)
   {
       cin >> st[i];  cin >> ed[i];
   }
   int arr[m];
   for (i = 0; i < m; i++)
   {
      arr[i]=0;
   }
   
   for (i = 0; i < n; i++)
   {
     for (p = st[i]; p < ed[i]; p++)
     {
       arr[p] = arr[p]+1;
     } 
   }  
    for (i = 0; i < m; i++)
    {
       if (arr[i]>max)  {max = arr[i];}
    }
    for (i = 0; i < m; i++)
    {
        if (arr[i]==max)    {count++;}  
    }
    cout << max << endl;
    cout << count << endl;
    return 0;
}