/**
 * @param {string} s
 * @return {boolean}
 */
const isValid = function (s) {
  if(s.length === 0) return true;
  const brackets  ={
    "{" : "}",
    "[" : "]",
    "(" : ")"
  }

  const stack = [];

  for(let i = 0; i < s.length; i++)  {
    if(brackets[s[i]]) {
      stack.push(s[i]);
    } else {
      const leftBracket = stack.pop();
      const correctBracket = brackets[leftBracket];
      if(s[i] !== correctBracket) return false
    }
  }
  return stack.length === 0;
};
console.log(isValid("{[()]}"));