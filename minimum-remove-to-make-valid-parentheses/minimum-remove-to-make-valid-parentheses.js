const minRemoveToMakeValid = function(s) {
  const str = s.split('');
  const stack = [];

  for (let i = 0; i < str.length; i++) {
    if (str[i] === '(') {
      stack.push(i);
    } else if (str[i] === ')' && stack.length) {
      stack.pop();
    } else if (str[i] === ')') {
      str[i] = ''
    }
  }
  while (stack.length) {
    str[stack.pop()] = '';
  }

  return str.join('');
};
