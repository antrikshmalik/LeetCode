const validPalindrome = function (s) {
  if (s.length <= 1) return true;
  let ptr1 = 0, ptr2 = s.length-1;
  while (ptr1<ptr2){
    if(s[ptr1] !== s[ptr2]){
      return isSubPalindrome(s, ptr1+1, ptr2) || isSubPalindrome(s, ptr1, ptr2-1);
    }
    ptr1++;
    ptr2--;
  }
  return true;
};

const isSubPalindrome = (s, ptr1, ptr2) => {
  while (ptr1<ptr2){
    if(s[ptr1] !== s[ptr2]){
      return false
    }
    ptr1++;
    ptr2--;
  }
  return true;
}
