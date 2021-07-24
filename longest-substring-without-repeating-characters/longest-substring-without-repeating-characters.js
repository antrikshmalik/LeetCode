/**
 * @param {string} s
 * @return {number}
 * "abcabcbb"
 */
const lengthOfLongestSubstring = function (s) {
  if (s.length <= 1) return s.length;
  let ptr1 = 0, ptr2 = 0, longest = 0;
  let visited = {}
  let strLen = s.length-1;
  while (ptr2 <= strLen) {
    let winSize = ptr2 - ptr1 ;
    if (!visited[s[ptr2]]) {
      visited[s[ptr2]] = true;
      ptr2++;
      longest = Math.max(longest, winSize);
    } else {
      delete visited[s[ptr1]];
      ptr1++;
    }
  }
  return longest+1;
};