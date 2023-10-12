#include <unistd.h>
#include <thread>
#include <cstdlib>
#include <fcntl.h>

#define DEVICE_NODE "/dev/mydevnode"

void writeTask() {

    int file_descriptor;
    char full_data[4] = "VAR";
    int i = 1;
    unsigned int length;

    while (true) {

        // Make variable data here
        char buffer[i];
        for (int k = 0; k < i; k++) {
            buffer[k] = full_data[k];
        }

        file_descriptor = open(DEVICE_NODE,O_WRONLY);
        write(file_descriptor, buffer, sizeof(buffer));
        close(file_descriptor);

        sleep(1);
        i++;
        if (i == sizeof(full_data)) {
            i = 1;
        }
    }

}


int main(void) {
    std::thread writeThread(writeTask);

    writeThread.join();

    return 0;
}