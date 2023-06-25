# Sorted

Looking at the question we can mathematically as well as computationally compute that the maximum number of moves taken will be 8.

## Proving Mathematically that Maximum Moves is 12 :

Let f(n) be the worst-case number of moves needed for a permutation of 1, 2, ... , n. Then we certainly have f(n+1) ≤ f(n) + 2, because if the permutation starts with k, then we need at most f(n) moves to get to k, 1, ... , k-1, k+1, ... , n, n+1. Then reversing the k-1 numbers starting with 1, gives k, k-1, ... , 1, k+1, ... , n, n+1. Then reversing the first k numbers gives 1, 2, ... , n, n+1.

First we note that f(3) = 1. Consider a permutation of {1, 2, 3, 4}. If either 1 or 4 is the first or the last element, we need one move to monotonize the other three elements, and at most one more to monotonize the whole permutation. Of the remaining four permutations, (2,1,4,3) and (3,4,1,2) can also be monotonized in two moves. The permutations (2, 4, 1, 3) and (3, 1, 4, 2) require 3 moves, but by this we can choose whether to change them into (1,2,3,4) or (4,3,2,1).
Hence f(4) = 3. We now consider a permutation of {1, 2, 3, 4, 5}. If either 1 or 5 is in the first or last position, we can monotonize the rest in 3 moves, but in such a way that the whole permutation can be monotonized in the next move. If this is not the case, then either 1 or 5 is in the second or fourth position. Then we simply switch it to the outside in one move and continue as in the former case. Hence f(5) = 4.

Since f(n+1) ≤ f(n) + 2, we get that f(9) ≤ 12.

## Computational Maxima :

Since we know that it will take at most 12 moves. I wrote a brute force script for that and found out actually the maximum possible number of moves. This turned out to be 8. 

## Solution : 
Basically what my solution is that it is preferable to go from a random to an intermediate sequence and from the final sequence to the intermediate sequence and then sum up the number of operations taken rather than going directly from the sequence to the final sequence. This idea reduces time complexity by a lot. This is the basis of my whole solution to take at max 4 moves from going from the initial sequence to the intermeditary sequence and to take at max 4 moves from going from the final sequence go the intermiditary sequence since the maximum number of moves possible is 8.
