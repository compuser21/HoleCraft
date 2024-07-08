#include "Application.h"

using namespace BlackHole2D;

int main(int argc, char* args[]) {

    try
    {

        Application app = Application("Black Hole 2D", { 100, 100, 640, 480 }, argc, args);
        app.Run();

    }
    catch (const std::runtime_error& error)
    {
        SDL_ShowSimpleMessageBox(
            SDL_MESSAGEBOX_ERROR,
            "Application error",
            (std::string("Error code: ") + error.what() + ".\nContact the developer.").c_str(),
            nullptr);
    }
    catch (...)
    {
        SDL_ShowSimpleMessageBox(
            SDL_MESSAGEBOX_ERROR,
            "Application error",
            "Unknown error occured. Contact the developer.",
            nullptr);
    };

    return 0;
}