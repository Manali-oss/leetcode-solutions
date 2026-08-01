/**
 * @param {Object|Array} obj
 * @return {Object|Array}
 */
var compactObject = function(obj) {

    if (Array.isArray(obj)) {
        let arr = [];

        for (let i = 0; i < obj.length; i++) {
            let val = obj[i];

            if (typeof val === "object" && val !== null) {
                val = compactObject(val);
            }

            if (Boolean(val)) {
                arr.push(val);
            }
        }

        return arr;
    }

    let ans = {};

    for (let key in obj) {
        let val = obj[key];

        if (typeof val === "object" && val !== null) {
            val = compactObject(val);
        }

        if (Boolean(val)) {
            ans[key] = val;
        }
    }

    return ans;
};