#set page(
  paper: "a4",
  margin: (top: 2cm, bottom: 2cm, left: 2cm, right: 2cm),
)
#set text(
  size: 13pt,
  hyphenate: false,
)
#align(center, strong("Lab Index"))
#(
  table(
    columns: (0.5fr, 5fr, 1.5fr, 1.5fr),
    inset: (x: 6pt, y: 10pt),
    align: horizon,
    table.header([*SN*], [*Lab Question*], [*Date*], [*Signature*]),

    [1.], [Write a program to perform different set operations such as union, intersection, and difference.], [], [],
    [2.],
    [Write a program to perform different set operations such as union, intersection, and difference using binary bit representation.],
    [],
    [],

    [3.], [Write a program that finds cartesian product of two sets.], [], [],
    [4.], [Write a program to find different set operations on Fuzzy sets.], [], [],
    [5.], [Write a program to implement ceiling, floor, exponential functions.], [], [],
    [6.], [Write a program to print terms of special sequences such as: 7, 22, 11, 34, 17......8, 4, 2, 1 etc.], [], [],

    [7.], [Write a program to find GCD of two numbers using prime factorization method.], [], [],
    [8.], [Write a program to find GCD of two numbers using Euclidean method.], [], [],
    [9.],
    [Write a program to compute b#super("n") mod m for large n using modular exponentiation computing method.],
    [],
    [],

    [10.], [Write a program to compute an inverse of b modulo m where m > 1 and b and m are relatively prime.], [], [],
    [11.], [Write a program that implements Fermat's theorem.], [], [],
    [12.], [Write a program to perform different operations (join, meet, product) on Boolean matrices.], [], [],

    [13.], [Write a program to implement compound propositions conjunction and disjunction.], [], [],
    [14.], [Write a program to implement compound propositions implication and bi-implication.], [], [],
    [15.], [Write a program to implement De Morgan's law.], [], [],
    [16.],
    [Write a program to show that inference rule Modus Ponens ((p $and$ (p $arrow$ q)) $arrow$ q) is a tautology.],
    [],
    [],

    [17.], [Write a program to generate a truth table for a given logical expression.], [], [],
    [18.], [Write a program for a SAT checker for a two-variable Boolean expression.], [], [],

    [19.], [Write a program that verifies that 1 + 2 + 3 + .... + n = n(n+1)/2.], [], [],
    [20.], [Write a program that reads a number then shows whether it is prime or a product of primes.], [], [],
    [21.], [Write a program to compute a#super("n") using a recursive function.], [], [],
    [22.], [Write a program to compute n! using a recursive function.], [], [],
    [23.], [Write a program to implement sequential search using a recursive function.], [], [],
    [24.], [Write a program to implement binary search using a recursive function.], [], [],

    [25.], [Write a program to implement the pigeonhole principle.], [], [],
    [26.], [Write a program to compute permutation P(n, r) and combination C(n, r).], [], [],
    [27.], [Write a program to print all permutations of ABC.], [], [],
    [28.], [Write a program to print combinations of 3 numbers from a list of 5 numbers.], [], [],
    [29.],
    [Write a program that finds the minimum number of students in a class to guarantee that at least 5 will have birthdays in the same month.],
    [],
    [],

    [30.],
    [Write a program to show that for every integer n there is a multiple of n that contains only 0s and 1s in its decimal expansion.],
    [],
    [],

    [31.], [Write a program to represent a graph using the adjacency matrix method.], [], [],
    [32.], [Write a program to implement Kruskal's algorithm to find the minimum spanning tree.], [], [],
    [33.],
    [Write a program to implement Dijkstra's algorithm for finding the shortest path in a weighted graph.],
    [],
    [],
  )
)
