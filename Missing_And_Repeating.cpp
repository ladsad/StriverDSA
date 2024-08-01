/*https://www.geeksforgeeks.org/find-a-repeating-and-a-missing-number/*/
class Solution{
public:
    vector<int> findTwoElement(vector<int> arr, int n) {
        vector<int> count(n + 1, 0); 
        int repeating = -1, missing = -1;
    
        for (int num : arr) {
            count[num]++;
        }
        
        for (int i = 1; i <= n; i++) {
            if (count[i] == 0) {
                missing = i;
            } else if (count[i] > 1) {
                repeating = i;
            }
        }
    
        return {repeating, missing};
    }
};