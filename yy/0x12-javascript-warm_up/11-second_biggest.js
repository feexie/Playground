#!/usr/bin/node
if (process.argv.length < 4) {
  console.log('0');
} else {
  const x = process.argv.slice(2);
  x.sort((a, b) => b - a);
  console.log(x[1]);
}
