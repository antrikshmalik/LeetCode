/**
 * @param {number} x
 * @return {number}
 */
const reverse = function (x){
  const THRESHOLD = 2 ** 31;
  let rev = 0;
  let y = Math.abs(x);

  while (y !== 0) {
    let pop = y % 10;
    y = y / 10 | 0;

    rev = rev * 10 + pop;
  }

  if (rev > THRESHOLD - 1 || rev < -1 * THRESHOLD) {
    return 0;
  }

  return x < 0 ? rev * -1 : rev;
}
