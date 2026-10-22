STEP 8 -- TRUE VANILLA CONTROL. There is deliberately NOTHING in this folder.

To run it: delete BOTH of these from the installed mod, leaving romfs untouched:

    sdcard\atmosphere\contents\0100EA80032EA000\exefs\subsdk0
    sdcard\atmosphere\exefs_patches\0100EA80032EA000\AEE6DCCC06D9C05B42061E2019123A61.ips

Then launch the game and look at the models.

Why this matters: a zero-hook sweet-dx build STILL emits subsdk0, and the emitted file is
byte-identical to sweet-dx's factory blank sample (SHA-256 45FD1840...). Every test run so far
included that file. It has never been excluded, so it has never been ruled out.