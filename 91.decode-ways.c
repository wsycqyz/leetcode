/*
 * @lc app=leetcode id=91 lang=c
 *
 * [91] Decode Ways
 */

Solution1:
int numDecodings(char * s){
    int n=strlen(s);
    int dp[n+1];
    dp[n]=1;
    int i;
    
    if (n==0) {
        return 0;
    }

    for (i=n-1;i>=0;i--) {
        if (s[i]=='0') {
            dp[i]=0;
        } else {
            dp[i]=dp[i+1];
            if ((i<n-1) && (s[i]=='1'||s[i]=='2'&&s[i+1]<'7')) {
                dp[i]+=dp[i+2];
            }
        }
    }

    return dp[0];
}

// @lc code=start

int numDecodings(char * s){
    int n=strlen(s);
    int dp[n];
    int i;
    char num_s[3];
    int num;

    if (s==NULL) {
        return 0;
    }
    if (n>=1&&s[0]=='0') {
        return 0;
    } else {
        dp[0]=1;
    }

    for (i=1;i<n;i++) {
        strncpy(num_s, s+i-1, 2);
        num=atoi(num_s);
        if (num==0) {
            return 0;
        } else if (num==10||num==20) {
            if (i>1) {
                dp[i]=dp[i-2];
            } else {
                dp[i]=1;
            }
        } else if (num%10==0) {
            return 0;
        }else if (num>=1&&num<=9||num>26) {
            dp[i]=dp[i-1];
        
        } else if ((num>=11&&num<=19) || (num>=21&&num<=26)) {
            if (i>1) {
                dp[i]=dp[i-1]+dp[i-2];
            } else {
                dp[i]=2;
            }
        }
    }

    return dp[n-1];
}
// @lc code=end

