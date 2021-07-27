/**
 * @param {string} s
 * @return {boolean}
 */
var isPalindrome = function(s) {
    s = s.replace(/[^A-Za-z0-9]/g, '').toLowerCase();
    let ptr1 = 0, ptr2 = s.length-1;
    while(ptr1<=ptr2){
        if(s[ptr1] !== s[ptr2]) {
            return false;
        }
        ptr1++;
        ptr2--;
    }
    return true;
};