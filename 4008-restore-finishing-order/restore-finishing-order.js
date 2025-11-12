/**
 * @param {number[]} order
 * @param {number[]} friends
 * @return {number[]}
 */
var recoverOrder = function (order, friends) {
    const friend = new Set(friends);
    const result = [];

    for (let i = 0; i < order.length; i++) {
        if (friend.has(order[i])) {
            result.push(order[i]);
        }
    }
    return result;
};