var singleNumber = function(nums) {
    var result = nums[0];
    for(var i = 1; i < nums.length; i++) {
        result = result^nums[i];
    }
    return result;
};
// for example [4,1,2,1,2]
// 4^1 = 4+1 =5
// 5^2=5+2=7
// 7^1= 7-1=6(because we already added 1, as per XOR logic it will subtract)
// Similarly 6^2 = 6-2 =4 (because we already added 2, now we have to subtract it as per XOR operator)