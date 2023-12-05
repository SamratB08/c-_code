#include<bits/stdc++.h>

using namespace std;

class longestSubstring
{
public:
    int lengthOfLongestSubstring(string str){
        int size = str.size();
        int res = 0;

        for(int i=0; i<size; i++){
            vector<bool> visited(256);

            for (int j = i; j < size; j++)
            {
                if(visited[str[j]] == true){
                    break;
                } else {
                    res = max(res, j-i+1);
                    visited[str[j]] = true;
                }
                cout<<visited[j];
            }
            
        }

        return res;
    }
};

int main(int argc, char const *argv[])
{
    longestSubstring ls;
    string str;

    cout << "Enter a string: ";
    cin >> str;

    int result = ls.lengthOfLongestSubstring(str);

    cout << "\nThe count is: "<<result;

    return 0;
}
