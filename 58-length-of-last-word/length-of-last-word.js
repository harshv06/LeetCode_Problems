/**
 * @param {string} s
 * @return {number}
 */
var lengthOfLastWord = function(s) {
    arr=s.split(" ");
    n=arr.length;
    i=n-1;
    while(arr[i]===""){
        i--;
    }
    word=arr[i]
    return word.length;
};