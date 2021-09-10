/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
  const fromArray = digits.join(''); // get Digits out of Array
  const toInt = BigInt(fromArray) ; //Dont use parseInt, use BigInt instead :) 
  const addOne = toInt + 1n; // add one! 
  const result =  Array.from(String(addOne), Number); // return digits to array
  return result
};