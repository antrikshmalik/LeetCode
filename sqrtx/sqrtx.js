/**
 * @param {number} x
 * @return {number}
 */
var mySqrt = function(x) {
  let lo = 0, hi = x, mid = Math.floor(hi/2)
  
  while (lo <= hi){
      mid = Math.floor((hi + lo)/2)
      if(mid * mid === x){
          return mid
      }
      if(mid * mid > x){
          hi = mid - 1
      } else {
          lo = mid + 1
      }
  }
    return hi
};