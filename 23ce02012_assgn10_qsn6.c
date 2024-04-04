#include <stdio.h>
#include <string.h>

union Packet {
    struct {
        int opcode;
        int status_code;
    } control_message;
    char data_payload[256]; 
};

struct DataPacket {
    int is_control;
    union Packet packet;
};

void assignControlMessage(struct DataPacket *packet, int opcode, int status_code) {
    packet->is_control = 1;
    packet->packet.control_message.opcode = opcode;
    packet->packet.control_message.status_code = status_code;
}

void assignDataPayload(struct DataPacket *packet, const char *data) {
    packet->is_control = 0;
    strcpy(packet->packet.data_payload, data);
}

void printPacket(struct DataPacket *packet) {
    if (packet->is_control) {
        printf("Control Message: Opcode = %d, Status Code = %d\n", packet->packet.control_message.opcode, packet->packet.control_message.status_code);
    } else {
        printf("Data Payload: %s\n", packet->packet.data_payload);
    }
}

int main() {
    struct DataPacket packets[2];

    assignControlMessage(&packets[0], 1, 200);
    assignDataPayload(&packets[1], "Hello, world!");

    for (int i = 0; i < 2; ++i) {
        printPacket(&packets[i]);
    }

    return 0;
}