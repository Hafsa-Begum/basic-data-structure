/*
                        Array        Singly-linked-list             Doubly-linked-list
Insert-head              O(N)              O(1)                             O(1)
Insert-tail              O(1)              O(1)                             O(1)
Insert-at-position       O(N)              O(N)                             O(N)

Delete-head              O(N)              O(1)                             O(1)
Delete-tail              O(1)              O(N)                             O(1)
Delete-from-position     O(N)              O(N)                             O(N)


****
1. all 3 data structures complexity is same in the case of inserting at any position
and deleting from any position
2. array is bad in inserting head and deleting head
3. singly-linked-list is bad at deleting from tail.
4. doubly-linked-list is best in deleting head , tail and inserting at head, tail
*/

