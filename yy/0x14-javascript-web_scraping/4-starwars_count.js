#!/usr/bin/node

const request = require('request');
const api = process.argv[2];

request(api, (err, response, body) => {
  if (!error) {
    let number = 0;
    const data = JSON.parse(body);
    data.results.forEach(function (movies) {
      movies.characters.forEach(function (character) {
        if (character.search('/18/') !== -1) {
          count++;
        }
      });
    });
    console.log(count);
  }
});
