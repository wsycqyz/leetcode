/*
 * @lc app=leetcode id=365 lang=cpp
 *
 * [365] Water and Jug Problem
 */

// @lc code=start
class state{
public:
    int a;
    int b;
    state(int x=0,int y=0) {
        a=x;
        b=y;
    }
};
class Solution {
public:
    bool canMeasureWater(int jug1Capacity, int jug2Capacity, int targetCapacity) {
        if (jug1Capacity+jug2Capacity<targetCapacity) {
            return false;
        }

        queue<state*> q;
        q.push(new state());
        set<state*> seen;
        seen.insert(new state());
        
        while(!q.empty()) {
            int a,b;
            state *tmp;
            tmp=q.front();
            q.pop();
            a=tmp->a;
            b=tmp->b;
            if (a==targetCapacity||b==targetCapacity||a+b==targetCapacity) {
                return true;
            }
            set<state*> states;

            states.insert(new state(jug1Capacity, b));
            states.insert(new state(a, jug2Capacity));
            states.insert(new state(0, b));
            states.insert(new state(a, 0));
            states.insert(new state(min(jug1Capacity,b+a), (b<jug1Capacity-a)?0:(b-(jug1Capacity-a))));
            states.insert(new state((a+b<jug2Capacity)?0:(a-(jug2Capacity-b)), min(b+a,jug2Capacity)));
            set<state*>::iterator i,j;
            state *t1,*t2;
            bool flag;
            for (i=states.begin();i!=states.end();i++) {
                t1=*i;
                flag=false;
                for (j=seen.begin();j!=seen.end();j++) {
                    t2=*j;
                    if (t1->a==t2->a&&t1->b==t2->b) {
                        flag=true;
                        break;
                    }
                }
                if (flag) {
                    continue;
                }
                q.push(t1);
                seen.insert(t1);
            }
        }

        return false;
    }
};
// @lc code=end

