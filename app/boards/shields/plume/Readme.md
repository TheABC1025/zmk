# How to build?
## How to build FW for left board
```
cd zmk
west build -s app -d build/left -b mdbt50q_1m --pristine -- -DSHIELD=plume_left
```

## How to build FW for right board
```
cd zmk
west build -s app -d build/right -b mdbt50q_1m --pristine -- -DSHIELD=plume_right
```