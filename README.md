# Test models

There is a single field phi, which is moved in the direction (1,-1)
constantly.
- `test01` - the field is initialized using zonal settings, and moved with `phi = phi(-1,1)`
- `test02` - the field is initialized using node type, and moved with `phi = phi(-1,1)`
- `test03` - the field is initialized using zonal settings, and moved with `phi = phi(-1,1)`, but has an asymmetric access pattern.
- `test04` - the field is initialized using zonal settings, and moved with a density (accessor) `phi`. Also has an asymmetric access pattern.

## Usage

### Clone

```bash
cd TCLB
git clone git@github.com:llaniewski/simple_field_tests.git models/test
```

### Compile

```bash
make -j 16 test01 test02 test03 test04
```

### Run

```bash
CLB/test01/main models/test/test01.xml
CLB/test02/main models/test/test02.xml
CLB/test03/main models/test/test03.xml
CLB/test04/main models/test/test04.xml
```
