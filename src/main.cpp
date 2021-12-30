#include <dpp/dpp.h>
#include <iostream>

int main()
{
	if (!getenv("DISCORD_TOKEN")) {
		std::cout << "Could not find the DISCORD_TOKEN environment variable.\n";
		return 1;
	}

    dpp::cluster bot(getenv("DISCORD_TOKEN"));
 
    bot.on_ready([&bot](const auto & event) {
        std::cout << "Logged in as " << bot.me.username << "!\n";
    });
 
    bot.on_message_create([&bot](const auto & event) {
        if (event.msg.content == "!ping") {
            bot.message_create(dpp::message(event.msg.channel_id, "I like cheese"));
        }
    });
 
    bot.start(false);
    return 0;
}
