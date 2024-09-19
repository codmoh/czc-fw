#pragma once

#include <ETH.h>

#define CZC_1_ETH_CONFIG 2
#define CZC_1_ZB_CONFIG 0
#define CZC_1_MIST_CONFIG 1

extern const char *czc_board_name;

// Ethernet settings structure
struct HwEthConfig
{
    int addr;
    int pwrPin;
    int mdcPin;
    int mdiPin;
    eth_phy_type_t phyType;
    eth_clock_mode_t clkMode;
    int pwrAltPin;
};

// ZigBee settings structure
struct HwZbConfig
{
    int txPin;
    int rxPin;
    int rstPin;
    int bslPin;
};

// Miscellaneous settings structure
struct HwMistConfig
{
    int btnPin;
    int btnPlr;
    int uartSelPin;
    int uartSelPlr;
    int ledModePin;
    int ledModePlr;
    int ledPwrPin;
    int ledPwrPlr;
};

// Root configuration structure that includes only configuration indices
struct HwBrdConfigStruct
{
    char board[50];
    int ethConfigIndex;
    int zbConfigIndex;
    int mistConfigIndex;
};

#define ETH_CFG_CNT 3
#define ZB_CFG_CNT 8
#define MIST_CFG_CNT 5
#define BOARD_CFG_CNT 14

struct HwConfigStruct
{
    char board[50];
    HwEthConfig eth;
    HwZbConfig zb;
    HwMistConfig mist;
};
