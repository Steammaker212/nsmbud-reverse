/* line: 0, address: 0x607666b0 */ int *__fastcall sub_607666B0(int a1, char a2)
/* line: 1 */ {
/* line: 2 */   int *result; // r0
/* line: 3 */   int v3; // t1
/* line: 4 */ 
/* line: 5, address: 0x607666b8 */   v3 = *(_DWORD *)(a1 + 9700);
/* line: 6, address: 0x607666b8 */   result = (int *)(a1 + 9700);
/* line: 7, address: 0x607666c0 */   *result = v3 & ~(1 << a2);
/* line: 8, address: 0x607666c4 */   return result;
/* line: 9 */ }