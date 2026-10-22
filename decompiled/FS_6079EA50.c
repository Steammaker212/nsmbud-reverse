#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6079EA50(unsigned __int8 *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6079EA50(unsigned __int8 *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6079EA50(unsigned __int8 *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6079EA50(unsigned __int8 *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6079EA50(unsigned __int8 *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6079EA50(unsigned __int8 *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6079EA50(unsigned __int8 *a1);
/* line: 0, address: 0x6079ea50 */ int __fastcall sub_6079EA50(unsigned __int8 *a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r5
/* line: 3 */   int (__fastcall ***v3)(_DWORD, int); // r6
/* line: 4 */   int v4; // r1
/* line: 5 */   _BOOL4 v5; // r0
/* line: 6 */   bool v6; // zf
/* line: 7 */   int v7; // r0
/* line: 8 */   int v8; // r0
/* line: 9 */   int v9; // r6
/* line: 10 */   int v10; // r9
/* line: 11 */   int (__fastcall ***v11)(_DWORD, int); // r7
/* line: 12 */   int v12; // r0
/* line: 13 */ 
/* line: 14, address: 0x6079ea5c */   v2 = 0;
/* line: 15, address: 0x6079ea70 */   *((_DWORD *)a1 + 305) &= 0xFF3FFFFF;
/* line: 16, address: 0x6079ea7c */   *((_DWORD *)a1 + 307) |= 0x400u;
/* line: 17, address: 0x6079ea88 */   *((_DWORD *)a1 + 304) |= 0x2000u;
/* line: 18, address: 0x6079ea90 */   *((_DWORD *)a1 + 3039) = 0;
/* line: 19, address: 0x6079eab0 */   v3 = (int (__fastcall ***)(_DWORD, int))ActorMgrRelated_getById(MEMORY[0xC7B400] + 27168);
/* line: 20, address: 0x6079ead0 */   if ( _cxa_guard_acquire_0(13087604) )
/* line: 21 */   {
/* line: 22, address: 0x6079eaf0 */     MEMORY[0xC7B370] = 12320944;
/* line: 23, address: 0x6079eafc */     _cxa_guard_release_0(13087604);
/* line: 24 */   }
/* line: 25, address: 0x6079eb04 */   if ( v3 )
/* line: 26 */   {
/* line: 27, address: 0x6079eb20 */     v2 = (**v3)(v3, 13087600);
/* line: 28, address: 0x6079eb28 */     if ( v2 )
/* line: 29, address: 0x6079eb28 */       v2 = (int)v3;
/* line: 30 */   }
/* line: 31, address: 0x6079eb3c */   (*(void (__fastcall **)(unsigned __int8 *, int))(*(_DWORD *)a1 + 1212))(a1, v2);
/* line: 32, address: 0x6079eb4c */   if ( v2 )
/* line: 33, address: 0x6079eb50 */     v4 = 20;
/* line: 34 */   else
/* line: 35, address: 0x6079eb4c */     v4 = 18;
/* line: 36, address: 0x6079eb54 */   sub_60773630((int)a1, v4, 0);
/* line: 37, address: 0x6079eb6c */   sub_607734E8(a1, (int)"SE_PLY_OTHER_ON", 0, 0);
/* line: 38, address: 0x6079eb7c */   sub_607946B0(*((_DWORD *)a1 + 2840));
/* line: 39, address: 0x6079eb84 */   if ( v2 )
/* line: 40, address: 0x6079eb94 */     *(_DWORD *)(*((_DWORD *)a1 + 2840) + 40) = *(_DWORD *)(*(_DWORD *)(v2 + 648) + 4);
/* line: 41, address: 0x6079eba0 */   if ( sub_6075EDF8((int)a1) )
/* line: 42, address: 0x6079eba8 */     goto LABEL_16;
/* line: 43, address: 0x6079ebbc */   v5 = sub_6075EE0C((int)a1);
/* line: 44, address: 0x6079ebc0 */   v6 = v5;
/* line: 45, address: 0x6079ebc4 */   if ( v5 )
/* line: 46, address: 0x6079ebc8 */     v6 = *((_DWORD *)a1 + 330) == 9;
/* line: 47, address: 0x6079ebcc */   if ( v6 )
/* line: 48 */ LABEL_16:
/* line: 49, address: 0x6079ebf4 */     v7 = (int)(a1 + 11356);
/* line: 50 */   else
/* line: 51, address: 0x6079ebd4 */     v7 = (int)(a1 + 11356);
/* line: 52, address: 0x6079ebfc */   sub_60794954(v7, 114);
/* line: 53, address: 0x6079ec20 */   AreaRumbleMgr_rumbleForPlayer(MEMORY[0xC99E3C], (char)a1[84], 8, 0, 0);
/* line: 54, address: 0x6079ec2c */   v8 = sub_6014B69C(a1 + 1328);
/* line: 55, address: 0x6079ec30 */   v9 = v8;
/* line: 56, address: 0x6079ec38 */   if ( v8 )
/* line: 57 */   {
/* line: 58, address: 0x6079ec44 */     v10 = *(_DWORD *)(v8 + 144);
/* line: 59, address: 0x6079ec5c */     v11 = (int (__fastcall ***)(_DWORD, int))ActorMgrRelated_getById(MEMORY[0xC7B400] + 27168);
/* line: 60, address: 0x6079ec7c */     if ( _cxa_guard_acquire_0(13169556) )
/* line: 61 */     {
/* line: 62, address: 0x6079ec9c */       MEMORY[0xC8F390] = 12320992;
/* line: 63, address: 0x6079eca8 */       _cxa_guard_release_0(13169556);
/* line: 64 */     }
/* line: 65, address: 0x6079ecb0 */     if ( v11 )
/* line: 66 */     {
/* line: 67, address: 0x6079ecc8 */       v12 = (**v11)(v11, 13169552);
/* line: 68, address: 0x6079ecd0 */       if ( v12 )
/* line: 69, address: 0x6079ecd0 */         v12 = (int)v11;
/* line: 70, address: 0x6079ecd8 */       if ( v10 == v12 )
/* line: 71, address: 0x6079ecd8 */         goto LABEL_26;
/* line: 72 */     }
/* line: 73, address: 0x6079ece8 */     else if ( !v10 )
/* line: 74 */     {
/* line: 75 */ LABEL_26:
/* line: 76, address: 0x6079ecec */       sub_6016024C(v9, a1 + 1328);
/* line: 77 */     }
/* line: 78 */   }
/* line: 79, address: 0x6079ecf8 */   *((_DWORD *)a1 + 22) = 0;
/* line: 80, address: 0x6079ed0c */   *((_DWORD *)a1 + 31) = 1050253722;
/* line: 81, address: 0x6079ed14 */   *((_DWORD *)a1 + 3025) = 655360000;
/* line: 82, address: 0x6079ed1c */   *((_DWORD *)a1 + 3041) = 0;
/* line: 83, address: 0x6079ed24 */   return 12164;
/* line: 84 */ }