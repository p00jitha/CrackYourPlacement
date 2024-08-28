vector<int> sortByFreq(vector<int>& arr) {
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
            mp[arr[i]]++;
        }
        sort(arr.begin(),arr.end(),[&mp](int a,int b)
        {
            if(mp[a]==mp[b])
            {
                return a<b;
            }
            return mp[a]>mp[b];
        });
        return arr;
    }