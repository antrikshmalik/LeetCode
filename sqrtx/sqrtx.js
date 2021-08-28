/**
 * @param {number} x
 * @return {number}
 */
var mySqrt = function(x) {
  let low = 0, high = x, mid;
    while(low<=high){
        
       mid = Math.floor((low+high)/2);
       
       if(mid*mid < x){
           if((mid+1)*(mid+1)>x){
               return mid;
           }
           else{
               low = mid +1;
           }
       }
       else if(mid*mid > x){
           high = mid -1 ;
       }
       else {
           return mid;
       }
       
   }
};