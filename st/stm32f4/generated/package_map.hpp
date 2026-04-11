#pragma once

#include <array>

namespace st {
namespace stm32f4 {
namespace generated {
struct PackageDescriptor {
  const char* device;
  const char* package_name;
  int pin_count;
};
inline constexpr PackageDescriptor kPackageMap[] = {
  {"stm32f401re", "lqfp64", 64},
  {"stm32f405rg", "lqfp64", 64},
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
  {"stm32f401re", "lqfp64", "1", "1", 1, "power", nullptr, "dedicated"},
  {"stm32f401re", "lqfp64", "10", "10", 10, "io", "PC2", "bonded"},
  {"stm32f401re", "lqfp64", "11", "11", 11, "io", "PC3", "bonded"},
  {"stm32f401re", "lqfp64", "12", "12", 12, "power", nullptr, "dedicated"},
  {"stm32f401re", "lqfp64", "13", "13", 13, "power", nullptr, "dedicated"},
  {"stm32f401re", "lqfp64", "14", "14", 14, "io", "PA0", "bonded"},
  {"stm32f401re", "lqfp64", "15", "15", 15, "io", "PA1", "bonded"},
  {"stm32f401re", "lqfp64", "16", "16", 16, "io", "PA2", "bonded"},
  {"stm32f401re", "lqfp64", "17", "17", 17, "io", "PA3", "bonded"},
  {"stm32f401re", "lqfp64", "18", "18", 18, "power", nullptr, "dedicated"},
  {"stm32f401re", "lqfp64", "19", "19", 19, "power", nullptr, "dedicated"},
  {"stm32f401re", "lqfp64", "2", "2", 2, "io", "PC13", "bonded"},
  {"stm32f401re", "lqfp64", "20", "20", 20, "io", "PA4", "bonded"},
  {"stm32f401re", "lqfp64", "21", "21", 21, "io", "PA5", "bonded"},
  {"stm32f401re", "lqfp64", "22", "22", 22, "io", "PA6", "bonded"},
  {"stm32f401re", "lqfp64", "23", "23", 23, "io", "PA7", "bonded"},
  {"stm32f401re", "lqfp64", "24", "24", 24, "io", "PC4", "bonded"},
  {"stm32f401re", "lqfp64", "25", "25", 25, "io", "PC5", "bonded"},
  {"stm32f401re", "lqfp64", "26", "26", 26, "io", "PB0", "bonded"},
  {"stm32f401re", "lqfp64", "27", "27", 27, "io", "PB1", "bonded"},
  {"stm32f401re", "lqfp64", "28", "28", 28, "io", "PB2", "bonded"},
  {"stm32f401re", "lqfp64", "29", "29", 29, "io", "PB10", "bonded"},
  {"stm32f401re", "lqfp64", "3", "3", 3, "io", "PC14", "bonded"},
  {"stm32f401re", "lqfp64", "30", "30", 30, "power", nullptr, "dedicated"},
  {"stm32f401re", "lqfp64", "31", "31", 31, "power", nullptr, "dedicated"},
  {"stm32f401re", "lqfp64", "32", "32", 32, "power", nullptr, "dedicated"},
  {"stm32f401re", "lqfp64", "33", "33", 33, "io", "PB12", "bonded"},
  {"stm32f401re", "lqfp64", "34", "34", 34, "io", "PB13", "bonded"},
  {"stm32f401re", "lqfp64", "35", "35", 35, "io", "PB14", "bonded"},
  {"stm32f401re", "lqfp64", "36", "36", 36, "io", "PB15", "bonded"},
  {"stm32f401re", "lqfp64", "37", "37", 37, "io", "PC6", "bonded"},
  {"stm32f401re", "lqfp64", "38", "38", 38, "io", "PC7", "bonded"},
  {"stm32f401re", "lqfp64", "39", "39", 39, "io", "PC8", "bonded"},
  {"stm32f401re", "lqfp64", "4", "4", 4, "io", "PC15", "bonded"},
  {"stm32f401re", "lqfp64", "40", "40", 40, "io", "PC9", "bonded"},
  {"stm32f401re", "lqfp64", "41", "41", 41, "io", "PA8", "bonded"},
  {"stm32f401re", "lqfp64", "42", "42", 42, "io", "PA9", "bonded"},
  {"stm32f401re", "lqfp64", "43", "43", 43, "io", "PA10", "bonded"},
  {"stm32f401re", "lqfp64", "44", "44", 44, "io", "PA11", "bonded"},
  {"stm32f401re", "lqfp64", "45", "45", 45, "io", "PA12", "bonded"},
  {"stm32f401re", "lqfp64", "46", "46", 46, "io", "PA13", "bonded"},
  {"stm32f401re", "lqfp64", "47", "47", 47, "power", nullptr, "dedicated"},
  {"stm32f401re", "lqfp64", "48", "48", 48, "power", nullptr, "dedicated"},
  {"stm32f401re", "lqfp64", "49", "49", 49, "io", "PA14", "bonded"},
  {"stm32f401re", "lqfp64", "5", "5", 5, "io", "PH0", "bonded"},
  {"stm32f401re", "lqfp64", "50", "50", 50, "io", "PA15", "bonded"},
  {"stm32f401re", "lqfp64", "51", "51", 51, "io", "PC10", "bonded"},
  {"stm32f401re", "lqfp64", "52", "52", 52, "io", "PC11", "bonded"},
  {"stm32f401re", "lqfp64", "53", "53", 53, "io", "PC12", "bonded"},
  {"stm32f401re", "lqfp64", "54", "54", 54, "io", "PD2", "bonded"},
  {"stm32f401re", "lqfp64", "55", "55", 55, "io", "PB3", "bonded"},
  {"stm32f401re", "lqfp64", "56", "56", 56, "io", "PB4", "bonded"},
  {"stm32f401re", "lqfp64", "57", "57", 57, "io", "PB5", "bonded"},
  {"stm32f401re", "lqfp64", "58", "58", 58, "io", "PB6", "bonded"},
  {"stm32f401re", "lqfp64", "59", "59", 59, "io", "PB7", "bonded"},
  {"stm32f401re", "lqfp64", "6", "6", 6, "io", "PH1", "bonded"},
  {"stm32f401re", "lqfp64", "60", "60", 60, "boot", nullptr, "dedicated"},
  {"stm32f401re", "lqfp64", "61", "61", 61, "io", "PB8", "bonded"},
  {"stm32f401re", "lqfp64", "62", "62", 62, "io", "PB9", "bonded"},
  {"stm32f401re", "lqfp64", "63", "63", 63, "power", nullptr, "dedicated"},
  {"stm32f401re", "lqfp64", "64", "64", 64, "power", nullptr, "dedicated"},
  {"stm32f401re", "lqfp64", "7", "7", 7, "reset", nullptr, "dedicated"},
  {"stm32f401re", "lqfp64", "8", "8", 8, "io", "PC0", "bonded"},
  {"stm32f401re", "lqfp64", "9", "9", 9, "io", "PC1", "bonded"},
  {"stm32f405rg", "lqfp64", "1", "1", 1, "power", nullptr, "dedicated"},
  {"stm32f405rg", "lqfp64", "10", "10", 10, "io", "PC2", "bonded"},
  {"stm32f405rg", "lqfp64", "11", "11", 11, "io", "PC3", "bonded"},
  {"stm32f405rg", "lqfp64", "12", "12", 12, "power", nullptr, "dedicated"},
  {"stm32f405rg", "lqfp64", "13", "13", 13, "power", nullptr, "dedicated"},
  {"stm32f405rg", "lqfp64", "14", "14", 14, "io", "PA0", "bonded"},
  {"stm32f405rg", "lqfp64", "15", "15", 15, "io", "PA1", "bonded"},
  {"stm32f405rg", "lqfp64", "16", "16", 16, "io", "PA2", "bonded"},
  {"stm32f405rg", "lqfp64", "17", "17", 17, "io", "PA3", "bonded"},
  {"stm32f405rg", "lqfp64", "18", "18", 18, "power", nullptr, "dedicated"},
  {"stm32f405rg", "lqfp64", "19", "19", 19, "power", nullptr, "dedicated"},
  {"stm32f405rg", "lqfp64", "2", "2", 2, "io", "PC13", "bonded"},
  {"stm32f405rg", "lqfp64", "20", "20", 20, "io", "PA4", "bonded"},
  {"stm32f405rg", "lqfp64", "21", "21", 21, "io", "PA5", "bonded"},
  {"stm32f405rg", "lqfp64", "22", "22", 22, "io", "PA6", "bonded"},
  {"stm32f405rg", "lqfp64", "23", "23", 23, "io", "PA7", "bonded"},
  {"stm32f405rg", "lqfp64", "24", "24", 24, "io", "PC4", "bonded"},
  {"stm32f405rg", "lqfp64", "25", "25", 25, "io", "PC5", "bonded"},
  {"stm32f405rg", "lqfp64", "26", "26", 26, "io", "PB0", "bonded"},
  {"stm32f405rg", "lqfp64", "27", "27", 27, "io", "PB1", "bonded"},
  {"stm32f405rg", "lqfp64", "28", "28", 28, "io", "PB2", "bonded"},
  {"stm32f405rg", "lqfp64", "29", "29", 29, "io", "PB10", "bonded"},
  {"stm32f405rg", "lqfp64", "3", "3", 3, "io", "PC14", "bonded"},
  {"stm32f405rg", "lqfp64", "30", "30", 30, "io", "PB11", "bonded"},
  {"stm32f405rg", "lqfp64", "31", "31", 31, "power", nullptr, "dedicated"},
  {"stm32f405rg", "lqfp64", "32", "32", 32, "power", nullptr, "dedicated"},
  {"stm32f405rg", "lqfp64", "33", "33", 33, "io", "PB12", "bonded"},
  {"stm32f405rg", "lqfp64", "34", "34", 34, "io", "PB13", "bonded"},
  {"stm32f405rg", "lqfp64", "35", "35", 35, "io", "PB14", "bonded"},
  {"stm32f405rg", "lqfp64", "36", "36", 36, "io", "PB15", "bonded"},
  {"stm32f405rg", "lqfp64", "37", "37", 37, "io", "PC6", "bonded"},
  {"stm32f405rg", "lqfp64", "38", "38", 38, "io", "PC7", "bonded"},
  {"stm32f405rg", "lqfp64", "39", "39", 39, "io", "PC8", "bonded"},
  {"stm32f405rg", "lqfp64", "4", "4", 4, "io", "PC15", "bonded"},
  {"stm32f405rg", "lqfp64", "40", "40", 40, "io", "PC9", "bonded"},
  {"stm32f405rg", "lqfp64", "41", "41", 41, "io", "PA8", "bonded"},
  {"stm32f405rg", "lqfp64", "42", "42", 42, "io", "PA9", "bonded"},
  {"stm32f405rg", "lqfp64", "43", "43", 43, "io", "PA10", "bonded"},
  {"stm32f405rg", "lqfp64", "44", "44", 44, "io", "PA11", "bonded"},
  {"stm32f405rg", "lqfp64", "45", "45", 45, "io", "PA12", "bonded"},
  {"stm32f405rg", "lqfp64", "46", "46", 46, "io", "PA13", "bonded"},
  {"stm32f405rg", "lqfp64", "47", "47", 47, "power", nullptr, "dedicated"},
  {"stm32f405rg", "lqfp64", "48", "48", 48, "power", nullptr, "dedicated"},
  {"stm32f405rg", "lqfp64", "49", "49", 49, "io", "PA14", "bonded"},
  {"stm32f405rg", "lqfp64", "5", "5", 5, "io", "PH0", "bonded"},
  {"stm32f405rg", "lqfp64", "50", "50", 50, "io", "PA15", "bonded"},
  {"stm32f405rg", "lqfp64", "51", "51", 51, "io", "PC10", "bonded"},
  {"stm32f405rg", "lqfp64", "52", "52", 52, "io", "PC11", "bonded"},
  {"stm32f405rg", "lqfp64", "53", "53", 53, "io", "PC12", "bonded"},
  {"stm32f405rg", "lqfp64", "54", "54", 54, "io", "PD2", "bonded"},
  {"stm32f405rg", "lqfp64", "55", "55", 55, "io", "PB3", "bonded"},
  {"stm32f405rg", "lqfp64", "56", "56", 56, "io", "PB4", "bonded"},
  {"stm32f405rg", "lqfp64", "57", "57", 57, "io", "PB5", "bonded"},
  {"stm32f405rg", "lqfp64", "58", "58", 58, "io", "PB6", "bonded"},
  {"stm32f405rg", "lqfp64", "59", "59", 59, "io", "PB7", "bonded"},
  {"stm32f405rg", "lqfp64", "6", "6", 6, "io", "PH1", "bonded"},
  {"stm32f405rg", "lqfp64", "60", "60", 60, "boot", nullptr, "dedicated"},
  {"stm32f405rg", "lqfp64", "61", "61", 61, "io", "PB8", "bonded"},
  {"stm32f405rg", "lqfp64", "62", "62", 62, "io", "PB9", "bonded"},
  {"stm32f405rg", "lqfp64", "63", "63", 63, "power", nullptr, "dedicated"},
  {"stm32f405rg", "lqfp64", "64", "64", 64, "power", nullptr, "dedicated"},
  {"stm32f405rg", "lqfp64", "7", "7", 7, "reset", nullptr, "dedicated"},
  {"stm32f405rg", "lqfp64", "8", "8", 8, "io", "PC0", "bonded"},
  {"stm32f405rg", "lqfp64", "9", "9", 9, "io", "PC1", "bonded"},
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
