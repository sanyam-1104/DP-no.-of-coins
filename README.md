# DP-no.-of-coins
In this problem we have used Dynamic programming to calculate the minimum no. of coins to get a value if we have coins of denominations 1,5,7

what we are doing is that we are starting from the given no. and we are breaking the problem into possible subproblems.i.e. if we have to calculate the minimum no. of coins to get 13 we are checking the minimum no. of coins required to get 6,8 and 12 and repeating this procedure recursively until we reach our base case
i.e. if(n==0) return 0;
