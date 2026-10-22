#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6013AA08(int a1, unsigned int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6013AA08(int a1, unsigned int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6013AA08(int a1, unsigned int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6013AA08(int a1, unsigned int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6013AA08(int a1, unsigned int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6013AA08(int a1, unsigned int a2);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6013AA08(int a1, unsigned int a2);
/* line: 0, address: 0x6013aa08 */ int __fastcall sub_6013AA08(int a1, unsigned int a2)
/* line: 1 */ {
/* line: 2 */   float v4; // s2
/* line: 3 */   float v5; // s0
/* line: 4 */   int v6; // r0
/* line: 5 */   int v7; // r1
/* line: 6 */   int v9; // r0
/* line: 7 */   int v10; // r0
/* line: 8 */   int v11; // r0
/* line: 9 */   unsigned int v12; // r6
/* line: 10 */   unsigned int v13; // r0
/* line: 11 */   int v14; // r0
/* line: 12 */   int v15; // r6
/* line: 13 */   int v16; // r0
/* line: 14 */   unsigned int v17; // r0
/* line: 15 */   _DWORD *v18; // r1
/* line: 16 */   _DWORD *v19; // r2
/* line: 17 */   int v20; // r2
/* line: 18 */   bool v21; // zf
/* line: 19 */   _DWORD v22[3]; // [sp+14h] [bp-Ch] BYREF
/* line: 20 */ 
/* line: 21, address: 0x6013aa1c */   if ( a2 != 2 )
/* line: 22, address: 0x6013aa1c */     return CollisionActor__afterCreate((CollisionActor *)a1, a2);
/* line: 23, address: 0x6013aa24 */   v4 = *(float *)(a1 + 108);
/* line: 24, address: 0x6013aa30 */   v5 = *(float *)(MEMORY[0xCC6484] + 120);
/* line: 25, address: 0x6013aa4c */   if ( v4 <= v5 && v4 >= *(float *)(MEMORY[0xCC6484] + 112) )
/* line: 26 */   {
/* line: 27, address: 0x6013aaec */     if ( *(_DWORD *)(MEMORY[0xC99D70] + 1828) )
/* line: 28 */     {
/* line: 29, address: 0x6013aaf8 */       *(float *)(a1 + 584) = v4;
/* line: 30, address: 0x6013ab00 */       *(_DWORD *)(a1 + 588) = *(_DWORD *)(a1 + 112);
/* line: 31, address: 0x6013ab04 */       v9 = *(_DWORD *)(a1 + 116);
/* line: 32 */     }
/* line: 33 */     else
/* line: 34 */     {
/* line: 35, address: 0x6013ab24 */       sub_6075DE94(MEMORY[0xCBF354], v22, *(_DWORD *)(a1 + 6768));
/* line: 36, address: 0x6013ab2c */       *(_DWORD *)(a1 + 584) = v22[0];
/* line: 37, address: 0x6013ab34 */       *(_DWORD *)(a1 + 588) = v22[1];
/* line: 38, address: 0x6013ab38 */       v9 = v22[2];
/* line: 39 */     }
/* line: 40, address: 0x6013ab40 */     *(_DWORD *)(a1 + 592) = v9;
/* line: 41, address: 0x6013ab4c */     CollisionMgr_process(a1 + 648);
/* line: 42, address: 0x6013ab50 */     v10 = *(_DWORD *)(a1 + 2872);
/* line: 43, address: 0x6013ac08 */     if ( ((v10 & 0x440000) == 0 || (v10 & 0x10000000) != 0)
/* line: 44 */       && ((v10 & 0x880000) == 0 || (v10 & 0x20000000) != 0)
/* line: 45 */       && (v10 & 0x10400) != 0x400 )
/* line: 46 */     {
/* line: 47, address: 0x6013ac10 */       if ( (v10 & 1) == 0 )
/* line: 48, address: 0x6013ac10 */         return CollisionActor__afterCreate((CollisionActor *)a1, a2);
/* line: 49, address: 0x6013ac44 */       v12 = (int)(float)((float)(MEMORY[0xB0E1E0] * 63.4) / MEMORY[0xB0E1D8]);
/* line: 50, address: 0x6013ac48 */       v13 = sub_6014C508(a1 + 648, *(_DWORD *)(a1 + 80));
/* line: 51, address: 0x6013acac */       if ( (float)(*(float *)(((v13 >> 20) & 0xFF0) + 0xB3A484)
/* line: 52 */                  + (float)((float)((float)(v13 & 0xFFFFFF) * *(float *)(((v13 >> 20) & 0xFF0) + 0xB3A488))
/* line: 53 */                          * 0.000000059605)) < (float)(*(float *)(((v12 >> 20) & 0xFF0) + 0xB3A484)
/* line: 54 */                                                     + (float)((float)((float)(v12 & 0xFFFFFF)
/* line: 55 */                                                                     * *(float *)(((v12 >> 20) & 0xFF0) + 0xB3A488))
/* line: 56 */                                                             * 0.000000059605)) )
/* line: 57 */       {
/* line: 58, address: 0x6013acb4 */         v14 = sub_6014C4A4(a1 + 648);
/* line: 59, address: 0x6013acc4 */         v15 = sub_6014C57C(a1 + 648, v14);
/* line: 60, address: 0x6013accc */         v16 = sub_6014C540(a1 + 648);
/* line: 61, address: 0x6013acd4 */         if ( v16 )
/* line: 62 */         {
/* line: 63, address: 0x6013acdc */           if ( v16 != 1 )
/* line: 64 */           {
/* line: 65, address: 0x6013ad30 */             v17 = *(_DWORD *)(a1 + 80);
/* line: 66, address: 0x6013ad34 */             v18 = &unk_60AF67FC;
/* line: 67, address: 0x6013ad38 */             v19 = &unk_60AF67D4;
/* line: 68, address: 0x6013ad3c */             goto LABEL_29;
/* line: 69 */           }
/* line: 70, address: 0x6013ace0 */           v17 = *(_DWORD *)(a1 + 80);
/* line: 71, address: 0x6013ace8 */           if ( v17 )
/* line: 72 */           {
/* line: 73, address: 0x6013acf4 */             v18 = &unk_60AF67FC;
/* line: 74, address: 0x6013acf8 */             v19 = &unk_60AF67D4;
/* line: 75 */ LABEL_29:
/* line: 76, address: 0x6013ad54 */             v20 = v19[v15];
/* line: 77, address: 0x6013ad58 */             v21 = v17 == 0;
/* line: 78, address: 0x6013ad5c */             *(_DWORD *)(a1 + 120) = v20;
/* line: 79, address: 0x6013ad60 */             if ( v17 )
/* line: 80, address: 0x6013ad60 */               v17 = v20 ^ 0x80000000;
/* line: 81, address: 0x6013ad68 */             *(_DWORD *)(a1 + 124) = v18[v15];
/* line: 82, address: 0x6013ad6c */             if ( !v21 )
/* line: 83, address: 0x6013ad6c */               *(_DWORD *)(a1 + 120) = v17;
/* line: 84, address: 0x6013ad6c */             return CollisionActor__afterCreate((CollisionActor *)a1, a2);
/* line: 85 */           }
/* line: 86, address: 0x6013ad40 */           v17 = 0;
/* line: 87 */         }
/* line: 88 */         else
/* line: 89 */         {
/* line: 90, address: 0x6013ad04 */           v17 = 1;
/* line: 91, address: 0x6013ad0c */           if ( *(_DWORD *)(a1 + 80) != 1 )
/* line: 92 */           {
/* line: 93, address: 0x6013ad14 */             v18 = &unk_60AF67FC;
/* line: 94, address: 0x6013ad1c */             v19 = &unk_60AF67D4;
/* line: 95, address: 0x6013ad20 */             v17 = *(_DWORD *)(a1 + 80);
/* line: 96, address: 0x6013ad24 */             goto LABEL_29;
/* line: 97 */           }
/* line: 98 */         }
/* line: 99, address: 0x6013ad4c */         v18 = &unk_60AF6810;
/* line: 100, address: 0x6013ad50 */         v19 = &unk_60AF67E8;
/* line: 101, address: 0x6013ad50 */         goto LABEL_29;
/* line: 102 */       }
/* line: 103 */     }
/* line: 104, address: 0x6013ab74 */     v11 = *(_DWORD *)(a1 + 6232);
/* line: 105, address: 0x6013ab80 */     *(_DWORD *)(a1 + 108) = *(_DWORD *)(a1 + 6228);
/* line: 106, address: 0x6013ab84 */     *(_DWORD *)(a1 + 112) = v11;
/* line: 107, address: 0x6013ab8c */     *(_DWORD *)(a1 + 116) = 1166843904;
/* line: 108, address: 0x6013abb4 */     LightSource_update1(a1 + 6364, 0, a1 + 108, 0, 0, 0, 0, 0, 0);
/* line: 109, address: 0x6013abc4 */     (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 240))(a1);
/* line: 110, address: 0x6013abcc */     sub_601362A0(a1);
/* line: 111, address: 0x6013abe0 */     return CollisionActor__afterCreate((CollisionActor *)a1, a2);
/* line: 112 */   }
/* line: 113, address: 0x6013aa5c */   if ( *(_DWORD *)(MEMORY[0xC99D70] + 1828) )
/* line: 114 */   {
/* line: 115, address: 0x6013aa70 */     if ( v4 > v5 )
/* line: 116, address: 0x6013aa70 */       v5 = *(float *)(MEMORY[0xCC6484] + 112);
/* line: 117, address: 0x6013aa74 */     *(float *)(a1 + 108) = v5;
/* line: 118, address: 0x6013aa78 */     v6 = *(_DWORD *)(a1 + 112);
/* line: 119, address: 0x6013aa7c */     v7 = *(_DWORD *)(a1 + 116);
/* line: 120, address: 0x6013aa80 */     *(float *)(a1 + 584) = v5;
/* line: 121, address: 0x6013aa84 */     *(_DWORD *)(a1 + 588) = v6;
/* line: 122, address: 0x6013aa88 */     *(_DWORD *)(a1 + 592) = v7;
/* line: 123, address: 0x6013aa8c */     *(float *)(a1 + 608) = v5;
/* line: 124, address: 0x6013aa90 */     *(_DWORD *)(a1 + 612) = v6;
/* line: 125, address: 0x6013aa94 */     *(_DWORD *)(a1 + 616) = v7;
/* line: 126, address: 0x6013aaa8 */     return CollisionActor__afterCreate((CollisionActor *)a1, 2u);
/* line: 127 */   }
/* line: 128 */   else
/* line: 129 */   {
/* line: 130, address: 0x6013aab4 */     CollisionActor__afterCreate((CollisionActor *)a1, 2u);
/* line: 131, address: 0x6013aacc */     (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 296))(a1);
/* line: 132, address: 0x6013aad4 */     *(_BYTE *)(a1 + 6240) = 1;
/* line: 133, address: 0x6013aad0 */     return 1;
/* line: 134 */   }
/* line: 135 */ }