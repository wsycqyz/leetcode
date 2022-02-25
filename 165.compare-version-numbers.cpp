/*
 * @lc app=leetcode id=165 lang=cpp
 *
 * [165] Compare Version Numbers
 */

// @lc code=start
class Solution {
public:
    int compareVersion(string version1, string version2) {
        int a,b;
        string tmp;
        int i,j;
        i=version1.find(".");
        j=version2.find(".");

        while(true) {
            if (version1.length()==0) {
                a=0;
            }else if (i!=string::npos) {
                a=atoi(version1.substr(0,i).c_str());
                version1=version1.substr(i+1, version1.length()-i-1);                
            } else {
                a=atoi(version1.c_str());
                version1="";
            }
            if (version2.length()==0) {
                b=0;
            } else if (j!=string::npos) {
                b=atoi(version2.substr(0,j).c_str());
                version2=version2.substr(j+1, version2.length()-j-1);                
            } else {
                b=atoi(version2.c_str());
                version2="";
            }
            if (a<b) {
                return -1;
            } else if (a>b) {
                return 1;
            }
            if (i==string::npos&&j==string::npos) {
                break;
            }   
            i=version1.find(".");
            j=version2.find(".");
        }

        return 0;
    }
};
// @lc code=end

