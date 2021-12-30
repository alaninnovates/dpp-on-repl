# D++ bots on Replit [![Run on Replit](https://replit.com/badge/github/alanlichen/dpp-on-repl)](https://replit.com/github/alanlichen/dpp-on-repl)

## How to run your bot

1. Set the `DISCORD_TOKEN` environment variable to your bot's token
2. Put your code in src/main.cpp
3. Click run!


## How to keep your bot online

To keep your bot online, you need to have a webserver and ping it. Every 5 minutes is a good default. If you do not do this, your bot will fall asleep and go offlne.
### Registering an account on UPTIMEROBOT
This part is pretty simple.
Go to [uptimerobot.com](https://uptimerobot.com/) and create an accout if you dont have one.

### Making a moniter
After verifying your account, click "Add New Monitor".
+ For Monitor Type select "HTTP(s)"
+ In Friendly Name put the name of your bot
+ For your url, put the url of the website made for your repl.
+ Select any alert contacts you want, then click "Create Monitor" 
![Uptime robot example](https://i.imgur.com/Qd9LXEy.png)

### And you are good to go!
Your bot should now be good to go, with near 100% uptime.