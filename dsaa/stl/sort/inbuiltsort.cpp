// time _complexity -- nlogn
#include<bits/stdc++.h>1
 cin>>n;
 vector<int> a(n);
 for(int i=0; i<n; i++){
     cin>>a[i];
      }
      sort(a.begin(),a.end());
 for(int i=0; i<n; i++){
     cout<<a[i]<<" ";
     }
 cout<<endl;
}