#include "includes/ws_protocol.h"
#include "iostream"

int main() {
    unsigned char packet_bytes[] = {0x81, 0x86,
                                    0x58, 0x6e, 0x24, 0xaf,
                                    0x30, 0x0b, 0x48, 0xc3, 0x37, 0x64};

    unsigned char packet_bytes_126[] = {0x81, 0xfe, 0x00, 0x83,
                                        0xfc, 0x0e, 0x51, 0xd0,
                                        0xcd, 0x3c, 0x62, 0xe4, 0xc9, 0x38, 0x66, 0xe8,
                                        0xc5, 0x3e, 0x60, 0xe2, 0xcf, 0x3a, 0x64, 0xe6,
                                        0xcb, 0x36, 0x68, 0xe0, 0xcd, 0x3c, 0x62, 0xe4,
                                        0xc9, 0x38, 0x66, 0xe8, 0xc5, 0x3e, 0x60, 0xe2,
                                        0xcf, 0x3a, 0x64, 0xe6, 0xcb, 0x36, 0x68, 0xe0,
                                        0xcd, 0x3c, 0x62, 0xe4, 0xc9, 0x38, 0x66, 0xe8,
                                        0xc5, 0x3e, 0x60, 0xe2, 0xcf, 0x3a, 0x64, 0xe6,
                                        0xcb, 0x36, 0x68, 0xe0, 0xcd, 0x3c, 0x62, 0xe4,
                                        0xc9, 0x38, 0x66, 0xe8, 0xc5, 0x3e, 0x60, 0xe2,
                                        0xcf, 0x3a, 0x64, 0xe6, 0xcb, 0x36, 0x68, 0xe0,
                                        0xcd, 0x3c, 0x62, 0xe4, 0xc9, 0x38, 0x66, 0xe8,
                                        0xc5, 0x3e, 0x60, 0xe2, 0xcf, 0x3a, 0x64, 0xe6,
                                        0xcb, 0x36, 0x68, 0xe0, 0xcd, 0x3c, 0x62, 0xe4,
                                        0xc9, 0x38, 0x66, 0xe8, 0xc5, 0x3e, 0x60, 0xe2,
                                        0xcf, 0x3a, 0x64, 0xe6, 0xcb, 0x36, 0x68, 0xe0,
                                        0xcd, 0x3c, 0x62, 0xe4, 0xc9, 0x38, 0x66, 0xe8,
                                        0xc5, 0x3e, 0x5b};
    std::cout << "All GOOD" << std::endl;
    //Packet packet{packet_bytes};
    Packet packet_126{packet_bytes_126};

    return 0;
}