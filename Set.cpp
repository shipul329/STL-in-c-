/// Count Total distinct number or remove duplicates

#include<bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    
    vector<int>v(n);
    
    set<int>st;
    
    for(int i=0; i<n; i++)
    {
        cin >> v[i];
        
        st.insert(v[i]);
    }
    
    cout << st.size() << '\n';
    
    for(auto it:st)
        cout << it << " ";
    
    cout << '\n';
}

int32_t main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
         solve();
    }
    
    return 0;
    
}
