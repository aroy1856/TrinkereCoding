#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

vector<vector<string>> groupAnnagram(vector<string> &str){
    unordered_map<string, vector<string>> m;
    vector<vector<string>> res;
    for(int i=0; i<str.size(); i++){
        string s = str[i];
        sort(s.begin(), s.end());
        m[s].push_back(str[i]);
    }
    for(auto it = m.begin(); it != m.end(); it++){
        res.push_back(it->second);
    }
    return res;
}

int main()
{
    vector<string> arr{"idea", "idae", "bsnl", "nsbl", "grasim", "bata"};
    vector<vector<string>> res = groupAnnagram(arr);
    for(auto v : res){
        for(auto c : v){
            cout << c << " ";
        }
        cout << endl;
    }

    return 0;
}
