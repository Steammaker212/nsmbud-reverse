#include "nsmbudx_prelude.h"
/* line: 0, address: 0x60135e48 */ int __fastcall FireballBase_onExecute(int *a1)
/* line: 1 */ {
/* line: 2 */   StateMgr *v2; // r6
/* line: 3 */   int v3; // r5
/* line: 4 */   float v4; // s0
/* line: 5 */   int CurrentState; // r0
/* line: 6 */   int v6; // r6
/* line: 7 */   _BYTE *v7; // r5
/* line: 8 */   int v9; // r8
/* line: 9 */   int v10; // r0
/* line: 10 */   float v11; // r0
/* line: 11 */   bool v12; // zf
/* line: 12 */   int v13; // [sp+4h] [bp-14h] BYREF
/* line: 13 */   _BYTE v14[4]; // [sp+8h] [bp-10h] BYREF
/* line: 14 */   int v15; // [sp+Ch] [bp-Ch]
/* line: 15 */   int v16; // [sp+10h] [bp-8h]
/* line: 16 */   int v17; // [sp+14h] [bp-4h]
/* line: 17 */ 
/* line: 18, address: 0x60135e58 */   v2 = (StateMgr *)(a1 + 1521);
/* line: 19, address: 0x60135e60 */   StateMgr::execute((StateMgr *)(a1 + 1521));
/* line: 20, address: 0x60135e78 */   (*(void (__fastcall **)(int *))(*a1 + 264))(a1);
/* line: 21, address: 0x60135e7c */   v3 = a1[1561];
/* line: 22, address: 0x60135e84 */   if ( v3 < 1 )
/* line: 23, address: 0x60135eb0 */     v4 = 1.0;
/* line: 24 */   else
/* line: 25, address: 0x60135ea8 */     v4 = (float)v3 / (float)(*(int (__fastcall **)(int *))(*a1 + 292))(a1);
/* line: 26, address: 0x60135ed4 */   *((float *)a1 + 1526) = v4 * *((float *)a1 + 1535);
/* line: 27, address: 0x60135edc */   a1[1528] = a1[27];
/* line: 28, address: 0x60135ee8 */   a1[1529] = a1[28];
/* line: 29, address: 0x60135ef4 */   a1[1530] = a1[29];
/* line: 30, address: 0x60135f00 */   LightMask::update((LightMask *)(a1 + 1525));
/* line: 31, address: 0x60135f10 */   if ( a1[1539] != 2 )
/* line: 32 */   {
/* line: 33, address: 0x60135f18 */     CurrentState = StateMgr::getCurrentState(v2);
/* line: 34, address: 0x60135f28 */     v6 = (*(int (__fastcall **)(int))(*(_DWORD *)CurrentState + 8))(CurrentState);
/* line: 35, address: 0x60135f44 */     if ( v6 != (*(int (**)(void))(MEMORY[0xC877FC] + 8))() )
/* line: 36 */     {
/* line: 37, address: 0x60135fe8 */       (*(void (__fastcall **)(int *))(*a1 + 268))(a1);
/* line: 38, address: 0x60135ffc */       v9 = a1[1554];
/* line: 39, address: 0x6013601c */       physics_21893E8(&v13, a1 + 1555, v14, a1 + 27, *((unsigned __int8 *)a1 + 86));
/* line: 40, address: 0x60136020 */       v10 = v13;
/* line: 41, address: 0x60136028 */       a1[1554] = v13;
/* line: 42, address: 0x6013603c */       switch ( v10 )
/* line: 43 */       {
/* line: 44, address: 0x6013603c */         case 0:
/* line: 45, address: 0x60136064 */           if ( v9 == 2 && *((_BYTE *)a1 + 6744) )
/* line: 46 */           {
/* line: 47, address: 0x60136070 */             v11 = *(float *)a1;
/* line: 48, address: 0x60136074 */             goto LABEL_26;
/* line: 49 */           }
/* line: 50, address: 0x60136074 */           break;
/* line: 51, address: 0x6013603c */         case 1:
/* line: 52, address: 0x60136098 */           if ( !v9 )
/* line: 53, address: 0x601360ac */             (*(void (__fastcall **)(int *))(*a1 + 272))(a1);
/* line: 54, address: 0x601360b0 */           break;
/* line: 55, address: 0x6013603c */         case 2:
/* line: 56, address: 0x601360bc */           if ( v14[0] )
/* line: 57 */           {
/* line: 58, address: 0x601360c8 */             *((_BYTE *)a1 + 6744) = v14[0];
/* line: 59, address: 0x601360d4 */             a1[1687] = v15;
/* line: 60, address: 0x601360e0 */             a1[1688] = v16;
/* line: 61, address: 0x601360ec */             a1[1689] = v17;
/* line: 62, address: 0x601360f0 */             if ( !v9 )
/* line: 63 */             {
/* line: 64, address: 0x601360f4 */               v11 = *(float *)a1;
/* line: 65 */ LABEL_26:
/* line: 66, address: 0x601360fc */               (*(void (__fastcall **)(int *))(LODWORD(v11) + 276))(a1);
/* line: 67 */             }
/* line: 68 */           }
/* line: 69, address: 0x60136108 */           break;
/* line: 70, address: 0x6013603c */         case 3:
/* line: 71, address: 0x60136110 */           if ( !v9 )
/* line: 72 */           {
/* line: 73, address: 0x60136120 */             (*(void (__fastcall **)(int *))(*a1 + 300))(a1);
/* line: 74, address: 0x60136120 */             goto LABEL_31;
/* line: 75 */           }
/* line: 76, address: 0x60136120 */           break;
/* line: 77, address: 0x6013603c */         case 4:
/* line: 78, address: 0x60136128 */           if ( !v9 )
/* line: 79 */           {
/* line: 80, address: 0x6013613c */             (*(void (__fastcall **)(int *))(*a1 + 280))(a1);
/* line: 81, address: 0x6013613c */             goto LABEL_31;
/* line: 82 */           }
/* line: 83, address: 0x6013613c */           break;
/* line: 84 */         default:
/* line: 85, address: 0x60136078 */           v12 = v9 == 0;
/* line: 86, address: 0x6013607c */           if ( !v9 )
/* line: 87, address: 0x6013607c */             v12 = v10 == 5;
/* line: 88, address: 0x60136080 */           if ( v12 )
/* line: 89 */           {
/* line: 90, address: 0x60136090 */             (*(void (__fastcall **)(int *))(*a1 + 284))(a1);
/* line: 91 */ LABEL_31:
/* line: 92, address: 0x60136140 */             (*(void (__fastcall **)(int *))(*a1 + 296))(a1);
/* line: 93, address: 0x6013615c */             *((_BYTE *)a1 + 6240) = 1;
/* line: 94 */           }
/* line: 95, address: 0x60136160 */           break;
/* line: 96 */       }
/* line: 97 */     }
/* line: 98 */   }
/* line: 99, address: 0x60135f50 */   v7 = a1 + 1560;
/* line: 100, address: 0x60135f50 */   if ( !*((_BYTE *)a1 + 6240) )
/* line: 101 */   {
/* line: 102, address: 0x60135f6c */     if ( StageActor::cullCheck((StageActor *)a1, 0xAu) == 1 )
/* line: 103 */     {
/* line: 104, address: 0x60135f7c */       (*(void (__fastcall **)(int *))(*a1 + 296))(a1);
/* line: 105, address: 0x60135f84 */       *v7 = 1;
/* line: 106 */     }
/* line: 107, address: 0x60135fb4 */     if ( (float)(*((float *)a1 + 27) + *((float *)a1 + 125)) < *(float *)(MEMORY[0xC99D70] + 1812) )
/* line: 108 */     {
/* line: 109, address: 0x60135fc4 */       (*(void (__fastcall **)(int *))(*a1 + 296))(a1);
/* line: 110, address: 0x60135fcc */       *v7 = 1;
/* line: 111 */     }
/* line: 112 */   }
/* line: 113, address: 0x60135fd8 */   return 1;
/* line: 114 */ }