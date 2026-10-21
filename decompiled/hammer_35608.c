/* line: 0, address: 0x60135608 */ int __fastcall sub_60135608(int a1)
/* line: 1 */ {
/* line: 2 */   int v1; // r4
/* line: 3 */   int v2; // r6
/* line: 4 */   int v3; // r5
/* line: 5 */   int v4; // r5
/* line: 6 */ 
/* line: 7, address: 0x6013560c */   v1 = a1;
/* line: 8, address: 0x60135614 */   v2 = a1 + 188;
/* line: 9, address: 0x60135620 */   v3 = MEMORY[0xC88234];
/* line: 10, address: 0x60135628 */   ActiveColldierMgr_removeFromActiveList(MEMORY[0xC88234], a1 + 188);
/* line: 11, address: 0x60135634 */   ActiveColldierMgr_removeFromCreateList(v3, v2);
/* line: 12, address: 0x60135640 */   ActiveColldierMgr_removeFromList3(v3, v2);
/* line: 13, address: 0x60135644 */   v4 = MEMORY[0xC88234];
/* line: 14, address: 0x6013564c */   v1 += 6132;
/* line: 15, address: 0x60135658 */   ActiveColldierMgr_removeFromActiveList(MEMORY[0xC88234], v1);
/* line: 16, address: 0x60135664 */   ActiveColldierMgr_removeFromCreateList(v4, v1);
/* line: 17 */   return ActiveColldierMgr_removeFromList3(v4, v1);
/* line: 18 */ }