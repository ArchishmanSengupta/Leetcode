class Solution {
public:
    vector<int> countBits(int n) {
         vector<int> v(n+1,0);
        v[0]=0;
        
        for(int i=1;i<=n;i++){
            if(i&1){
                v[i]=v[i/2]+1;
            }
            else v[i]=v[i/2];
        }
        return v;
    }
    
};