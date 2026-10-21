/* line: 0, address: 0x60795c50 */ int __fastcall sub_60795C50(_DWORD *a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r0
/* line: 3 */   int v3; // r1
/* line: 4 */   int v4; // r0
/* line: 5 */ 
/* line: 6, address: 0x60795c84 */   if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 152))(a1) == 1 && (*(int (__fastcall **)(_DWORD *))(*a1 + 1464))(a1) == 1 )
/* line: 7 */   {
/* line: 8, address: 0x60795c8c */     v2 = sub_6075F914(a1);
/* line: 9, address: 0x60795c90 */     v3 = 2;
/* line: 10, address: 0x60795c98 */     if ( v2 )
/* line: 11, address: 0x60795c98 */       v3 = 3;
/* line: 12 */   }
/* line: 13 */   else
/* line: 14 */   {
/* line: 15, address: 0x60795ca4 */     v4 = sub_6075F914(a1);
/* line: 16, address: 0x60795ca8 */     v3 = 1;
/* line: 17, address: 0x60795cb0 */     if ( !v4 )
/* line: 18 */     {
/* line: 19, address: 0x60795cb8 */       v3 = 0;
/* line: 20, address: 0x60795cc0 */       if ( a1[330] == 9 )
/* line: 21, address: 0x60795cc0 */         v3 = 5;
/* line: 22 */     }
/* line: 23 */   }
/* line: 24, address: 0x60795cd4 */   return 72 * v3 + 11579612;
/* line: 25 */ }