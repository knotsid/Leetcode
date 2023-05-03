first thought was to see s2 throught a window of length s1
and compare the elements occurrences
​
to compare all the permutations was a heavy task to broke it to just comparing vector containing the indices of characters of s1 and current visible characters of s2 that are being seen throught window.
​
now the problem was to update window on every iteration so we just added the occurrence of next index and removed the occurrence of leftmost index. and again compared the vectors.
​
first comparision is done to check if the first iteration is the occurrence of s1 in s2
later comparisons are done in while loop which performs the ipcoming iterations of window moving.