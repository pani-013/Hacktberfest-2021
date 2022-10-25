// https://leetcode.com/problems/the-employee-that-worked-on-the-longest-task/

#include <bits/stdc++.h>
using namespace std; 

 int hardestWorker(int n, vector<vector<int>>& v) {
    // n = 26, logs = [[1,1],[3,7],[2,12],[7,17]]
    int index = v[0][0]; 
    int x = v[0][1]; 
    
    int s = v.size(); 
    
    for(int i=1; i<s; i++)
    {
        int d = v[i][1] - v[i-1][1]; 
        if(d > x)
        {
            x = d; 
            index = v[i][0]; 
        }
        else if(d==x)
        {
            if(index > v[i][0])
                index = v[i][0]; 
        }
    }
    
    return index; 
}

int main()
{
    int n = 26;
    vector<vector<int>>logs = {{1,1},{3,7},{2,12},{7,17}};
    cout<<hardestWorker(n, logs); 
    return 0; 
}
    
