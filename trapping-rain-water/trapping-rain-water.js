/**
 * @param {number[]} height
 * @return {number}
 */
var trap = function(heights) {
  let totalWater = 0, maxL = 0, maxR = 0;
  let	leftP = 0, rightP = heights.length-1;
  while(leftP < rightP) {
    let currWater = 0;
    if(heights[leftP] <= heights[rightP]){
      if(heights[leftP] < maxL){
        currWater = maxL - heights[leftP];
      } else {
        maxL = heights[leftP];
      }
      leftP++;
    } else {
      if(heights[rightP] < maxR) {
        currWater = maxR - heights[rightP];
      } else {
        maxR = heights[rightP];
      }
      rightP--;
    }

    if(currWater>=0) {
      totalWater += currWater;
    }
  }
  return totalWater;
};