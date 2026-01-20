 Valid Parentheses (LeetCode#20)

Problem Statement
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:
1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.
3. Every close bracket has a corresponding open bracket of the same type.

 Approach: Stack (Push Opposite)
We use a Stack data structure to enforce the Last-In-First-Out (LIFO) order required for nested brackets.

Algorithm:
1. Iterate through the string character by character.
2. If we encounter an opening bracket ( '(', '{',' [' ), we push the expected closing bracket ( ')', '}', ']') onto the stack. This simplifies the comparison logic later.
3. If we encounter a closing bracket:
   - Check if the stack is empty (meaning there is no opening bracket for this closer). If so, return false.
   - Check if the top of the stack matches the current character. If not, return false.
   - If it matches, pop the top element.
4. After the loop, return true only if the stack is empty (meaning all opened brackets were successfully closed).

Complexity Analysis

Time Complexity: O(n)
- We traverse the string s of length n exactly once.
- Stack operations (push, pop, top) are O(1).

Space Complexity: O(n)
- In the worst-case scenario (e.g., "((((("), we push all n characters onto the stack.
- Therefore, the space required grows linearly with the input size.
