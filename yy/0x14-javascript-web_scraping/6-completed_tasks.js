#!/usr/bin/node

const request = require('request');

request(process.argv[2], (err, response, body) => {
  if (!err) {
    const tasks = JSON.parse(body);
    const completedTasks = [];
    tasks.forEach(function (user) {
      if (completedTasks[user.userId] === undefined) {
        completedTasks[user.userId] = 0;
      }
      if (user.completed === true) {
        completedTasks[user.userId]++;
      }
   });
    const number = {};
    for (let i = 1; i < completedTasks.length; ++i) {
      if (completeTasks[i] > 0) {
        number[i] = completedTasks[i];
      }
    }
    console.log(number);
  }
});
