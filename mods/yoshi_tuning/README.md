# yoshi_tuning

Yoshi's numbers without code: `hooks/yoshi_tuning.hks` patches the constants
his code loads at run time. Shipped settings: an egg every 3 fruits (vanilla 5)
and a 60-frame flutter jump (vanilla 30). The flutter's lift (0.2 / 0.07) is
there too, commented out. Edit the bytes (little-endian) to taste.

Each constant is read only by Yoshi's code, so nothing else changes
(ledger F0086, F0088).
