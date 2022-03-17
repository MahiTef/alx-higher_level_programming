#!/bin/bash
# takes in a URL, sends a POST request to the passed URL, displays the body of the response
curl -sd "email=test@gmail.com&subject=I%20wi\
ll%20always%20be%20here%20for%20PLD" "$1"
