#include "nsmbudx_prelude.h"
/* line: 0, address: 0x607a3618 */ int __fastcall sub_607A3618(_DWORD *a1, int a2, int a3, int a4)
/* line: 1 */ {
/* line: 2 */   int v8; // r0
/* line: 3 */   int result; // r0
/* line: 4 */ 
/* line: 5, address: 0x607a3640 */   (*(void (__fastcall **)(_DWORD *, _DWORD, int))(*a1 + 144))(a1, a1[330], 1);
/* line: 6, address: 0x607a3648 */   sub_607AA814(a1);
/* line: 7, address: 0x607a3658 */   sub_60767F80(a1, a2, a4);
/* line: 8, address: 0x607a3664 */   a1[2867] = a1[27];
/* line: 9, address: 0x607a3670 */   a1[2868] = a1[28];
/* line: 10, address: 0x607a367c */   a1[2869] = a1[29];
/* line: 11, address: 0x607a368c */   if ( *(_BYTE *)(MEMORY[0xCC6D8C] + 17) )
/* line: 12, address: 0x607a36a8 */     (*(void (__fastcall **)(_DWORD *))(*a1 + 1084))(a1);
/* line: 13, address: 0x607a36b0 */   v8 = sub_607C7184(a1);
/* line: 14, address: 0x607a36b8 */   if ( v8 )
/* line: 15, address: 0x607a36d4 */     return (*(int (__fastcall **)(int, int, int, int))(*(_DWORD *)v8 + 256))(v8, a2, a3, a4);
/* line: 16, address: 0x607a36dc */   result = sub_60798D7C(a1);
/* line: 17, address: 0x607a36e4 */   if ( !result )
/* line: 18 */   {
/* line: 19, address: 0x607a36ec */     sub_6079A758(a1);
/* line: 20, address: 0x607a3700 */     sub_60767E04(a1, a2, a3, a4);
/* line: 21, address: 0x607a370c */     return sub_607BA828(a1);
/* line: 22 */   }
/* line: 23, address: 0x607a36e4 */   return result;
/* line: 24 */ }