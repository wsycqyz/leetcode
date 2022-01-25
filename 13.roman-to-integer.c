/*
 * @lc app=leetcode id=13 lang=c
 *
 * [13] Roman to Integer
 */

// @lc code=start


int romanToInt(char * s){
    int i=0;
    int re=0;

    while(s[i]!='\0') {
        switch (s[i])
        {
        case 'I':
            if (s[i+1]!='\0') {
                switch(s[i+1])
                {
                    case 'V':
                        i++;
                        re+=4;
                        break;
                    case 'X':
                        i++;
                        re+=9;
                        break;
                    default:
                        re+=1;
                        break;
                }
            } else {
                re+=1;
            }
            break;
        case 'X':
            if (s[i+1]!='\0') {
                switch(s[i+1])
                {
                    case 'L':
                        i++;
                        re+=40;
                        break;
                    case 'C':
                        i++;
                        re+=90;
                        break;
                    default:
                        re+=10;
                        break;
                }
            } else {
                re+=10;
            }
            break;
        case 'C':
            if (s[i+1]!='\0') {
                switch(s[i+1])
                {
                    case 'D':
                        i++;
                        re+=400;
                        break;
                    case 'M':
                        i++;
                        re+=900;
                        break;
                    default:
                        re+=100;
                        break;
                }
            } else {
                re+=100;
            }
            break;
        case 'V':
            re+=5;
            break;
        case 'L':
            re+=50;
            break;
        case 'D':
            re+=500;
            break;
        case 'M':
            re+=1000;
            break;
        default:
            break;
        }
        i++;
    }
    return re;
}
// @lc code=end

