/* line: 0, address: 0x6000a2e8 */ int __fastcall sub_6000A2E8(int a1, unsigned int a2)
/* line: 1 */ {
/* line: 2 */   unsigned int v2; // r9
/* line: 3 */   int result; // r0
/* line: 4 */   Actor **v4; // r7
/* line: 5 */   Actor **v5; // r5
/* line: 6 */   Actor *v6; // r8
/* line: 7 */   int v7; // r10
/* line: 8 */   int v8; // r4
/* line: 9 */   Actor *v9; // r6
/* line: 10 */   bool v10; // zf
/* line: 11 */ 
/* line: 12, address: 0x6000a2f0 */   v2 = a2;
/* line: 13, address: 0x6000a2f8 */   if ( a2 >= 4 )
/* line: 14, address: 0x6000a2f8 */     a2 = 0;
/* line: 15, address: 0x6000a300 */   result = *(_DWORD *)(a1 + 8 * a2 + 100);
/* line: 16, address: 0x6000a308 */   if ( result >= 1 )
/* line: 17 */   {
/* line: 18, address: 0x6000a318 */     result = MEMORY[0xC7B400];
/* line: 19, address: 0x6000a31c */     v4 = *(Actor ***)(MEMORY[0xC7B400] + 27172);
/* line: 20, address: 0x6000a324 */     v5 = *(Actor ***)(MEMORY[0xC7B400] + 27180);
/* line: 21, address: 0x6000a32c */     if ( v4 != v5 )
/* line: 22 */     {
/* line: 23, address: 0x6000a334 */       v6 = nullptr;
/* line: 24, address: 0x6000a338 */       v7 = -1;
/* line: 25, address: 0x6000a340 */       result = 11482264;
/* line: 26, address: 0x6000a344 */       v8 = MEMORY[0xAF3498];
/* line: 27, address: 0x6000a398 */       do
/* line: 28 */       {
/* line: 29, address: 0x6000a348 */         v9 = *v4;
/* line: 30, address: 0x6000a348 */         if ( *v4 )
/* line: 31 */         {
/* line: 32, address: 0x6000a358 */           result = Actor::getProfileId(*v4);
/* line: 33, address: 0x6000a35c */           v10 = result == v8;
/* line: 34, address: 0x6000a360 */           if ( result == v8 )
/* line: 35 */           {
/* line: 36, address: 0x6000a360 */             result = *((_DWORD *)v9 + 1692);
/* line: 37, address: 0x6000a364 */             v10 = result == v2;
/* line: 38 */           }
/* line: 39, address: 0x6000a368 */           if ( v10 )
/* line: 40 */           {
/* line: 41, address: 0x6000a370 */             result = *((unsigned __int8 *)v9 + 6240);
/* line: 42, address: 0x6000a370 */             if ( !*((_BYTE *)v9 + 6240) )
/* line: 43 */             {
/* line: 44, address: 0x6000a380 */               result = *((_DWORD *)v9 + 1691);
/* line: 45, address: 0x6000a388 */               if ( v7 < result )
/* line: 46 */               {
/* line: 47, address: 0x6000a388 */                 v6 = v9;
/* line: 48, address: 0x6000a38c */                 v7 = *((_DWORD *)v9 + 1691);
/* line: 49 */               }
/* line: 50 */             }
/* line: 51 */           }
/* line: 52 */         }
/* line: 53, address: 0x6000a390 */         ++v4;
/* line: 54 */       }
/* line: 55, address: 0x6000a398 */       while ( v5 != v4 );
/* line: 56, address: 0x6000a3a0 */       if ( v6 )
/* line: 57, address: 0x6000a3b0 */         return sub_601362A0(v6);
/* line: 58 */     }
/* line: 59 */   }
/* line: 60, address: 0x6000a3b8 */   return result;
/* line: 61 */ }