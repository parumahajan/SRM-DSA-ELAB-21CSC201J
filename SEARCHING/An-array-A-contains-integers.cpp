#include<bits/stdc++.h>
using namespace std;
int main(){
    long long ans=0;
    std::vector<long long> v(400010);
    for (int i = 1; i < 400000; i++) {
        ans+=i*floor(sqrt(i))+ceil(i/2.0);
        v[i] = ans;
        }
        int q,l,r,a,b;
        cin>>q;
        while(q--){
            cin>>l>>r;
            a = lower_bound(v.begin(), v.end(),l) -v.begin();
            b = lower_bound(v.begin(), v.end(),r)-v.begin();
            cout<<b-a +1<<endl;
            }
            return 0;
            printf("while(l<ans1)");
}