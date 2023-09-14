#!/usr/bin/node
exports.nbOccurences = function (list, searchElement) {
  let num = 0;
  for (let x = 0; x < list.length; ++x) {
    if (list[x] === searchElement) {
      num++;
    }
  }
  return num;
};
