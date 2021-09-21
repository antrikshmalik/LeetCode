var isSymmetric = function(root) {
    let leftSide = root.left
    let rightSide = root.right
    return checkTree(leftSide, rightSide)
};

function checkTree(q , p){
    if(p === q) return true
    if(p === null || q === null) return false
    if(p.val !== q.val) return false
    let nodeLeft = checkTree(p.left, q.right)
    let nodeRight = checkTree(p.right, q.left)
    // checks whether both sides of each respective tree match 
    return nodeRight && nodeLeft ? true : false
}
