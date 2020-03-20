# car-fueling

## Abstract
Greedy Algorithm is a search technique used in computing to find the optimal solution to a computational problem that minimizes a function. Greedy Algorithm is used to solve the Car Fuelling Problem where one must find the minimum number of cities to selected to refuel the gas tank and then reach the destination. Greedy Algorithm is a computer algorithm that search for good solutions to a problem from various possible solutions. The basic elements of Greedy Algorithm are chromosomes, fitness function, selection, crossover and mutation. The Car Fuelling Problem is well known in the field of combinatorial optimization. 
Since it is an NP-complete problem, there is no efficient method to solve this problem and give the best result. Some algorithms give optimal solution, but some other algorithms give the nearest optimal solution. 
The greedy algorithm is a heuristic method which is used to improve the solution space for this problem. The greedy algorithm results in nearest optimal solution within a reasonable time. This project mainly focuses on the comparative study of different selection methods and crossover operators in greedy algorithm to solve Car Fuelling Problem and compute the results.

## Problem Statement
Suppose a person is making a travel plan driving from city 1 to city n, where n>1. Following a route that will go through cities 2 through n-1 in between. The person knows the mileages between two adjacent cities and knows how many miles a full tank of gasoline can travel. Based on this information, the problem is to minimize the number of stops for filling up the gas tank, assuming there is exactly one gas station in each of the cities.

## Algorithm
find_gas_stops():
 current position = start position;
 while (current position < end position)
 compute the position at which car will run out of gas.
 if (that position < end position)
 then find closest gas station before reaching that position. 
output fill up gas at that gas station.
 current position = that gas station location 
else
 current position = end position;
 /* reached */
 
## Explanation
Input: A car which can travel at most L kms with full tank, a source point A, a destination point B and n gas station at distances x1, x2, x3.. xn in kms from A along the path from A to B.
Output: The minimum number of refills to get from A to B, besides refill at A.
This program has loop nested within another loop. So it seems to have O(n*n) run-time. But, the run time of the program is O(n) as
•	CurrentRefills can be at most n-1
•	numRefills can be at most n
•	So, there will be at most n+1 operations
•	O(n+1) => O(n)
