const getHeight = function(root){
  let height = 0;
  while(root.left !== null) {
    height++;
    root = root.left;
  }

  return height;
}

const check = function (node, toFind, height){
  let left = 0, right = Math.pow(2, height)-1, count=0;
  while (count<height){
    let mid = Math.ceil((left+right)/2);
    if(toFind >= mid){
      node = node.right;
      left = mid;
    } else {
      node = node.left;
      right = mid-1;
    }
    count++;
  }
  return node !== null;
}

const countNodes = function (root) {
  if(!root) return 0;
  let height = getHeight(root);
  if(height === 0) return 1;
  let other_layers = 0;
  other_layers = Math.pow(2, height) - 1;
  let left=0, right=other_layers, mid;
  while(left<right){
    mid = Math.ceil((left+right)/2)
    if(check(root, mid, height)){
      left = mid;
    } else {
      right = mid-1;
    }
  }
  return other_layers + left + 1;
};
