/* line: 0, address: 0x601424b4 */ _DWORD *__fastcall sub_601424B4(_DWORD *a1)
/* line: 1 */ {
/* line: 2, address: 0x601424bc */   StateActor_ctor(a1);
/* line: 3, address: 0x601424d4 */   *a1 = 12400128;
/* line: 4, address: 0x601424dc */   a1[1530] = 0;
/* line: 5, address: 0x601424e4 */   a1[1529] = 0;
/* line: 6, address: 0x601424ec */   a1[1528] = 0;
/* line: 7, address: 0x601424f4 */   a1[1527] = 0;
/* line: 8, address: 0x601424fc */   a1[1526] = 0;
/* line: 9, address: 0x60142504 */   a1[1525] = 0;
/* line: 10, address: 0x60142510 */   sub_6000BAC8(a1 + 1531, a1[2]);
/* line: 11, address: 0x60142520 */   a1[1531] = 12400040;
/* line: 12, address: 0x60142530 */   sub_6000B63C(a1 + 1540, a1[2]);
/* line: 13, address: 0x60142540 */   a1[1540] = 12400092;
/* line: 14, address: 0x6014254c */   LightMask::LightMask((LightMask *)(a1 + 1549));
/* line: 15, address: 0x6014255c */   a1[1559] = 1123024896;
/* line: 16, address: 0x60142564 */   a1[1560] = 0;
/* line: 17, address: 0x6014256c */   a1[1561] = 0;
/* line: 18, address: 0x60142574 */   a1[1562] = 0;
/* line: 19, address: 0x60142580 */   EffectWrapper_ctor(a1 + 1563);
/* line: 20, address: 0x60142590 */   a1[1563] = 12325968;
/* line: 21, address: 0x6014259c */   LightSource::LightSource((LightSource *)(a1 + 1589));
/* line: 22, address: 0x601425a8 */   ActiveCollider_ctor(a1 + 1607);
/* line: 23, address: 0x601425bc */   a1[1683] = 12400404;
/* line: 24, address: 0x601425c4 */   return a1;
/* line: 25 */ }