/* line: 0, address: 0x60409cc8 */ int __fastcall sub_60409CC8(int result)
/* line: 1 */ {
/* line: 2 */   _BYTE *v1; // r1
/* line: 3 */   int v2; // r2
/* line: 4 */   int v3; // r2
/* line: 5 */   unsigned int v4; // r2
/* line: 6 */   _DWORD *v5; // r3
/* line: 7 */   char v6; // lr
/* line: 8 */ 
/* line: 9, address: 0x60409cd4 */   v1 = (_BYTE *)(result + 6559);
/* line: 10, address: 0x60409cdc */   if ( *(_BYTE *)(result + 6559) == 1 )
/* line: 11 */   {
/* line: 12, address: 0x60409ce4 */     if ( *(_BYTE *)(result + 6537) )
/* line: 13 */     {
/* line: 14 */ LABEL_3:
/* line: 15, address: 0x60409cf0 */       result = 3;
/* line: 16, address: 0x60409cf4 */       *v1 = 3;
/* line: 17, address: 0x60409cf4 */       return result;
/* line: 18 */     }
/* line: 19, address: 0x60409d00 */     v2 = *(unsigned __int8 *)(result + 6476);
/* line: 20, address: 0x60409d08 */     if ( v2 == 7 )
/* line: 21 */     {
/* line: 22, address: 0x60409d6c */       v4 = *(unsigned __int8 *)(result + 6478);
/* line: 23, address: 0x60409d70 */       *(_DWORD *)(result + 6504) = v4;
/* line: 24, address: 0x60409d78 */       v5 = *(_DWORD **)(result + 6472);
/* line: 25, address: 0x60409d80 */       if ( !v5 )
/* line: 26, address: 0x60409d80 */         goto LABEL_3;
/* line: 27, address: 0x60409d90 */       v6 = 2;
/* line: 28, address: 0x60409d94 */       if ( v5[23] <= v4 )
/* line: 29, address: 0x60409d94 */         goto LABEL_16;
/* line: 30, address: 0x60409d94 */       goto LABEL_14;
/* line: 31 */     }
/* line: 32, address: 0x60409d10 */     if ( v2 == 3 )
/* line: 33 */     {
/* line: 34, address: 0x60409d18 */       v3 = *(char *)(result + 6479);
/* line: 35, address: 0x60409d28 */       if ( v3 < 0 || v3 == 5 )
/* line: 36 */       {
/* line: 37, address: 0x60409d34 */         v4 = *(unsigned __int8 *)(result + 6481);
/* line: 38, address: 0x60409d38 */         *(_DWORD *)(result + 6504) = v4;
/* line: 39, address: 0x60409d40 */         v5 = *(_DWORD **)(result + 6472);
/* line: 40, address: 0x60409d48 */         if ( !v5 )
/* line: 41, address: 0x60409d48 */           goto LABEL_3;
/* line: 42, address: 0x60409d58 */         v6 = 2;
/* line: 43, address: 0x60409d5c */         if ( v5[23] <= v4 )
/* line: 44 */         {
/* line: 45 */ LABEL_16:
/* line: 46, address: 0x60409db8 */           *v1 = 2;
/* line: 47, address: 0x60409dc0 */           *(_BYTE *)(result + 6560) = v6;
/* line: 48, address: 0x60409dc0 */           return result;
/* line: 49 */         }
/* line: 50 */ LABEL_14:
/* line: 51, address: 0x60409d98 */         v6 = 1;
/* line: 52, address: 0x60409da4 */         if ( v5[22] > v4 )
/* line: 53 */         {
/* line: 54, address: 0x60409dac */           v6 = 0;
/* line: 55, address: 0x60409db4 */           if ( v5[21] > v4 )
/* line: 56, address: 0x60409db4 */             goto LABEL_3;
/* line: 57 */         }
/* line: 58, address: 0x60409db4 */         goto LABEL_16;
/* line: 59 */       }
/* line: 60 */     }
/* line: 61 */   }
/* line: 62, address: 0x60409cf8 */   return result;
/* line: 63 */ }