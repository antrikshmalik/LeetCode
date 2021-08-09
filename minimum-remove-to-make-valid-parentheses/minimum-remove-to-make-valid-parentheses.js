const minRemoveToMakeValid = function (s) {
  if(s.length === 0) return s;
  let stack = []
  for (let i = 0; i < s.length; i++) {
    if (s[i] === "("){
      stack.push(i);
    }
    if(s[i] === ")") {
      if (stack.length === 0) {
        s = removeCharAt(s, i);
        i--;
      } else {
        stack.pop();
      }
    }
  }
  if(stack.length){
    while(stack.length){
      s = removeCharAt(s, stack.pop());
    }
  }
  return s;
};
const removeCharAt = (s, ptr) => {
  let arr = s.split("")
  let remove = arr.splice(ptr, 1)
  s = arr.join("")
  return s;
}