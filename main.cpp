#include<bits/stdc++.h>
char w[99];int a[99],n,i,j;main(){scanf("%s",w);std::string s(w),r(s.rbegin(),s.rend());puts(s==r?"Palindrom":"Nem palindrom");for(scanf("%d",&n);i<n;)scanf("%d",&a[i++]);for(i=n-1;i>0;i--)for(j=0;j<i;j++)if(a[j]>a[j+1])std::swap(a[j],a[j+1]);for(;i<n;)printf("%d ",a[i++]);}
