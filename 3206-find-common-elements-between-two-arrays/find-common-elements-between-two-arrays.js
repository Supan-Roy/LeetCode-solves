/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number[]}
 */
var findIntersectionValues = function(nums1, nums2) {
    let set1 = new Set(nums1);
    let set2 = new Set(nums2);

    let count1 = 0, count2 = 0;

    for(let i=0;i<nums1.length;i++){   // regular for loop
        if(set2.has(nums1[i])){
            count1++;
        }
    }

    for(let i of nums2){              // for...of loop
        if(set1.has(i)){
            count2++;
        }
    }
    return [count1, count2];
};