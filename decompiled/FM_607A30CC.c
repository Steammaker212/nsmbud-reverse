/* line: 0, address: 0x607a30cc */ int __fastcall sub_607A30CC(_DWORD *a1)
/* line: 1 */ {
/* line: 2 */   int result; // r0
/* line: 3 */ 
/* line: 4, address: 0x607a30dc */   a1[301] &= ~0x10u;
/* line: 5, address: 0x607a30e4 */   sub_60767080(a1);
/* line: 6, address: 0x607a30ec */   result = 0;
/* line: 7, address: 0x607a30f0 */   a1[2393] = 0;
/* line: 8, address: 0x607a30fc */   if ( a1[330] == -1 )
/* line: 9 */   {
/* line: 10, address: 0x607a3108 */     a1[2847] = 0;
/* line: 11, address: 0x607a3120 */     return (*(int (__fastcall **)(_DWORD *, _DWORD, _DWORD))(*a1 + 144))(a1, 0, 0);
/* line: 12 */   }
/* line: 13, address: 0x607a30fc */   return result;
/* line: 14 */ }