/**
 * @param {string[]} names
 * @param {number[]} heights
 * @return {string[]}
 */
let sortPeople = function(names, heights) {
    let people = names.map((name, i) => ({name, height: heights[i]}));
    people.sort((a,b) => b.height-a.height);
    return people.map(person=>person.name);
};