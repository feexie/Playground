#!/usr/bin/node
exports.esrever = function (list) {
  const esrever = [];
  for (let x = list.length - 1; x >= 0; x--) {
    esrever.push(list[x]);
  }
  return esrever;
};
