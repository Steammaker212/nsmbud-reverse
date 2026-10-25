# yoshi_fire

Every enemy Yoshi eats turns into breath he can spit: fireballs by default,
ice with `YOSHI_BREATH yoshi::EatType::YoshiFireIce` at the top of
`code/yoshi_fire.cpp`. Fruit and items are eaten as usual; Koopa shells count
as enemies.

It is `framework/yoshi`'s `setBreathFromEnemies`: the game already turns an
eaten enemy fireball (EatData type YoshiFire) into a YoshiFlame in Yoshi's
mouth; this gives ordinary enemies that type at the moment the tongue comes
back. See [game/yoshi.h](../../framework/game/include/game/yoshi.h) and
[readable/player/Yoshi.cpp](../../readable/player/Yoshi.cpp).
