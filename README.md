[![License](https://img.shields.io/badge/License-BSD%203--Clause-blue.svg)](https://opensource.org/licenses/BSD-3-Clause)

# ciaa-base

Minimal code required to blink a led using the EDU-CIAA-NXP board.

## Prerequisites

- [GNU Arm Embedded Toolchain](https://developer.arm.com/tools-and-software/open-source-software/developer-tools/gnu-toolchain/gnu-rm) (`arm-none-eabi-gcc`)
- [OpenOCD](http://openocd.org/)
- `make`

## Quick Start

1. **Clone the repository:**
   ```bash
   git clone https://github.com/tulians/ciaa-base.git
   cd ciaa-base
   ```

2. **Build the sample program (blinky):**
   ```bash
   make
   ```

3. **Flash the program to the board:**
   ```bash
   make download
   ```

## Configuration

- **Select Board:** Create a `board.mk` file with `BOARD = edu_ciaa_nxp` (default) or `BOARD = ciaa_nxp`.
- **Select Program:** Edit `program.mk` to point to your project folder:
  ```make
  PROGRAM_PATH = projects
  PROGRAM_NAME = blinky
  ```
