Name: Shristi Gupta

Sec: A batch A2

Roll: 23

Problem Name: Maximum Possible Sum
Problem Statement: Given three queues of the positive numbers, the task is to find the possible equal maximum sum of the queues with the removal of first elements allowed

Implementation using arrays

	Adding elements to a queue follows the following logic:

The first and last elements in the queue will be referred to by two pointers, 'front_q' and 'rear_q' respectively. On inserting any number in the queue, the rear pointer will be increased by one.

	deleting elements from a queue follows the following logic:

The front pointer will increase by one when any number is deleted from the queue.

	Main logic of the code:

The first step is to take a number of elements per queue, then we will dynamically allocate a size for each queue and then add elements to each queue. We will calculate and store the sums of each queue in separate sum variable as we add elements. In the following step, we will calculate the maximum of these sums, and whichever sum is the maximum, one element from that queue will be deleted, and its value will also be deducted. If we encounter equal sum or zero, we will continue in an infinite while loop.

Time complexity of the code: O(n)

Space complexity of the code: O(1)
                                                      
                                                       
                      


