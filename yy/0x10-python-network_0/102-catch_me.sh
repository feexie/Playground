#!/bin/bash
# This script makes a request to 0.0.0.0:5000/catch_me using curl to get the message "You got me!"
curl -s -L -X PUT "0.0.0.0:5000/catch_me" -H "Origin:HolbertonSchool" -d "user_id=98"
