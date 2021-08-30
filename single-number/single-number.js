var singleNumber = function(nums) {
    let ans = 0
    for(let i = 0 ; i <nums.length;i++){
        ans = ans ^ nums[i]
    }
    return ans
};
// for example [4,1,2,1,2]
// 4^1 = 4+1 =5
// 5^2=5+2=7
// 7^1= 7-1=6(because we already added 1, as per XOR logic it will subtract)
// Similarly 6^2 = 6-2 =4 (because we already added 2, now we have to subtract it as per XOR operator)
