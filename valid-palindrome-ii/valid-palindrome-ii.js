const validPalindrome = function (s) {
  if (s.length <= 1) return true;
  let ptr1 = 0, ptr2 = s.length-1;
  while (ptr1<ptr2){
   if (s[ptr1] === s[ptr2]) {
     ptr1++;
     ptr2--;
   } else {
     let case1 = removeCharAt(s, ptr1);
     case1
     let case2 = removeCharAt(s, ptr2);
     case2
     return isPalindrome(case1) || isPalindrome(case2);
   }
  }
  return true;
};

const removeCharAt = (s, ptr) => {
  let arr = s.split("")
  let remove = arr.splice(ptr, 1)
  s = arr.join("")
  return s;
}

const isPalindrome = (s) => {
  let rev = "";
  for (let i = s.length-1; i >= 0 ; i--) {
    rev+=s[i];
  }
  return rev === s;
}