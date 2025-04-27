#include <iostream>
#include <fstream>

int main() {
    // Open or create an HTML file
    std::ofstream webPage("index.html");

    // HTML content with requested features
    if (webPage.is_open()) {
        webPage << "<!DOCTYPE html>\n";
        webPage << "<html lang=\"en\">\n";
        webPage << "<head>\n";
        webPage << "<meta charset=\"UTF-8\">\n";
        webPage << "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">\n";
        webPage << "<title>Skatezone - Official Website</title>\n";
        webPage << "<style>\n";

        // Basic styles for the page
        webPage << "body { font-family: Arial, sans-serif; background-color: #333; color: white; text-align: center; padding-top: 50px; }\n";
        webPage << "h1 { color: #00BFFF; }\n";  // Blue text for heading
        webPage << "a { color: #00BFFF; text-decoration: none; font-size: 18px; }\n";
        webPage << "img { width: 300px; height: 200px; margin-top: 20px; }\n";

        // CSS Animation Styles
        webPage << "@keyframes fadeInUp {\n";
        webPage << "  0% { opacity: 0; transform: translateY(20px); }\n";
        webPage << "  100% { opacity: 1; transform: translateY(0); }\n";
        webPage << "}\n";

        webPage << "body { animation: fadeInUp 1.5s ease-out; }\n";  // Apply the animation to the body

        webPage << "</style>\n";
        webPage << "</head>\n";
        webPage << "<body>\n";

        // Thumbnail image (make sure to have the image in the same directory or provide a URL)
        webPage << "<img src=\"thumbnail.jpg\" alt=\"Skatezone Thumbnail\">\n";  // Change the image source if needed

        // Text content
        webPage << "<h1>Welcome to the Skatezone's Official Website!</h1>\n";
        webPage << "<p>Unfortunately, the game is still under construction.</p>\n";
        webPage << "<p>Visit <a href=\"https://discord.gg/vZxVk62BAf\" target=\"_blank\">discord.gg/vZxVk62BAf</a> for updates.</p>\n";

        webPage << "</body>\n";
        webPage << "</html>\n";

        webPage.close();
        std::cout << "Website created! Check the 'index.html' file in your project directory.\n";
    }
    else {
        std::cout << "Error: Could not create the HTML file.\n";
    }

    return 0;
}
