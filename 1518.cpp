//  numWaterBottles(int numBottles, int numExchange) {
//         int n = numBottles,x = numExchange;
//         int a,b;
//         int sum = n;
//         while(n>=x){
//             a = n/x;
//             b = n%x;
//             sum = sum + a;
//             n = a+b;
//         }
//         return sum;