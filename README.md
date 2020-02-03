# 0x1B: C - Sorting algorithms & Big O notation
## Repository: sorting_algorithms

# :space_invader:

### Project Description
In this project, students learn about different sorting algorithms and how to select the right one to use. Big O notation is also visited and how to evaluate the time complexity of an algorithm.

# Project Files
Project Name | Description
------|-----------------------
print_array.c | Provided function to print an array of integers
print_list.c |  Provided function to print a list of integers
sort.h | Header file for sorting_algorithms project
0-bubble_sort.c | Function that sorts array of integers using Bubble Sort
0-O | Big O notations for Bubble Sort time complexity
1-insertion_sort_list.c | Function that sorts doubly linked list of ints using Insertion Sort
1-O | Big O notations for Insertion Sort time complexity
2-selection_sort.c | Function that sorts array of integers using Selection Sort
2-O | Big O notations for Selection Sort time complexity
3-quick_sort.c | Function that sorts array of integers using Quick Sort
3-O | Big O notations for Quick Sort time complexity
100-shell_sort.c | Function that sorts array of integers using Shell Sort
100-O | Big O notations for Shell Sort time complexity
101-cocktail_sort_list.c | Function that sorts doubly linked list of ints using Cocktail Shaker Sort
101-O | Big O notations for Cocktail Shaker Sort time complexity
102-counting_sort.c | Function that sorts array of integers using Counting Sort
102-O | Big O notations for Counting Sort time complexity
103-merge_sort.c | Function that sorts array of integers using Merge Sort
103-O | Big O notations for Merge Sort time complexity
104-heap_sort.c | Function that sorts array of integers using Heap Sort
104-O | Big O notations for Heap Sort time complexity
105-radix_sort.c | Function that sorts array of integers using Radix Sort
105-O | Big O notations for Radix Sort time complexity
106-bitonic_sort.c | Function that sorts array of integers using Bitonic Sort
106-O | Big O notations for Bitonic Sort time complexity
107-quick_sort_hoare.c | Function that sorts an array of integers using Quick Sort
107-O | Big O notations for Quick Sort time complexity
1000-sort_deck.c | Function that sorts a deck of cards from Ace to King & Spades to Diamonds
deck.h | Header file for project 1000-sort_deck.c

# Examples

### Bubble Sort :bath:
- AKA **Sinking Sort**
- Compares adjacent elements and swaps them if in the wrong order, then passes through the list until elements are sorted

### Insertion Sort :information_desk_person:
- Simple, adaptive sorting algorithm
- Build the final sorted array one element at a time

### Selection Sort :mag:
- In-place comparison sorting algorithm
- Divide input into items sorted, and items to be sorted, then swaps them until order is found

### Quick Sort :horse_racing:
- AKA **Partition-Exchange Sort**
- *Divide-and-conquer* by selecting pivot element and partitioning other elements into two sub-arrays based on less than or greater to the pivot element. The sub-arrays then sort recursively

### Shell Sort :shell:
- In-place comparison sorting algorithm
- Sort pairs of elements far apart, then progressively reduce the gap between elements to be compared

### Cocktail Shaker Sort :cocktail:
- AKA **Bidirectional, Ripple, Shuffle and Shuttle Sort**
- Extend *Bubble Sort* by operating in sorting both forwards and backwards

### Counting Sort :game_die:
- Non-comparitive sorting algorithm
- Count number of objects that have distinct value & determine positions of each key in output sequence

### Merge Sort :crossed_flags:
- Comparison-based sorting algorithm
- *Divide-and-conquer* into sublists, each containing one element to be sorted, then run till only the sorted list remains

### Heap Sort :moneybag:
- Comparison-based sorting algorithm
- Like *Selection Sort*, this divides input into sorted and unsorted regions without a linear-time scan

### Radix Sort :computer:
- AKA **Bucket Sort and Digital Sort**
- Non-comparative sorting algorithm
- Create and distribute elements into buckets according to their radix

### Bitonic Sort :moyai:
- Parallel algorithm for sorting and used as a construction method for building sorting network
- Networks made of O(nlog^2(n)) comparators and have delay of O(log^2(n)) where n is number of items

### Quick Sort - Hoare Partition scheme :steam_locomotive:
- More efficient than standard *Quick Sort*
- Operates pivot on *median-of-three* rule to estimate optimal pivot rather than any element

# Authors
- Kathleen McKiernan - kathleen.mckiernan@holbertonschool.com
- Mitchell Moscovics - mitchell.moscovics@holbertonschool.com

## Created for Holberton School NHV

# :octocat: