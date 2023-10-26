#include "includes.h"
Discord* g_Discord;

int main()
{
	SetConsoleTitleA("Benjamin | sh3ll.cloud/");
	cout << "[+] bot starting  .. " << endl;
	this_thread::sleep_for(chrono::seconds(3));
	cout << "[+] bot is working now" << endl;
	while (1)
	{
		g_Discord->Initialize();
		g_Discord->Update();
	}



}

