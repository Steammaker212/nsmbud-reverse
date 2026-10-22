#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607AAF80(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607AAF80(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607AAF80(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607AAF80(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607AAF80(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607AAF80(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_607AAF80(int a1);
/* line: 0, address: 0x607aaf80 */ int __fastcall sub_607AAF80(int a1)
/* line: 1 */ {
/* line: 2 */   float v1; // s0
/* line: 3 */   unsigned int *v3; // r2
/* line: 4 */   int result; // r0
/* line: 5 */   unsigned int v5; // r5
/* line: 6 */   unsigned int v6; // r1
/* line: 7 */   int v7; // r1
/* line: 8 */   _DWORD *v8; // r5
/* line: 9 */   int v9; // r2
/* line: 10 */   int v10; // r1
/* line: 11 */   int v11; // r0
/* line: 12 */   int v12; // r0
/* line: 13 */   unsigned int v13; // r0
/* line: 14 */   int v14; // r1
/* line: 15 */   unsigned int v15; // r0
/* line: 16 */   int v16; // r1
/* line: 17 */   int v17; // r1
/* line: 18 */ 
/* line: 19, address: 0x607aaf8c */   sub_607712D4(a1);
/* line: 20, address: 0x607aaf9c */   (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1104))(a1);
/* line: 21, address: 0x607aafa4 */   sub_60771D8C(a1);
/* line: 22, address: 0x607aafac */   sub_607711C8(a1);
/* line: 23, address: 0x607aafd4 */   v3 = (unsigned int *)(a1 + 1224);
/* line: 24, address: 0x607aafd8 */   result = *(_DWORD *)(a1 + 6900) & 1;
/* line: 25, address: 0x607aafdc */   v5 = *v3 & 0xFFFFBE3B;
/* line: 26, address: 0x607aafe0 */   if ( !result )
/* line: 27, address: 0x607aafe0 */     v5 = *v3 | 0x41C4;
/* line: 28, address: 0x607aafec */   *v3 = v5;
/* line: 29, address: 0x607aaff0 */   v6 = *(_DWORD *)(a1 + 1320);
/* line: 30, address: 0x607ab008 */   if ( v6 > 6 || ((1 << v6) & 0x64) == 0 )
/* line: 31 */   {
/* line: 32, address: 0x607ab070 */     if ( !result )
/* line: 33 */     {
/* line: 34, address: 0x607ab078 */       v9 = 0;
/* line: 35, address: 0x607ab07c */       v10 = 13388804;
/* line: 36, address: 0x607ab080 */       v11 = a1;
/* line: 37, address: 0x607ab228 */       return Player_changeState(v11, v10, v9);
/* line: 38 */     }
/* line: 39, address: 0x607ab0dc */     v10 = 13388732;
/* line: 40 */ LABEL_35:
/* line: 41, address: 0x607ab218 */     v11 = a1;
/* line: 42, address: 0x607ab21c */     v9 = 1;
/* line: 43, address: 0x607ab21c */     return Player_changeState(v11, v10, v9);
/* line: 44 */   }
/* line: 45, address: 0x607ab014 */   v8 = (_DWORD *)(a1 + 9940);
/* line: 46, address: 0x607ab014 */   v7 = *(_DWORD *)(a1 + 9940);
/* line: 47, address: 0x607ab01c */   if ( v7 == 1 )
/* line: 48 */   {
/* line: 49, address: 0x607ab094 */     if ( sub_60786670(a1 + 688) != 1 )
/* line: 50, address: 0x607ab094 */       goto LABEL_25;
/* line: 51, address: 0x607ab098 */     v12 = *(_DWORD *)(a1 + 1320);
/* line: 52, address: 0x607ab0a4 */     if ( (unsigned int)(v12 - 5) >= 2 )
/* line: 53 */     {
/* line: 54, address: 0x607ab0e8 */       if ( v12 != 2 )
/* line: 55, address: 0x607ab0e8 */         goto LABEL_25;
/* line: 56, address: 0x607ab0ec */       v15 = *(unsigned __int8 *)(a1 + 84);
/* line: 57, address: 0x607ab0f0 */       v16 = 0;
/* line: 58, address: 0x607ab0f8 */       if ( v15 < 4 )
/* line: 59, address: 0x607ab0f8 */         v16 = (char)v15;
/* line: 60, address: 0x607ab114 */       if ( *(int *)(MEMORY[0xC7B420] + 8 * v16 + 104) >= 2 )
/* line: 61 */       {
/* line: 62 */ LABEL_25:
/* line: 63, address: 0x607ab170 */         if ( (*(_BYTE *)(a1 + 6900) & 1) != 0 )
/* line: 64 */         {
/* line: 65, address: 0x607ab1c4 */           result = sub_6075FC38(a1);
/* line: 66, address: 0x607ab1cc */           if ( result )
/* line: 67, address: 0x607ab1cc */             return result;
/* line: 68, address: 0x607ab1dc */           sub_60793184(*(_DWORD *)(a1 + 11360));
/* line: 69, address: 0x607ab1fc */           if ( v1 < 10.0 || *(float *)(a1 + 88) == 0.0 )
/* line: 70 */           {
/* line: 71, address: 0x607ab204 */             result = sub_60793CA8(*(_DWORD *)(a1 + 11360));
/* line: 72, address: 0x607ab20c */             if ( result != 1 )
/* line: 73, address: 0x607ab20c */               return result;
/* line: 74 */           }
/* line: 75, address: 0x607ab214 */           v10 = 13388732;
/* line: 76 */         }
/* line: 77 */         else
/* line: 78 */         {
/* line: 79, address: 0x607ab180 */           sub_60793184(*(_DWORD *)(a1 + 11360));
/* line: 80, address: 0x607ab190 */           if ( v1 < 10.0 )
/* line: 81 */           {
/* line: 82, address: 0x607ab198 */             result = sub_60793CA8(*(_DWORD *)(a1 + 11360));
/* line: 83, address: 0x607ab1b0 */             if ( result != 1 || *(float *)(a1 + 124) > 0.0 )
/* line: 84, address: 0x607ab1b0 */               return result;
/* line: 85 */           }
/* line: 86, address: 0x607ab1b8 */           v10 = 13388804;
/* line: 87 */         }
/* line: 88, address: 0x607ab1bc */         goto LABEL_35;
/* line: 89 */       }
/* line: 90 */     }
/* line: 91 */     else
/* line: 92 */     {
/* line: 93, address: 0x607ab0a8 */       v13 = *(unsigned __int8 *)(a1 + 84);
/* line: 94, address: 0x607ab0ac */       v14 = 0;
/* line: 95, address: 0x607ab0b4 */       if ( v13 < 4 )
/* line: 96, address: 0x607ab0b4 */         v14 = (char)v13;
/* line: 97, address: 0x607ab0d0 */       if ( *(int *)(MEMORY[0xC7B420] + 8 * v14 + 136) > 1 )
/* line: 98, address: 0x607ab0d0 */         goto LABEL_25;
/* line: 99 */     }
/* line: 100, address: 0x607ab118 */     v17 = *(_DWORD *)(a1 + 80);
/* line: 101, address: 0x607ab120 */     *(_DWORD *)(a1 + 12048) = v17;
/* line: 102, address: 0x607ab130 */     *(_DWORD *)(a1 + 160) = sub_60773F3C(a1, v17);
/* line: 103, address: 0x607ab13c */     *v8 = 0;
/* line: 104, address: 0x607ab14c */     sub_607948E8(a1 + 11356, 33);
/* line: 105, address: 0x607ab164 */     return sub_60793114(*(_DWORD *)(a1 + 11360));
/* line: 106 */   }
/* line: 107, address: 0x607ab024 */   if ( !v7 )
/* line: 108 */   {
/* line: 109, address: 0x607ab03c */     if ( result && sub_6078663C(a1 + 688) == 1 )
/* line: 110 */     {
/* line: 111, address: 0x607ab048 */       if ( (*(_BYTE *)(a1 + 6902) & 4) != 0 )
/* line: 112 */       {
/* line: 113, address: 0x607ab250 */         *(_DWORD *)(a1 + 124) = *(_DWORD *)(20 * (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 152))(a1) + 0xB0BE6C);
/* line: 114 */       }
/* line: 115 */       else
/* line: 116 */       {
/* line: 117, address: 0x607ab05c */         (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 1120))(a1, 1);
/* line: 118, address: 0x607ab064 */         sub_6076FE18(a1);
/* line: 119 */       }
/* line: 120, address: 0x607ab258 */       sub_607AFBB0(a1);
/* line: 121 */     }
/* line: 122, address: 0x607ab270 */     result = sub_60793DA0(*(_DWORD *)(a1 + 11360));
/* line: 123, address: 0x607ab278 */     if ( result == 1 )
/* line: 124 */     {
/* line: 125, address: 0x607ab284 */       sub_607AABA0(a1, 0);
/* line: 126, address: 0x607ab28c */       *v8 = 1;
/* line: 127, address: 0x607ab294 */       result = *(_DWORD *)(a1 + 1224) & 0xFFFBFFFF;
/* line: 128, address: 0x607ab298 */       *(_DWORD *)(a1 + 1224) = result;
/* line: 129 */     }
/* line: 130 */   }
/* line: 131, address: 0x607ab2a0 */   return result;
/* line: 132 */ }