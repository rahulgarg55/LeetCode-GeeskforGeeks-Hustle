class Solution {
public:
    int subtractProductAndSum(int n) {
      int prod_of_digits = 1, sum_of_digits = 0; // Variable to store product and sum of digits of a number
        int x;
        while(n){
            x = n%10; // Get the unit digit
            prod_of_digits = prod_of_digits * (x); // Multiply to the variable keeping product
            sum_of_digits = sum_of_digits + x; // Add to the variable keeping sum
            
            n  = n/10; // Get rid of the unit digit. Reduce the number
        }
        return prod_of_digits-sum_of_digits; // Return the difference
    }
};