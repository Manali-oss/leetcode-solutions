/**
 * @param {Array} arr
 * @param {number} depth
 * @return {Array}
 */
var flat = function (arr, depth) {
    let ans = [];

    function dfs(arr, d) {
        for (let i = 0; i < arr.length; i++) {
            if (Array.isArray(arr[i]) && d > 0) {
                dfs(arr[i], d - 1);
            } else {
                ans.push(arr[i]);
            }
        }
    }

    dfs(arr, depth);
    return ans;
};