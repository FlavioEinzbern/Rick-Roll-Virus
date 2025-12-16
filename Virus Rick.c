#include <windows.h>

int main(void) {
    ShellExecuteA(
        NULL,
        "open",
        "powershell.exe",
        "-Command \"New-Item -Path 'C:\\Virus' -ItemType Directory -Force; "
        "$archiveUrl='https://ia601509.us.archive.org/10/items/Rick_Astley_Never_Gonna_Give_You_Up/Rick_Astley_Never_Gonna_Give_You_Up.mp4'; "
        "$destinationPath='C:\\Virus\\Rick_Astley_Never_Gonna_Give_You_Up.mp4'; "
        "Invoke-WebRequest -Uri $archiveUrl -OutFile $destinationPath; "
        "Rename-Item -Path 'C:\\Virus\\Rick_Astley_Never_Gonna_Give_You_Up.mp4' -NewName 'Trojan.mp4'; "
        "Invoke-Item 'C:\\Virus\\Trojan.mp4'\"",
        NULL,
        SW_SHOWNORMAL
    );

    return 0;
}
