# print_bits

Small console tool which prints bits in a byte

## Usage

```console
# print_bits 0x10ffa
|OOOOOOOO|OOOOOOOO|OOOOOOOO|OOOOOOOO|OOOOOOOO|OOOOOOOX|OOOOXXXX|XXXXXOXO|
63       55       47       39       31       23       15       7        0
```
## Build
```
git clone --recurse-submodules --remote-submodules https://github.com/rustedsword/print_bits.git
mkdir build
cd build
cmake -D IN_TREE_BUILD=1 ../print_bits
make
```
