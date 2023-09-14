#!/bin/bash
# This script takes in a URL, sends a GET request to the URL using curl, and displays the body of the response
curl -sfL "$1" -X GET
