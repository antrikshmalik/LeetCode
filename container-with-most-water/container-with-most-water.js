/**
 * @param {number[]} height
 * @return {number}
 */
const maxArea = function (heights) {
  let i = 0, j = heights.length - 1, maxAr = 0;
  while (i < j) {
    let height = Math.min(heights[i], heights[j]);
    let width = j - i;
    let area = height * width;
    maxAr = Math.max(area, maxAr);
    if (heights[i] <= heights[j]) {
      i++;
    } else {
      j--;
    }
  }
  return maxAr;
};