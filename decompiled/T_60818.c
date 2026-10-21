/* line: 0, address: 0x60760818 */ int __fastcall sub_60760818(int a1, int a2)
/* line: 1 */ {
/* line: 2 */   void (__fastcall *v3)(_DWORD); // r2
/* line: 3 */   int v4; // r1
/* line: 4 */   _DWORD *v5; // r0
/* line: 5 */ 
/* line: 6, address: 0x60760820 */   *(_DWORD *)(a1 + 12) = a2;
/* line: 7, address: 0x60760824 */   v3 = *(void (__fastcall **)(_DWORD))(a2 + 8);
/* line: 8, address: 0x60760828 */   v4 = *(_DWORD *)(a2 + 12);
/* line: 9, address: 0x60760830 */   v5 = (_DWORD *)(*(_DWORD *)(a1 + 8) + (v4 >> 1));
/* line: 10, address: 0x60760838 */   if ( (v4 & 1) != 0 )
/* line: 11, address: 0x60760840 */     v3 = *(void (__fastcall **)(_DWORD))((char *)v3 + *v5);
/* line: 12, address: 0x60760844 */   v3(v5);
/* line: 13, address: 0x6076084c */   return a1 + 4;
/* line: 14 */ }