#include "nsmbudx_prelude.h"

/* ---- addr: 0x605643b8 */ int __fastcall sub_605643B8(int a1)
/* line: 1 */ {
/* line: 2 */   int CurrentState; // r0
/* line: 3 */   int v3; // r5
/* line: 4 */   int result; // r0
/* line: 5 */   int v5; // r5
/* line: 6 */   int v6; // r0
/* line: 7 */   int v7; // r1
/* line: 8 */   bool v8; // zf
/* line: 9 */   int *v9; // r3
/* line: 10 */   int v10; // r6
/* line: 11 */   int *v11; // r5
/* line: 12 */   int v13; // r0
/* line: 13 */   int v14; // r0
/* line: 14 */   int v15; // r1
/* line: 15 */   bool v16; // zf
/* line: 16 */   int *v17; // r3
/* line: 17 */   int v18; // r6
/* line: 18 */   int *v19; // r6
/* line: 19 */   bool v21; // zf
/* line: 20 */   int *v22; // r6
/* line: 21 */   _DWORD *v23; // r5
/* line: 22 */   int v24; // r0
/* line: 23 */   int v25; // [sp+0h] [bp-20h] BYREF
/* line: 24 */   int v26; // [sp+4h] [bp-1Ch] BYREF
/* line: 25 */   int v27; // [sp+8h] [bp-18h]
/* line: 26 */   int v28; // [sp+Ch] [bp-14h]
/* line: 27 */   int v29; // [sp+10h] [bp-10h]
/* line: 28 */   int v30; // [sp+14h] [bp-Ch]
/* line: 29 */   int v31; // [sp+18h] [bp-8h]
/* line: 30 */   int v32; // [sp+1Ch] [bp-4h]
/* line: 31 */ 
/* line: 32, address: 0x605643cc */   CurrentState = StateMgr__getCurrentState(a1 + 6084);
/* line: 33, address: 0x605643dc */   v3 = (*(int (__fastcall **)(int))(*(_DWORD *)CurrentState + 8))(CurrentState);
/* line: 34, address: 0x605643f0 */   result = (*(int (**)(void))(MEMORY[0xCAE2F8] + 8))();
/* line: 35, address: 0x605643f8 */   if ( v3 != result )
/* line: 36, address: 0x605643f8 */     return result;
/* line: 37, address: 0x60564400 */   result = sub_605B4CC4(a1);
/* line: 38, address: 0x60564404 */   v5 = result;
/* line: 39, address: 0x6056440c */   if ( !result )
/* line: 40, address: 0x6056440c */     return result;
/* line: 41, address: 0x60564414 */   if ( *(_DWORD *)(a1 + 6828) )
/* line: 42 */   {
/* line: 43, address: 0x60564424 */     if ( *(_BYTE *)(a1 + 6878) )
/* line: 44 */     {
/* line: 45, address: 0x60564434 */       v32 = 0;
/* line: 46, address: 0x60564438 */       v31 = 0;
/* line: 47, address: 0x6056443c */       v30 = 0;
/* line: 48, address: 0x60564440 */       v29 = 0;
/* line: 49, address: 0x60564444 */       v28 = 0;
/* line: 50, address: 0x60564448 */       v27 = 0;
/* line: 51, address: 0x6056444c */       v26 = 0;
/* line: 52, address: 0x60564450 */       v25 = 0;
/* line: 53, address: 0x60564454 */       v6 = *(_DWORD *)(a1 + 40);
/* line: 54, address: 0x6056445c */       if ( v6 >= 1 )
/* line: 55 */       {
/* line: 56, address: 0x60564460 */         v7 = *(_DWORD *)(a1 + 36);
/* line: 57, address: 0x60564464 */         v8 = v7 == 0;
/* line: 58, address: 0x60564468 */         if ( v7 )
/* line: 59 */         {
/* line: 60, address: 0x60564468 */           v6 = *(_DWORD *)(a1 + 44);
/* line: 61, address: 0x6056446c */           v7 -= v6;
/* line: 62, address: 0x6056446c */           v8 = v7 == 0;
/* line: 63 */         }
/* line: 64, address: 0x60564470 */         if ( !v8 )
/* line: 65 */         {
/* line: 66, address: 0x60564478 */           v9 = &v25;
/* line: 67, address: 0x60564498 */           do
/* line: 68 */           {
/* line: 69, address: 0x6056447c */             *v9++ = v7;
/* line: 70, address: 0x60564484 */             v10 = *(_DWORD *)(v7 + v6 + 4);
/* line: 71, address: 0x60564488 */             v7 = v10 - v6;
/* line: 72, address: 0x60564490 */             if ( v10 == a1 + 32 )
/* line: 73, address: 0x60564490 */               v7 = 0;
/* line: 74 */           }
/* line: 75, address: 0x60564498 */           while ( v7 );
/* line: 76, address: 0x605644a4 */           if ( v25 )
/* line: 77 */           {
/* line: 78, address: 0x605644ac */             v11 = &v26;
/* line: 79, address: 0x605644c0 */             do
/* line: 80, address: 0x605644b4 */               Actor__removeChild((Actor *)a1);
/* line: 81, address: 0x605644c0 */             while ( *v11++ );
/* line: 82 */           }
/* line: 83 */         }
/* line: 84 */       }
/* line: 85 */     }
/* line: 86, address: 0x605644d8 */     return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 380))(a1);
/* line: 87 */   }
/* line: 88, address: 0x605644e8 */   v13 = *(_DWORD *)(a1 + 6824);
/* line: 89, address: 0x605644e4 */   if ( *(_BYTE *)(a1 + 6841) )
/* line: 90 */   {
/* line: 91, address: 0x605644f8 */     if ( v13 == -1 )
/* line: 92, address: 0x605644f8 */       goto LABEL_22;
/* line: 93 */   }
/* line: 94, address: 0x60564504 */   else if ( v13 == -1 )
/* line: 95 */   {
/* line: 96, address: 0x60564504 */     goto LABEL_36;
/* line: 97 */   }
/* line: 98, address: 0x6056450c */   *(_BYTE *)(a1 + 6849) = v13;
/* line: 99 */ LABEL_22:
/* line: 100, address: 0x60564514 */   if ( *(_BYTE *)(a1 + 6878) )
/* line: 101 */   {
/* line: 102, address: 0x60564524 */     v32 = 0;
/* line: 103, address: 0x60564528 */     v31 = 0;
/* line: 104, address: 0x6056452c */     v30 = 0;
/* line: 105, address: 0x60564530 */     v29 = 0;
/* line: 106, address: 0x60564534 */     v28 = 0;
/* line: 107, address: 0x60564538 */     v27 = 0;
/* line: 108, address: 0x6056453c */     v26 = 0;
/* line: 109, address: 0x60564540 */     v25 = 0;
/* line: 110, address: 0x60564544 */     v14 = *(_DWORD *)(a1 + 40);
/* line: 111, address: 0x6056454c */     if ( v14 >= 1 )
/* line: 112 */     {
/* line: 113, address: 0x60564550 */       v15 = *(_DWORD *)(a1 + 36);
/* line: 114, address: 0x60564554 */       v16 = v15 == 0;
/* line: 115, address: 0x60564558 */       if ( v15 )
/* line: 116 */       {
/* line: 117, address: 0x60564558 */         v14 = *(_DWORD *)(a1 + 44);
/* line: 118, address: 0x6056455c */         v15 -= v14;
/* line: 119, address: 0x6056455c */         v16 = v15 == 0;
/* line: 120 */       }
/* line: 121, address: 0x60564560 */       if ( !v16 )
/* line: 122 */       {
/* line: 123, address: 0x60564568 */         v17 = &v25;
/* line: 124, address: 0x60564588 */         do
/* line: 125 */         {
/* line: 126, address: 0x6056456c */           *v17++ = v15;
/* line: 127, address: 0x60564574 */           v18 = *(_DWORD *)(v15 + v14 + 4);
/* line: 128, address: 0x60564578 */           v15 = v18 - v14;
/* line: 129, address: 0x60564580 */           if ( v18 == a1 + 32 )
/* line: 130, address: 0x60564580 */             v15 = 0;
/* line: 131 */         }
/* line: 132, address: 0x60564588 */         while ( v15 );
/* line: 133, address: 0x60564594 */         if ( v25 )
/* line: 134 */         {
/* line: 135, address: 0x6056459c */           v19 = &v26;
/* line: 136, address: 0x605645b0 */           do
/* line: 137, address: 0x605645a4 */             Actor__removeChild((Actor *)a1);
/* line: 138, address: 0x605645b0 */           while ( *v19++ );
/* line: 139 */         }
/* line: 140 */       }
/* line: 141 */     }
/* line: 142 */   }
/* line: 143, address: 0x605645c0 */   result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 380))(a1);
/* line: 144, address: 0x605645c8 */   if ( v5 != 3 )
/* line: 145 */   {
/* line: 146 */ LABEL_36:
/* line: 147, address: 0x605645e0 */     if ( *(_DWORD *)(a1 + 7368) == 1 )
/* line: 148 */     {
/* line: 149, address: 0x605645e4 */       v21 = v5 == 3;
/* line: 150, address: 0x605645e8 */       if ( v5 == 3 )
/* line: 151, address: 0x605645f0 */         v21 = *(_DWORD *)(a1 + 6856) == 21;
/* line: 152, address: 0x605645f4 */       if ( v21 )
/* line: 153, address: 0x60564600 */         return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 376))(a1);
/* line: 154 */     }
/* line: 155, address: 0x60564614 */     *(float *)(a1 + 116) = *(float *)(a1 + 116) + 1.0;
/* line: 156, address: 0x60564618 */     if ( v5 == 1 )
/* line: 157 */     {
/* line: 158, address: 0x60564674 */       v22 = (int *)(a1 + 6864);
/* line: 159, address: 0x60564688 */       (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 13305140);
/* line: 160, address: 0x60564698 */       v23 = (_DWORD *)(a1 + 6904);
/* line: 161, address: 0x6056469c */       *(_DWORD *)(a1 + 7380) = *(_DWORD *)(a1 + 6904);
/* line: 162, address: 0x605646a8 */       *(_BYTE *)(a1 + 6846) = 1;
/* line: 163, address: 0x605646ac */       v24 = 2;
/* line: 164 */     }
/* line: 165 */     else
/* line: 166 */     {
/* line: 167, address: 0x60564620 */       if ( v5 != 2 )
/* line: 168 */       {
/* line: 169, address: 0x605646cc */         v23 = (_DWORD *)(a1 + 6904);
/* line: 170 */ LABEL_48:
/* line: 171, address: 0x605646ec */         if ( !*v23 && (*(_DWORD *)(a1 + 6856) & 0xFFFFFFFE) == 0xC )
/* line: 172, address: 0x60564704 */           sub_6040B3B0(MEMORY[0xC9A1F0], *(unsigned __int8 *)(MEMORY[0xC9A1F0] + 6551));
/* line: 173, address: 0x60564714 */         (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 356))(a1);
/* line: 174, address: 0x60564720 */         return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 364))(a1);
/* line: 175 */       }
/* line: 176, address: 0x6056462c */       v22 = (int *)(a1 + 6864);
/* line: 177, address: 0x60564640 */       (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 192))(a1, 13305176);
/* line: 178, address: 0x60564650 */       v23 = (_DWORD *)(a1 + 6904);
/* line: 179, address: 0x60564654 */       *(_DWORD *)(a1 + 7380) = *(_DWORD *)(a1 + 6904);
/* line: 180, address: 0x60564660 */       *(_BYTE *)(a1 + 6846) = 2;
/* line: 181, address: 0x60564664 */       v24 = 3;
/* line: 182 */     }
/* line: 183, address: 0x605646b0 */     *v22 = v24;
/* line: 184, address: 0x605646c0 */     (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 392))(a1);
/* line: 185, address: 0x605646c4 */     goto LABEL_48;
/* line: 186 */   }
/* line: 187, address: 0x605645d0 */   return result;
/* line: 188 */ }