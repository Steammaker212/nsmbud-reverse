
// ---- addr: 0x60563544 */ int __fastcall BlockBase::BlockBase(int a1)
/* line: 1 */ {
/* line: 2, address: 0x6056354c */   MovementBlockCoinBase::MovementBlockCoinBase();
/* line: 3, address: 0x60563568 */   *(_DWORD *)a1 = 12587764;
/* line: 4, address: 0x60563574 */   *(_DWORD *)(a1 + 7380) = 0;
/* line: 5, address: 0x60563580 */   memset((void *)(a1 + 7348), 0, 0x1Fu);
/* line: 6, address: 0x6056358c */   *(_BYTE *)(a1 + 7384) = 1;
/* line: 7, address: 0x60563594 */   *(_BYTE *)(a1 + 7385) = 0;
/* line: 8, address: 0x6056359c */   *(_DWORD *)(a1 + 7296) = 48;
/* line: 9, address: 0x605635a4 */   return a1;
/* line: 10 */ }