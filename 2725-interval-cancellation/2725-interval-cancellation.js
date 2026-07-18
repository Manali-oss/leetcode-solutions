/**
 * @param {Function} fn
 * @param {Array} args
 * @param {number} t
 * @return {Function}
 */
var cancellable = function(fn, args, t) {

    // Execute immediately
    fn(...args);

    // Execute every t milliseconds
    const timer = setInterval(() => {
        fn(...args);
    }, t);

    // Return the cancel function
    return function() {
        clearInterval(timer);
    };
};