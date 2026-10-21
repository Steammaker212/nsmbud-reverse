/* line: 0, address: 0x60461904 */ int __fastcall sub_60461904(int a1)
/* line: 1 */ {
/* line: 2 */   StateMgr *v2; // r5
/* line: 3 */   int CurrentState; // r0
/* line: 4 */   int v4; // r6
/* line: 5 */   int result; // r0
/* line: 6 */   int v6; // r0
/* line: 7 */   int v7; // r5
/* line: 8 */   int v8; // r1
/* line: 9 */   int v9; // r1
/* line: 10 */   __int16 v10; // r0
/* line: 11 */ 
/* line: 12, address: 0x60461910 */   v2 = (StateMgr *)(a1 + 6084);
/* line: 13, address: 0x60461918 */   CurrentState = StateMgr::getCurrentState((StateMgr *)(a1 + 6084));
/* line: 14, address: 0x60461928 */   v4 = (*(int (__fastcall **)(int))(*(_DWORD *)CurrentState + 8))(CurrentState);
/* line: 15, address: 0x6046193c */   result = (*(int (**)(void))(MEMORY[0xC9D2B8] + 8))();
/* line: 16, address: 0x60461944 */   if ( v4 != result )
/* line: 17 */   {
/* line: 18, address: 0x6046194c */     v6 = StateMgr::getCurrentState(v2);
/* line: 19, address: 0x6046195c */     v7 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 8))(v6);
/* line: 20, address: 0x60461970 */     result = (*(int (**)(void))(MEMORY[0xC9D2D8] + 8))();
/* line: 21, address: 0x60461978 */     if ( v7 != result )
/* line: 22 */     {
/* line: 23, address: 0x60461980 */       result = *(unsigned __int8 *)(a1 + 6258);
/* line: 24, address: 0x60461980 */       if ( *(_BYTE *)(a1 + 6258) )
/* line: 25 */       {
/* line: 26, address: 0x60461994 */         result = a1 + 6236;
/* line: 27, address: 0x60461994 */         v8 = *(_DWORD *)(a1 + 6236);
/* line: 28, address: 0x6046199c */         if ( !v8 )
/* line: 29, address: 0x6046199c */           goto LABEL_11;
/* line: 30, address: 0x604619a8 */         *(_DWORD *)result = v8 - 1;
/* line: 31, address: 0x604619ac */         if ( v8 > 180 )
/* line: 32, address: 0x604619ac */           return result;
/* line: 33, address: 0x604619b4 */         if ( v8 == 1 )
/* line: 34 */         {
/* line: 35 */ LABEL_11:
/* line: 36, address: 0x60461a0c */           *(_BYTE *)(a1 + 19) = 1;
/* line: 37, address: 0x60461a08 */           return 1;
/* line: 38 */         }
/* line: 39 */         else
/* line: 40 */         {
/* line: 41, address: 0x604619c0 */           result = a1 + 6240;
/* line: 42, address: 0x604619c0 */           v9 = *(_DWORD *)(a1 + 6240);
/* line: 43, address: 0x604619c8 */           if ( v9 )
/* line: 44 */           {
/* line: 45, address: 0x604619cc */             *(_DWORD *)result = v9 - 1;
/* line: 46 */           }
/* line: 47 */           else
/* line: 48 */           {
/* line: 49, address: 0x604619d8 */             *(_DWORD *)result = 4;
/* line: 50, address: 0x604619e8 */             v10 = *(_WORD *)(a1 + 6248) ^ 1;
/* line: 51, address: 0x604619ec */             *(_WORD *)(a1 + 6248) = v10;
/* line: 52, address: 0x604619f8 */             result = v10 == 0;
/* line: 53, address: 0x60461a00 */             *(_BYTE *)(a1 + 535) = result;
/* line: 54 */           }
/* line: 55 */         }
/* line: 56 */       }
/* line: 57 */     }
/* line: 58 */   }
/* line: 59, address: 0x604619ac */   return result;
/* line: 60 */ }