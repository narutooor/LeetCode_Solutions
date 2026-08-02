# LeetCode Solutions — Meta Interview Track

A curated collection of **C++17** solutions for data structures and algorithms, organized around reusable interview patterns.

The objective of this repository is to build reliable performance for Meta-style coding interviews: clarify the problem, derive an efficient approach, communicate invariants, implement cleanly, and validate edge cases under time pressure.

## Focus Areas

- Arrays, hash maps, and prefix techniques
- Two pointers and sliding windows
- Linked lists, stacks, and queues
- Binary search and interval problems
- Trees, tries, and graph traversal
- Heaps, greedy algorithms, and union-find
- Dynamic programming and state compression

## Repository Standards

Each maintained solution should include:

1. A concise problem statement or source link
2. The core algorithmic pattern
3. Time and space complexity
4. Important invariants and edge cases
5. Readable C++17 implementation
6. A small set of representative tests when practical

Preferred naming convention:

```text
<Pattern>/<problem_id>_<descriptive_problem_name>.cpp
```

## Curated Solution Index

| # | Problem | Solution | Difficulty | Pattern | Complexity |
|---:|---|---|:---:|---|---|
| 1 | [Two Sum](https://leetcode.com/problems/two-sum/) | [C++](./Hash_Table/1_Two_Sum.cpp) | Easy | Hash Map | `O(n)` time, `O(n)` space |
| 2 | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/) | [C++](./Linked_List/2_Add_Two_Numbers.cpp) | Medium | Linked List | `O(max(m,n))` time |
| 3 | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | [C++](./Sliding_Window/3_Longest_Substring_Without_Repeating_Characters.cpp) | Medium | Sliding Window | `O(n)` time |
| 1857 | [Largest Color Value in a Directed Graph](https://leetcode.com/problems/largest-color-value-in-a-directed-graph/) | [C++](./algorithms/cpp/largestColorValueInADirectedGraph/LargestColorValueInADirectedGraph.cpp) | Hard | Topological DP | `O(V + E + 26V)` time |

Only verified solution links are listed here. Additional solutions will be added after their paths, explanations, and complexity analyses are reviewed.

## Interview Workflow

For every problem, use the same communication loop:

1. **Clarify** inputs, outputs, constraints, and edge cases.
2. **Establish a baseline** with a correct brute-force approach.
3. **Optimize** by identifying the governing data structure or pattern.
4. **State invariants** before implementation.
5. **Implement** with clear names and minimal incidental complexity.
6. **Validate** normal, boundary, and adversarial cases.
7. **Summarize** complexity and tradeoffs.

## Quality Roadmap

- [ ] Curate a focused set of high-frequency interview patterns
- [ ] Remove duplicate and placeholder entries
- [ ] Add per-solution explanations and complexity notes
- [ ] Add lightweight automated compilation checks
- [ ] Add representative unit tests
- [ ] Maintain a progress dashboard by pattern and difficulty

## Scope

This repository is intended as an interview-preparation and algorithmic-reasoning portfolio. Research code, machine-learning systems, and production projects should live in separate repositories with their own reproducibility documentation, tests, and experiment reports.
