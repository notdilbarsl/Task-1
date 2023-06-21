# Whimsical Sorter

time limit per test : 2 seconds

memory limit per test : 256 megabytes

input : standard input

output : standard output

Cards numbered 1 to 9 arranged at random in a row. In a move, one may choose any block of consecutive cards whose numbers are in ascending or descending order, and switch the block around. Find the least number of moves required such that the cards are now arranged in either ascending or descending order.

Moves :

The sequence 415687392 can be changed to 415637892 after one move.

The sequence 415687392 can be changed to 486517392 after one move.

**Input :**

Each test has a single test case. The first line of input contains a random sequence of 1,2,3,...9 separated by spaces. The output for each test should be a single value representing the minimum number of moves required.

**Output :**

The output for each test should be a single value representing the minimum number of moves required.

**Example :**

Input :

4 1 2 3 5 6 9 7 8

Output :

4

**Note :**

4 1 2 3 5 6 9 7 8 will first be changed to 4 3 2 1 5 6 9 7 8.

4 3 2 1 5 6 9 7 8 will then be changed to 1 2 3 4 5 6 9 7 8.

1 2 3 4 5 6 9 7 8 will then be changed to 1 2 3 4 5 6 9 8 7.

1 2 3 4 5 6 9 8 7 will then finally be changed to 1 2 3 4 5 6 7 8 9.

So the minimum number of moves required will be 4.