# TEST BUILD: step7 -- IPS only, no subsdk0

This is the decisive test for the rendering fault.

## What this contains

    atmosphere/exefs_patches/0100EA80032EA000/AEE6DCCC06D9C05B42061E2019123A61.ips   44 bytes, 4 records

No `subsdk0`. No `contents` folder.

## The four records

    0x465F34  e3 50 00 09   cmp r0, #9        (retail #8)
    0x465F40  e3 00 13 fb   movw r1, #0x3fb    (retail #0x1fb)
    0x466000  e3 50 00 09   cmp r0, #9        (retail #8)
    0x46600C  e3 00 13 fb   movw r1, #0x3fb    (retail #0x1fb)

All four are in .text. IDA proved they are semantically inert on their own: they widen a
power-up mode gate from 8 to 9 and a bitmask from 0x1FB to 0x3FB, admitting mode 10. They do
not grant the power-up and they do not change any table.

## How to deploy

1. Delete any existing subsdk0:

       atmosphere\contents\0100EA80032EA000\exefs\subsdk0

2. Copy the `atmosphere` folder from this build over the SD card root.

3. Boot and load a level with models you can compare, e.g. the course you used before.

## How to read the result

| result | conclusion |
|---|---|
| models load normally | `subsdk0` was the fault. Delete it from every build; the IPS delivers all 36 records on its own. |
| models still black / missing | The four .text records are at fault. The addressing question reopens. |

Either answer is useful. That is the point of shipping a four-record build.