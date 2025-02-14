#include <windows.h>
#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <shellapi.h> // For opening URLs

// Function to display a popup message
void ShowPopup(const std::string& title, const std::string& message) {
    MessageBoxA(NULL, message.c_str(), title.c_str(), MB_OK | MB_ICONINFORMATION);
}

// Function to get a random brainrot message
std::string GetRandomBrainrotMessage() {
    std::vector<std::string> messages = {
        "Skibidi toilet rizz only in Ohio!",
        "Baby Gronk is rizzing up Livvy Dunne!",
        "Fanum tax? More like fanum rizz!",
        "Sigma grindset: Mewing while gyatting!",
        "Breckie Hill is the queen of the skibidi grindset!",
        "Fortnite glazing in the goon cave!",
        "Mewing so hard my negative canthal tilt turned positive!",
        "Turkish Quandale Dingle is the CEO of rizz!",
        "Blue shirt kid vs. Andrew Tate: Skibidi showdown!",
        "Duke Dennis: Did you pray today?",
        "Livvy Dunne is rizzing up Baby Gronk!",
        "Sussy imposter Pibby glitch in real life!",
        "Sigma alpha omega male grindset unlocked!",
        "Andrew Tate in the goon cave: Skibidi vibes only!",
        "Freddy Fazbear vs. Colleen Ballinger: Who wins?",
        "Smurf cat vs. Strawberry elephant: Brainrot battle!",
        "Blud thinks he's Carti, literally hitting the griddy!",
        "Ambatukam bro really thinks he's the Ocky Way!",
        "Kai Cenat’s fanum tax is breaking the internet!",
        "Garten of Banban: No edging in class!",
        "Not the mosquito again! Bussing Axel in Harlem!",
        "Whopper whopper whopper whopper, 1 2 buckle my shoe!",
        "Goofy ahh Aiden Ross in Sin City!",
        "Monday left me broken: Quirked up white boy busting it down!",
        "Goated with the sauce: John Pork’s Grimace shake!",
        "Kiki, do you love me? Huggy Wuggy’s lightskin stare!",
        "Biggest bird Omar the referee: Amogus uncanny!",
        "Wholesome Reddit Chungus Keanu Reeves Pizza Tower!",
        "Zesty Poggers Kumalala Savesta Quandale Dingle!",
        "Glizzy Rose Toy Ankha Zone Thug Shaker Morbin Time!",
        "DJ Khaled: Another one! Sisyphus Oceangate vibes!",
        "Shadow Wizard Money Gang: Ayo the pizza here PLUH!",
        "Nair butthole waxing T-pose Ugandan Knuckles!",
        "Family Guy funny moments with Subway Surfers gameplay!",
        "Nickeh30 ratio UwU delulu opium bird CG5!",
        "Mewing Fortnite battle pass: All my fellas!",
        "GTA 6 Backrooms Gigachad based cringe kino!",
        "Redpilled No Nut November vs. Pokénut November!",
        "Foot fetish F in the chat: I love lean!",
        "Looksmaxxing gassy social credit Bing Chilling!",
        "Xbox Live MrBeast: Kid named finger!",
        "Better Call Saul: I am a surgeon!",
        "Hit or miss, I guess they never miss, huh?",
        "I like ya cut G: Ice Spice gooning fr!",
        "We go gym: Kevin James Josh Hutcherson vibes!",
        "Coffin of Andy and Leyley: Metal pipe falling!"
    };

    int index = rand() % messages.size();
    return messages[index];
}

// Function to get a random Skibidi Toilet joke
std::string GetRandomSkibidiJoke() {
    std::vector<std::string> jokes = {
        "Why did the skibidi toilet go to school? To get more rizz!",
        "What does a skibidi toilet say? Dab dab dab yes yes!",
        "Why don’t skibidi toilets fight? They don’t have the gyatt!",
        "What’s a skibidi toilet’s favorite drink? Grimace shake!",
        "Why did the skibidi toilet fail the test? Too much Ohio rizz!",
        "Why did Donald Trump visit the skibidi toilet? To negotiate rizz!",
        "What’s a Balkan sigma’s favorite song? Skibidi Rizzler Anthem!",
        "Why did the Grimace shake go to Ohio? To pay the fanum tax!",
        "What’s Donald Trump’s sigma grindset? Mewing at the wall!",
        "Why did Sophie Rain go to Ohio? To collect the fanum tax!",
        "Why did the barber bring a skibidi toilet to work? To teach low taper fades!",
        "What’s a skibidi toilet’s skincare routine? Grimace shake for hyperpigmentation!",
        "Why did the low taper fade go to Ohio? To rizz up the barbers!",
        "What’s Donald Trump’s haircut? A low taper fade with extra rizz!",
        "Why did Sophie Rain get a low taper fade? To flex on the hyperpigmentation grindset!",
        "Why did Baby Gronk visit Ohio? To mog on the rizzlers!",
        "What’s Livvy Dunne’s favorite drink? Grimace shake with extra gyatt!",
        "Why did Breckie Hill go to Ohio? To collect the fanum tax from Caseoh!",
        "What’s John Pork’s sigma grindset? Mewing while jelking!",
        "Why did Duke Dennis get bricked up? Too much Grimace shake!"
    };

    int index = rand() % jokes.size();
    return jokes[index];
}

// Function to open a random brainrot MLG YouTube video
void OpenRandomMLGVideo() {
    std::vector<std::string> videos = {
        "https://www.youtube.com/watch?v=WePNs-G7puA", // Example video (replace with actual MLG links)
        "https://www.youtube.com/shorts/HB4U3L9tn3Q", // Example video
        "https://www.youtube.com/watch?v=o-YBDTqX_ZU", // Example video
        "https://www.youtube.com/watch?v=frAhxXbLetk", // Example video
        "https://https://www.youtube.com/watch?v=HS5RsQV9g0w", // Example video
        "https://www.youtube.com/shorts/qUkH2X38OqA", // Example video
        "https://www.youtube.com/watch?v=s_rUYxT8_xI", // Example video
        "https://www.youtube.com/watch?v=ExXG-II_8eY", // Example video
        "https://www.youtube.com/watch?v=1PJ5oSSyK_4", // Example video
        "https://www.youtube.com/watch?v=PmD6ONQqi9Y"  // Example video
    };

    int index = rand() % videos.size();
    ShellExecuteA(NULL, "open", videos[index].c_str(), NULL, NULL, SW_SHOWNORMAL);
}

int main() {
    ShowWindow(GetConsoleWindow(), SW_HIDE);
    srand(static_cast<unsigned int>(time(0)));

    // Run indefinitely
    while (true) {
        // Generate a random delay between 60 and 90 seconds
        int delay = 20 + (rand() % 10); // 60-90 seconds
        Sleep(delay * 1000); // Convert to milliseconds

        // Show a random brainrot popup
        std::string title = "Brainrot Alert!";
        std::string message = GetRandomBrainrotMessage();
        ShowPopup(title, message);

        // Tell a Skibidi Toilet joke
        std::string joke = GetRandomSkibidiJoke();
        ShowPopup("Skibidi Toilet Joke", joke);

        // Open a random brainrot MLG YouTube video
        OpenRandomMLGVideo();
    }

    return 0;
}