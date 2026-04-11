#pragma once

#include <array>

namespace st {
namespace stm32g0 {
namespace generated {
struct PackageDescriptor {
  const char* device;
  const char* package_name;
  int pin_count;
};
inline constexpr PackageDescriptor kPackageMap[] = {
  {"stm32g030f6", "tssop20", 20},
  {"stm32g071rb", "lqfp64", 64},
  {"stm32g0b1re", "lqfp64", 64},
};

struct PackagePadDescriptor {
  const char* device;
  const char* package_name;
  const char* pad_id;
  const char* position_label;
  int physical_index;
  const char* pad_kind;
  const char* bonded_pin;
  const char* bonding_state;
};
inline constexpr PackagePadDescriptor kPackagePads[] = {
  {"stm32g030f6", "tssop20", "1", "1", 1, "io", "PB7", "bonded"},
  {"stm32g030f6", "tssop20", "10", "10", 10, "io", "PA3", "bonded"},
  {"stm32g030f6", "tssop20", "11", "11", 11, "io", "PA4", "bonded"},
  {"stm32g030f6", "tssop20", "12", "12", 12, "io", "PA5", "bonded"},
  {"stm32g030f6", "tssop20", "13", "13", 13, "io", "PA6", "bonded"},
  {"stm32g030f6", "tssop20", "14", "14", 14, "io", "PA7", "bonded"},
  {"stm32g030f6", "tssop20", "15", "15", 15, "io", "PB0", "bonded"},
  {"stm32g030f6", "tssop20", "16", "16", 16, "io", "PA11", "bonded"},
  {"stm32g030f6", "tssop20", "17", "17", 17, "io", "PA12", "bonded"},
  {"stm32g030f6", "tssop20", "18", "18", 18, "io", "PA13", "bonded"},
  {"stm32g030f6", "tssop20", "19", "19", 19, "io", "PA14", "bonded"},
  {"stm32g030f6", "tssop20", "2", "2", 2, "io", "PC14", "bonded"},
  {"stm32g030f6", "tssop20", "20", "20", 20, "io", "PB3", "bonded"},
  {"stm32g030f6", "tssop20", "3", "3", 3, "io", "PC15", "bonded"},
  {"stm32g030f6", "tssop20", "4", "4", 4, "power", nullptr, "dedicated"},
  {"stm32g030f6", "tssop20", "5", "5", 5, "power", nullptr, "dedicated"},
  {"stm32g030f6", "tssop20", "6", "6", 6, "reset", nullptr, "dedicated"},
  {"stm32g030f6", "tssop20", "7", "7", 7, "io", "PA0", "bonded"},
  {"stm32g030f6", "tssop20", "8", "8", 8, "io", "PA1", "bonded"},
  {"stm32g030f6", "tssop20", "9", "9", 9, "io", "PA2", "bonded"},
  {"stm32g071rb", "lqfp64", "1", "1", 1, "io", "PC11", "bonded"},
  {"stm32g071rb", "lqfp64", "10", "10", 10, "io", "PF0", "bonded"},
  {"stm32g071rb", "lqfp64", "11", "11", 11, "io", "PF1", "bonded"},
  {"stm32g071rb", "lqfp64", "12", "12", 12, "io", "PF2", "bonded"},
  {"stm32g071rb", "lqfp64", "13", "13", 13, "io", "PC0", "bonded"},
  {"stm32g071rb", "lqfp64", "14", "14", 14, "io", "PC1", "bonded"},
  {"stm32g071rb", "lqfp64", "15", "15", 15, "io", "PC2", "bonded"},
  {"stm32g071rb", "lqfp64", "16", "16", 16, "io", "PC3", "bonded"},
  {"stm32g071rb", "lqfp64", "17", "17", 17, "io", "PA0", "bonded"},
  {"stm32g071rb", "lqfp64", "18", "18", 18, "io", "PA1", "bonded"},
  {"stm32g071rb", "lqfp64", "19", "19", 19, "io", "PA2", "bonded"},
  {"stm32g071rb", "lqfp64", "2", "2", 2, "io", "PC12", "bonded"},
  {"stm32g071rb", "lqfp64", "20", "20", 20, "io", "PA3", "bonded"},
  {"stm32g071rb", "lqfp64", "21", "21", 21, "io", "PA4", "bonded"},
  {"stm32g071rb", "lqfp64", "22", "22", 22, "io", "PA5", "bonded"},
  {"stm32g071rb", "lqfp64", "23", "23", 23, "io", "PA6", "bonded"},
  {"stm32g071rb", "lqfp64", "24", "24", 24, "io", "PA7", "bonded"},
  {"stm32g071rb", "lqfp64", "25", "25", 25, "io", "PC4", "bonded"},
  {"stm32g071rb", "lqfp64", "26", "26", 26, "io", "PC5", "bonded"},
  {"stm32g071rb", "lqfp64", "27", "27", 27, "io", "PB0", "bonded"},
  {"stm32g071rb", "lqfp64", "28", "28", 28, "io", "PB1", "bonded"},
  {"stm32g071rb", "lqfp64", "29", "29", 29, "io", "PB2", "bonded"},
  {"stm32g071rb", "lqfp64", "3", "3", 3, "io", "PC13", "bonded"},
  {"stm32g071rb", "lqfp64", "30", "30", 30, "io", "PB10", "bonded"},
  {"stm32g071rb", "lqfp64", "31", "31", 31, "io", "PB11", "bonded"},
  {"stm32g071rb", "lqfp64", "32", "32", 32, "io", "PB12", "bonded"},
  {"stm32g071rb", "lqfp64", "33", "33", 33, "io", "PB13", "bonded"},
  {"stm32g071rb", "lqfp64", "34", "34", 34, "io", "PB14", "bonded"},
  {"stm32g071rb", "lqfp64", "35", "35", 35, "io", "PB15", "bonded"},
  {"stm32g071rb", "lqfp64", "36", "36", 36, "io", "PA8", "bonded"},
  {"stm32g071rb", "lqfp64", "37", "37", 37, "io", "PA9", "bonded"},
  {"stm32g071rb", "lqfp64", "38", "38", 38, "io", "PC6", "bonded"},
  {"stm32g071rb", "lqfp64", "39", "39", 39, "io", "PC7", "bonded"},
  {"stm32g071rb", "lqfp64", "4", "4", 4, "io", "PC14", "bonded"},
  {"stm32g071rb", "lqfp64", "40", "40", 40, "io", "PD8", "bonded"},
  {"stm32g071rb", "lqfp64", "41", "41", 41, "io", "PD9", "bonded"},
  {"stm32g071rb", "lqfp64", "42", "42", 42, "io", "PA10", "bonded"},
  {"stm32g071rb", "lqfp64", "43", "43", 43, "io", "PA11", "bonded"},
  {"stm32g071rb", "lqfp64", "44", "44", 44, "io", "PA12", "bonded"},
  {"stm32g071rb", "lqfp64", "45", "45", 45, "io", "PA13", "bonded"},
  {"stm32g071rb", "lqfp64", "46", "46", 46, "io", "PA14", "bonded"},
  {"stm32g071rb", "lqfp64", "47", "47", 47, "io", "PA15", "bonded"},
  {"stm32g071rb", "lqfp64", "48", "48", 48, "io", "PC8", "bonded"},
  {"stm32g071rb", "lqfp64", "49", "49", 49, "io", "PC9", "bonded"},
  {"stm32g071rb", "lqfp64", "5", "5", 5, "io", "PC15", "bonded"},
  {"stm32g071rb", "lqfp64", "50", "50", 50, "io", "PD0", "bonded"},
  {"stm32g071rb", "lqfp64", "51", "51", 51, "io", "PD1", "bonded"},
  {"stm32g071rb", "lqfp64", "52", "52", 52, "io", "PD2", "bonded"},
  {"stm32g071rb", "lqfp64", "53", "53", 53, "io", "PD3", "bonded"},
  {"stm32g071rb", "lqfp64", "54", "54", 54, "io", "PD4", "bonded"},
  {"stm32g071rb", "lqfp64", "55", "55", 55, "io", "PD5", "bonded"},
  {"stm32g071rb", "lqfp64", "56", "56", 56, "io", "PD6", "bonded"},
  {"stm32g071rb", "lqfp64", "57", "57", 57, "io", "PB3", "bonded"},
  {"stm32g071rb", "lqfp64", "58", "58", 58, "io", "PB4", "bonded"},
  {"stm32g071rb", "lqfp64", "59", "59", 59, "io", "PB5", "bonded"},
  {"stm32g071rb", "lqfp64", "6", "6", 6, "power", nullptr, "dedicated"},
  {"stm32g071rb", "lqfp64", "60", "60", 60, "io", "PB6", "bonded"},
  {"stm32g071rb", "lqfp64", "61", "61", 61, "io", "PB7", "bonded"},
  {"stm32g071rb", "lqfp64", "62", "62", 62, "io", "PB8", "bonded"},
  {"stm32g071rb", "lqfp64", "63", "63", 63, "io", "PB9", "bonded"},
  {"stm32g071rb", "lqfp64", "64", "64", 64, "io", "PC10", "bonded"},
  {"stm32g071rb", "lqfp64", "7", "7", 7, "power", nullptr, "dedicated"},
  {"stm32g071rb", "lqfp64", "8", "8", 8, "power", nullptr, "dedicated"},
  {"stm32g071rb", "lqfp64", "9", "9", 9, "power", nullptr, "dedicated"},
  {"stm32g0b1re", "lqfp64", "1", "1", 1, "io", "PC11", "bonded"},
  {"stm32g0b1re", "lqfp64", "10", "10", 10, "io", "PF0", "bonded"},
  {"stm32g0b1re", "lqfp64", "11", "11", 11, "io", "PF1", "bonded"},
  {"stm32g0b1re", "lqfp64", "12", "12", 12, "io", "PF2", "bonded"},
  {"stm32g0b1re", "lqfp64", "13", "13", 13, "io", "PC0", "bonded"},
  {"stm32g0b1re", "lqfp64", "14", "14", 14, "io", "PC1", "bonded"},
  {"stm32g0b1re", "lqfp64", "15", "15", 15, "io", "PC2", "bonded"},
  {"stm32g0b1re", "lqfp64", "16", "16", 16, "io", "PC3", "bonded"},
  {"stm32g0b1re", "lqfp64", "17", "17", 17, "io", "PA0", "bonded"},
  {"stm32g0b1re", "lqfp64", "18", "18", 18, "io", "PA1", "bonded"},
  {"stm32g0b1re", "lqfp64", "19", "19", 19, "io", "PA2", "bonded"},
  {"stm32g0b1re", "lqfp64", "2", "2", 2, "io", "PC12", "bonded"},
  {"stm32g0b1re", "lqfp64", "20", "20", 20, "io", "PA3", "bonded"},
  {"stm32g0b1re", "lqfp64", "21", "21", 21, "io", "PA4", "bonded"},
  {"stm32g0b1re", "lqfp64", "22", "22", 22, "io", "PA5", "bonded"},
  {"stm32g0b1re", "lqfp64", "23", "23", 23, "io", "PA6", "bonded"},
  {"stm32g0b1re", "lqfp64", "24", "24", 24, "io", "PA7", "bonded"},
  {"stm32g0b1re", "lqfp64", "25", "25", 25, "io", "PC4", "bonded"},
  {"stm32g0b1re", "lqfp64", "26", "26", 26, "io", "PC5", "bonded"},
  {"stm32g0b1re", "lqfp64", "27", "27", 27, "io", "PB0", "bonded"},
  {"stm32g0b1re", "lqfp64", "28", "28", 28, "io", "PB1", "bonded"},
  {"stm32g0b1re", "lqfp64", "29", "29", 29, "io", "PB2", "bonded"},
  {"stm32g0b1re", "lqfp64", "3", "3", 3, "io", "PC13", "bonded"},
  {"stm32g0b1re", "lqfp64", "30", "30", 30, "io", "PB10", "bonded"},
  {"stm32g0b1re", "lqfp64", "31", "31", 31, "io", "PB11", "bonded"},
  {"stm32g0b1re", "lqfp64", "32", "32", 32, "io", "PB12", "bonded"},
  {"stm32g0b1re", "lqfp64", "33", "33", 33, "io", "PB13", "bonded"},
  {"stm32g0b1re", "lqfp64", "34", "34", 34, "io", "PB14", "bonded"},
  {"stm32g0b1re", "lqfp64", "35", "35", 35, "io", "PB15", "bonded"},
  {"stm32g0b1re", "lqfp64", "36", "36", 36, "io", "PA8", "bonded"},
  {"stm32g0b1re", "lqfp64", "37", "37", 37, "io", "PA9", "bonded"},
  {"stm32g0b1re", "lqfp64", "38", "38", 38, "io", "PC6", "bonded"},
  {"stm32g0b1re", "lqfp64", "39", "39", 39, "io", "PC7", "bonded"},
  {"stm32g0b1re", "lqfp64", "4", "4", 4, "io", "PC14", "bonded"},
  {"stm32g0b1re", "lqfp64", "40", "40", 40, "io", "PD8", "bonded"},
  {"stm32g0b1re", "lqfp64", "41", "41", 41, "io", "PD9", "bonded"},
  {"stm32g0b1re", "lqfp64", "42", "42", 42, "io", "PA10", "bonded"},
  {"stm32g0b1re", "lqfp64", "43", "43", 43, "io", "PA11", "bonded"},
  {"stm32g0b1re", "lqfp64", "44", "44", 44, "io", "PA12", "bonded"},
  {"stm32g0b1re", "lqfp64", "45", "45", 45, "io", "PA13", "bonded"},
  {"stm32g0b1re", "lqfp64", "46", "46", 46, "io", "PA14", "bonded"},
  {"stm32g0b1re", "lqfp64", "47", "47", 47, "io", "PA15", "bonded"},
  {"stm32g0b1re", "lqfp64", "48", "48", 48, "io", "PC8", "bonded"},
  {"stm32g0b1re", "lqfp64", "49", "49", 49, "io", "PC9", "bonded"},
  {"stm32g0b1re", "lqfp64", "5", "5", 5, "io", "PC15", "bonded"},
  {"stm32g0b1re", "lqfp64", "50", "50", 50, "io", "PD0", "bonded"},
  {"stm32g0b1re", "lqfp64", "51", "51", 51, "io", "PD1", "bonded"},
  {"stm32g0b1re", "lqfp64", "52", "52", 52, "io", "PD2", "bonded"},
  {"stm32g0b1re", "lqfp64", "53", "53", 53, "io", "PD3", "bonded"},
  {"stm32g0b1re", "lqfp64", "54", "54", 54, "io", "PD4", "bonded"},
  {"stm32g0b1re", "lqfp64", "55", "55", 55, "io", "PD5", "bonded"},
  {"stm32g0b1re", "lqfp64", "56", "56", 56, "io", "PD6", "bonded"},
  {"stm32g0b1re", "lqfp64", "57", "57", 57, "io", "PB3", "bonded"},
  {"stm32g0b1re", "lqfp64", "58", "58", 58, "io", "PB4", "bonded"},
  {"stm32g0b1re", "lqfp64", "59", "59", 59, "io", "PB5", "bonded"},
  {"stm32g0b1re", "lqfp64", "6", "6", 6, "power", nullptr, "dedicated"},
  {"stm32g0b1re", "lqfp64", "60", "60", 60, "io", "PB6", "bonded"},
  {"stm32g0b1re", "lqfp64", "61", "61", 61, "io", "PB7", "bonded"},
  {"stm32g0b1re", "lqfp64", "62", "62", 62, "io", "PB8", "bonded"},
  {"stm32g0b1re", "lqfp64", "63", "63", 63, "io", "PB9", "bonded"},
  {"stm32g0b1re", "lqfp64", "64", "64", 64, "io", "PC10", "bonded"},
  {"stm32g0b1re", "lqfp64", "7", "7", 7, "power", nullptr, "dedicated"},
  {"stm32g0b1re", "lqfp64", "8", "8", 8, "power", nullptr, "dedicated"},
  {"stm32g0b1re", "lqfp64", "9", "9", 9, "power", nullptr, "dedicated"},
};

struct PinConstraintDescriptor {
  const char* device;
  const char* pin_name;
  const char* kind;
  const char* value;
};
inline constexpr std::array<PinConstraintDescriptor, 0> kPinConstraints = {};
}
}
}
