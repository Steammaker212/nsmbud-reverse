#include "nsmbudx_prelude.h"
/* line: 0, address: 0x607aa6f4 */ int __fastcall sub_607AA6F4(int a1)
/* line: 1 */ {
/* line: 2 */   int v1; // r5
/* line: 3 */   int v2; // r4
/* line: 4 */   int v3; // r1
/* line: 5 */   int v5; // r6
/* line: 6 */   int v6; // r0
/* line: 7 */ 
/* line: 8, address: 0x607aa704 */   v1 = *(char *)(a1 + 84);
/* line: 9, address: 0x607aa708 */   v2 = a1 + 13192;
/* line: 10, address: 0x607aa710 */   v3 = *(_DWORD *)(a1 + 11388);
/* line: 11, address: 0x607aa720 */   if ( *(_DWORD *)(a1 + 1320) != 9 && v3 == 9 )
/* line: 12, address: 0x607aa73c */     return sub_60236F74(*(char *)(a1 + 84), v2, 1234, a1 + 108, 0, 0);
/* line: 13, address: 0x607aa744 */   v5 = a1 + 108;
/* line: 14, address: 0x607aa74c */   v6 = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 156))(a1, v3);
/* line: 15, address: 0x607aa77c */   return sub_60236F74(v1, v2, dword_60B0CD60[v6], v5, 0, 0);
/* line: 16 */ }