/* line: 0, address: 0x603e56c0 */ unsigned __int8 *__fastcall sub_603E56C0(int a1)
/* line: 1 */ {
/* line: 2 */   unsigned int v2; // r0
/* line: 3 */   unsigned __int8 *result; // r0
/* line: 4 */ 
/* line: 5, address: 0x603e56cc */   sub_60024240(*(_DWORD *)(a1 + 24));
/* line: 6, address: 0x603e56d4 */   v2 = *(_DWORD *)(a1 + 24);
/* line: 7, address: 0x603e56e0 */   if ( v2 >= 4 )
/* line: 8, address: 0x603e56e0 */     v2 = 0;
/* line: 9, address: 0x603e56ec */   result = *(unsigned __int8 **)(MEMORY[0xCC436C] + 4 * v2 + 32);
/* line: 10, address: 0x603e56f4 */   if ( result )
/* line: 11, address: 0x603e56fc */     return (unsigned __int8 *)sub_607A2F40(result);
/* line: 12, address: 0x603e56f4 */   return result;
/* line: 13 */ }