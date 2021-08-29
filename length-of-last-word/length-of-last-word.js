/**
 * @param {string} s
 * @return {number}
 */
const lengthOfLastWord = function (s) {
  let arr = [];
  arr = s.split(" ");
  for (let i = arr.length - 1; i >= 0; i--) {
    if ( arr[i].length !== 0){
      return arr[i].length;
    } 
  }
};
