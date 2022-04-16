#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int coupleEntry(vector<int> &color){
    int res=0;
    unordered_map<int,int> boyfriend_color;
    
    for(int i=0; i< color.size(); i++){
        if(boyfriend_color.find(color[i]) == boyfriend_color.end()){
            boyfriend_color[color[i]]++;
        }
        else{
            res += boyfriend_color[color[i]];
            boyfriend_color[color[i]]++;
        }
    }
    return res;
}
int main()
{
    vector<int> arr{1,2,3};
    cout << coupleEntry(arr);

    return 0;
}