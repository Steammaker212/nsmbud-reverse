/* line: 0, address: 0x60475288 */ int __fastcall __Player__applyPowerUpTransform(int a1, int a2, int a3, int *a4)
/* line: 1 */ {
/* line: 2 */   int result; // r0
/* line: 3 */   int v9; // r6
/* line: 4 */ 
/* line: 5, address: 0x6047529c */   result = *a4;
/* line: 6, address: 0x604752a4 */   if ( *a4 >= 1 )
/* line: 7 */   {
/* line: 8, address: 0x604752a8 */     v9 = 0;
/* line: 9, address: 0x604752cc */     do
/* line: 10 */     {
/* line: 11, address: 0x604752b8 */       *(_DWORD *)(a2 + 4 * v9++) = sub_6047488C(a1, a3);
/* line: 12, address: 0x604752c0 */       a3 += 8;
/* line: 13, address: 0x604752c4 */       result = *a4;
/* line: 14 */     }
/* line: 15, address: 0x604752cc */     while ( v9 < *a4 );
/* line: 16 */   }
/* line: 17, address: 0x604752d0 */   return result;
/* line: 18 */ }