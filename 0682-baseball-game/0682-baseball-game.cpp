class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int>st;
        int ans=0;
        for(auto i:operations){
            if(i!="C" && i!="D" && i!="+"){
                st.push(stoi(i));
            }
            else{
                if(i=="C"){
                    st.pop();
                }
                else if(i=="D"){
                    int n=st.top()*2;
                    st.push(n);
                }
                else{
                    int a=st.top();
                    st.pop();
                    int b=st.top();
                    st.push(a);
                    st.push(a+b);
                }
            }
        }
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        return ans;
    }
};