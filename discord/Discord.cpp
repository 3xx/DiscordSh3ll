#include "Includes.h"

void Discord::Initialize()
{
	DiscordEventHandlers Handle;
	memset(&Handle, 0, sizeof(Handle));
	Discord_Initialize("1166896298864156682", &Handle, 1, NULL);

}

void Discord::Update()
{
	static int64_t StartTime = std::chrono::duration_cast<std::chrono::seconds>(std::chrono::system_clock::now().time_since_epoch()).count();
	DiscordRichPresence discordPresence;
	memset(&discordPresence, 0, sizeof(discordPresence));
	discordPresence.state = "sh3ll.cloud";
	discordPresence.details = "Shell Arabia Network";
	discordPresence.startTimestamp = StartTime;
	discordPresence.endTimestamp = NULL;
	discordPresence.largeImageKey = "https://i.ibb.co/4VRgj2L/giphy.png";
	discordPresence.largeImageText = "";
	discordPresence.smallImageKey = "https://c.tenor.com/WQ67K3ynhV0AAAAd/verified.gif";
	discordPresence.smallImageText = "";
	discordPresence.smallImageText = "";
	discordPresence.button1Label = "Join Discord";
	discordPresence.button1Url = "https://discord.gg/Srrqr4p6D3";
	discordPresence.button2Label = "Join WebSite";
	discordPresence.button2Url = "https://sh3ll.cloud/";
	discordPresence.instance = 1;

	Discord_UpdatePresence(&discordPresence);
}
