#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60464FE4(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60464FE4(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60464FE4(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60464FE4(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60464FE4(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60464FE4(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_60464FE4(int a1);
/* line: 0, address: 0x60464fe4 */ int __fastcall sub_60464FE4(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r0
/* line: 3 */   _DWORD *v3; // r1
/* line: 4 */   int v4; // r0
/* line: 5 */   int v5; // r2
/* line: 6 */   unsigned int v6; // r0
/* line: 7 */   float v7; // s18
/* line: 8 */   float v8; // s0
/* line: 9 */   float v9; // s20
/* line: 10 */   float v10; // s16
/* line: 11 */   float v11; // s22
/* line: 12 */   float v12; // s26
/* line: 13 */   float v13; // s24
/* line: 14 */   int v14; // r5
/* line: 15 */   __int16 v15; // r0
/* line: 16 */ 
/* line: 17, address: 0x60464ffc */   v3 = (_DWORD *)(a1 + 6232);
/* line: 18, address: 0x60464ffc */   v2 = *(_DWORD *)(a1 + 6232);
/* line: 19, address: 0x60465004 */   if ( v2 )
/* line: 20 */   {
/* line: 21, address: 0x60465004 */     v4 = v2 - 1;
/* line: 22, address: 0x60465008 */     *v3 = v4;
/* line: 23 */   }
/* line: 24 */   else
/* line: 25 */   {
/* line: 26, address: 0x60465010 */     v4 = 0;
/* line: 27 */   }
/* line: 28, address: 0x60465014 */   v5 = *(_DWORD *)(a1 + 6208);
/* line: 29, address: 0x60465034 */   if ( v5 != -1 && v5 == *(char *)(a1 + 6250) && v4 )
/* line: 30, address: 0x6046503c */     *(_DWORD *)(a1 + 6208) = -1;
/* line: 31 */   else
/* line: 32, address: 0x60465050 */     (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 224))(a1);
/* line: 33, address: 0x60465058 */   CollisionActor__handleGravity((CollisionActor *)a1);
/* line: 34, address: 0x60465064 */   v6 = sub_6014C4A4(a1 + 648);
/* line: 35, address: 0x60465088 */   v7 = *(float *)(a1 + 120);
/* line: 36, address: 0x604650a8 */   v8 = (float)(v6 & 0xFFFFFF) * 0.000000059605;
/* line: 37, address: 0x604650b0 */   v9 = *(float *)(((v6 >> 20) & 0xFF0) + 0xB3A48C) + (float)(v8 * *(float *)(((v6 >> 20) & 0xFF0) + 0xB3A490));
/* line: 38, address: 0x604650b4 */   v10 = *(float *)(((v6 >> 20) & 0xFF0) + 0xB3A484) + (float)(*(float *)(((v6 >> 20) & 0xFF0) + 0xB3A488) * v8);
/* line: 39, address: 0x604650c0 */   if ( *(_BYTE *)(a1 + 6054) || *(_BYTE *)(a1 + 6053) )
/* line: 40, address: 0x604650d0 */     v7 = v7 * 0.5;
/* line: 41, address: 0x604650dc */   v11 = *(float *)(a1 + 124);
/* line: 42, address: 0x604650e8 */   v12 = *(float *)(a1 + 6024);
/* line: 43, address: 0x604650ec */   v13 = *(float *)(a1 + 6028);
/* line: 44, address: 0x604650f4 */   sub_600037A0(a1);
/* line: 45, address: 0x60465120 */   *(float *)(a1 + 108) = *(float *)(a1 + 108) + (float)((float)(v12 + (float)(v9 * v7)) + *(float *)(a1 + 6000));
/* line: 46, address: 0x6046512c */   *(float *)(a1 + 112) = (float)((float)(v11 + (float)(v10 * v7)) + v13) + *(float *)(a1 + 112);
/* line: 47, address: 0x60465130 */   CollisionMgr_process((unsigned __int8 *)(a1 + 648));
/* line: 48, address: 0x60465138 */   v14 = 0;
/* line: 49, address: 0x60465140 */   if ( (*(_BYTE *)(a1 + 2872) & 1) != 0 )
/* line: 50 */   {
/* line: 51, address: 0x60465148 */     if ( !*(_DWORD *)(a1 + 6192) )
/* line: 52, address: 0x60465154 */       sub_60462A58(a1);
/* line: 53, address: 0x60465164 */     v15 = *(_WORD *)(a1 + 6252) - 1;
/* line: 54, address: 0x60465168 */     *(_WORD *)(a1 + 6252) = v15;
/* line: 55, address: 0x60465174 */     if ( v15 < 1 )
/* line: 56 */     {
/* line: 57, address: 0x6046519c */       *(_DWORD *)(a1 + 120) = 0;
/* line: 58, address: 0x604651a0 */       *(_DWORD *)(a1 + 124) = 0;
/* line: 59, address: 0x604651a4 */       *(_DWORD *)(a1 + 6172) = 0;
/* line: 60, address: 0x604651b4 */       (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 208))(a1);
/* line: 61, address: 0x604651c4 */       (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 252))(a1);
/* line: 62 */     }
/* line: 63 */     else
/* line: 64 */     {
/* line: 65, address: 0x60465180 */       *(_DWORD *)(a1 + 124) = 1069547520;
/* line: 66, address: 0x6046518c */       *(float *)(a1 + 120) = *(float *)(a1 + 120) * 0.8;
/* line: 67 */     }
/* line: 68, address: 0x604651c8 */     v14 = 1;
/* line: 69 */   }
/* line: 70, address: 0x604651d8 */   if ( sub_6000346C(a1) == 1 )
/* line: 71 */   {
/* line: 72, address: 0x604651e4 */     *(_DWORD *)(a1 + 80) = *(unsigned __int8 *)(a1 + 80) ^ 1;
/* line: 73, address: 0x604651f0 */     *(float *)(a1 + 120) = -*(float *)(a1 + 120);
/* line: 74 */   }
/* line: 75, address: 0x604651f8 */   *(_DWORD *)(a1 + 6192) = v14;
/* line: 76, address: 0x60465200 */   return 6192;
/* line: 77 */ }