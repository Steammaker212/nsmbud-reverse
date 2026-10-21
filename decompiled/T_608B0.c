/* line: 0, address: 0x607608b0 */ int __fastcall sub_607608B0(int a1, int a2)
/* line: 1 */ {
/* line: 2 */   int v2; // r0
/* line: 3 */   int v3; // r2
/* line: 4 */   int (__fastcall *v4)(_DWORD); // r1
/* line: 5 */   int v5; // r2
/* line: 6 */   _DWORD *v6; // r0
/* line: 7 */ 
/* line: 8, address: 0x607608b0 */   v2 = *(_DWORD *)(a2 + 4);
/* line: 9, address: 0x607608b0 */   v3 = *(_DWORD *)(a2 + 8);
/* line: 10, address: 0x607608b4 */   v4 = *(int (__fastcall **)(_DWORD))(v3 + 8);
/* line: 11, address: 0x607608b8 */   v5 = *(_DWORD *)(v3 + 12);
/* line: 12, address: 0x607608bc */   v6 = (_DWORD *)(v2 + (v5 >> 1));
/* line: 13, address: 0x607608c4 */   if ( (v5 & 1) != 0 )
/* line: 14, address: 0x607608cc */     v4 = *(int (__fastcall **)(_DWORD))((char *)v4 + *v6);
/* line: 15 */   return v4(v6);
/* line: 16 */ }