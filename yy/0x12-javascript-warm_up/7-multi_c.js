#!/usr/bin/node
const int = parseInt(process.argv[2]);

if (isNaN(parseInt(int))) {
  console.log('Missing number of occurrences');
} else {
  if (int > 0) {
    for (let x = 1; x <= int; ++x) {
      console.log('C is fun');
    }
  }
}
