#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall CollisionMgr_process(unsigned __int8 *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall CollisionMgr_process(unsigned __int8 *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall CollisionMgr_process(unsigned __int8 *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall CollisionMgr_process(unsigned __int8 *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall CollisionMgr_process(unsigned __int8 *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall CollisionMgr_process(unsigned __int8 *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall CollisionMgr_process(unsigned __int8 *a1);
/* line: 0, address: 0x6014c6e4 */ int __fastcall CollisionMgr_process(unsigned __int8 *a1)
/* line: 1 */ {
/* line: 2 */   int result; // r0
/* line: 3 */   int v3; // r2
/* line: 4 */   int v4; // r1
/* line: 5 */   unsigned __int8 *v5; // r0
/* line: 6 */   int v6; // r2
/* line: 7 */   bool v7; // cc
/* line: 8 */   float *v8; // r1
/* line: 9 */   int v9; // r0
/* line: 10 */   float v10; // s0
/* line: 11 */   float v11; // s2
/* line: 12 */   int v12; // r0
/* line: 13 */   int v13; // r2
/* line: 14 */   unsigned __int8 *v14; // r1
/* line: 15 */   int v15; // r0
/* line: 16 */   bool v16; // cc
/* line: 17 */   int v17; // r0
/* line: 18 */   float v18; // s0
/* line: 19 */   float v19; // s2
/* line: 20 */   int v20; // r2
/* line: 21 */   unsigned __int8 *v21; // r1
/* line: 22 */   int v22; // r0
/* line: 23 */   bool v23; // cc
/* line: 24 */   int v24; // r0
/* line: 25 */   float v25; // s2
/* line: 26 */   float v26; // s0
/* line: 27 */   float *v27; // r1
/* line: 28 */   float *v28; // r2
/* line: 29 */   int v29; // r9
/* line: 30 */   unsigned __int8 *v30; // r8
/* line: 31 */   float v31; // s18
/* line: 32 */   float v32; // s20
/* line: 33 */   _BOOL4 v33; // r5
/* line: 34 */   _BOOL4 v34; // r6
/* line: 35 */   float v35; // s16
/* line: 36 */   int v36; // r3
/* line: 37 */   unsigned __int8 *v37; // r7
/* line: 38 */   int v38; // r7
/* line: 39 */   int v39; // lr
/* line: 40 */   int v40; // r7
/* line: 41 */   int v41; // r12
/* line: 42 */   signed int v42; // lr
/* line: 43 */   int v43; // r3
/* line: 44 */   float v44; // s0
/* line: 45 */   int *v45; // r0
/* line: 46 */   int v46; // r1
/* line: 47 */   int v47; // r0
/* line: 48 */   int v48; // r0
/* line: 49 */   int v49; // r1
/* line: 50 */   int v50; // r1
/* line: 51 */   int v51; // r1
/* line: 52 */   bool v52; // zf
/* line: 53 */   int v53; // r2
/* line: 54 */   int v54; // r1
/* line: 55 */   _BOOL4 v55; // r2
/* line: 56 */   int v56; // r2
/* line: 57 */   int v57; // r2
/* line: 58 */   int v58; // r0
/* line: 59 */   bool v59; // zf
/* line: 60 */   int v60; // r1
/* line: 61 */   bool v61; // zf
/* line: 62 */   bool v62; // zf
/* line: 63 */   int v63; // r1
/* line: 64 */   unsigned __int8 *v64; // r6
/* line: 65 */   unsigned __int8 *v65; // r5
/* line: 66 */   bool v66; // zf
/* line: 67 */   int v67; // r9
/* line: 68 */   int v68; // r6
/* line: 69 */   int v69; // r1
/* line: 70 */   bool v70; // zf
/* line: 71 */   bool v71; // zf
/* line: 72 */   int v72; // r5
/* line: 73 */   int v73; // r11
/* line: 74 */   int v74; // r7
/* line: 75 */   bool v75; // zf
/* line: 76 */   bool v76; // zf
/* line: 77 */   int v77; // r6
/* line: 78 */   int v78; // r1
/* line: 79 */   int v79; // r0
/* line: 80 */   int v80; // r1
/* line: 81 */   int v81; // r3
/* line: 82 */   bool v82; // vf
/* line: 83 */   int v83; // r0
/* line: 84 */   float v84; // s0
/* line: 85 */   _DWORD v85[2]; // [sp+0h] [bp-20h] BYREF
/* line: 86 */   __int16 v86; // [sp+8h] [bp-18h] BYREF
/* line: 87 */   char v87; // [sp+Ah] [bp-16h]
/* line: 88 */   char v88; // [sp+Bh] [bp-15h]
/* line: 89 */   int v89; // [sp+Ch] [bp-14h]
/* line: 90 */   unsigned __int8 *v90; // [sp+10h] [bp-10h]
/* line: 91 */   _DWORD v91[2]; // [sp+18h] [bp-8h] BYREF
/* line: 92 */ 
/* line: 93, address: 0x6014c6f8 */   result = a1[2337];
/* line: 94, address: 0x6014c700 */   if ( !result )
/* line: 95, address: 0x6014c700 */     return result;
/* line: 96, address: 0x6014c708 */   sub_6014D020(a1);
/* line: 97, address: 0x6014c738 */   if ( !a1[2352] && !a1[2351] && !a1[2349] && !a1[2350] )
/* line: 98, address: 0x6014cac8 */     return (*(int (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 20))(a1);
/* line: 99, address: 0x6014c748 */   (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 20))(a1);
/* line: 100, address: 0x6014c750 */   sub_6014BF68(a1);
/* line: 101, address: 0x6014c760 */   (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 40))(a1);
/* line: 102, address: 0x6014c768 */   sub_6014D680(a1);
/* line: 103, address: 0x6014c778 */   (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 44))(a1);
/* line: 104, address: 0x6014c780 */   sub_6014D97C(a1);
/* line: 105, address: 0x6014c784 */   v3 = *((_DWORD *)a1 + 556);
/* line: 106, address: 0x6014c78c */   if ( (v3 & 1) != 0 )
/* line: 107 */   {
/* line: 108, address: 0x6014c790 */     v4 = *((_DWORD *)a1 + 643);
/* line: 109, address: 0x6014c798 */     if ( v4 <= 5 )
/* line: 110 */     {
/* line: 111, address: 0x6014c7a0 */       v5 = &a1[56 * v4];
/* line: 112, address: 0x6014c7a4 */       if ( v5[3603] )
/* line: 113 */       {
/* line: 114, address: 0x6014c7b8 */         if ( (v3 & 0x10400) != 0x400 )
/* line: 115, address: 0x6014c7b8 */           goto LABEL_13;
/* line: 116, address: 0x6014c7bc */         v6 = *((_DWORD *)a1 + 642);
/* line: 117, address: 0x6014c7c0 */         v7 = v6 < 5;
/* line: 118, address: 0x6014c7c4 */         if ( v6 <= 5 )
/* line: 119, address: 0x6014c7c4 */           v7 = v4 < v6;
/* line: 120, address: 0x6014ca6c */         if ( v7 && a1[56 * v6 + 3267] )
/* line: 121 */         {
/* line: 122, address: 0x6014ca78 */           v9 = *((_DWORD *)a1 + 551);
/* line: 123, address: 0x6014ca7c */           v11 = 0.0;
/* line: 124, address: 0x6014ca80 */           v10 = *(float *)(v9 + 4);
/* line: 125 */         }
/* line: 126 */         else
/* line: 127 */         {
/* line: 128 */ LABEL_13:
/* line: 129, address: 0x6014c7d0 */           v8 = (float *)(v5 + 3624);
/* line: 130, address: 0x6014c7d4 */           v9 = *((_DWORD *)a1 + 551);
/* line: 131, address: 0x6014c7dc */           v10 = *(float *)(v9 + 4);
/* line: 132, address: 0x6014c7e0 */           v11 = *v8 - v10;
/* line: 133 */         }
/* line: 134, address: 0x6014c7e8 */         *(float *)(v9 + 4) = v10 + v11;
/* line: 135 */       }
/* line: 136 */     }
/* line: 137 */   }
/* line: 138, address: 0x6014c7f8 */   (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 48))(a1);
/* line: 139, address: 0x6014c800 */   sub_6014DDD0(a1);
/* line: 140, address: 0x6014c804 */   v12 = *((_DWORD *)a1 + 556);
/* line: 141, address: 0x6014c810 */   if ( (v12 & 0x10400) == 0x400 )
/* line: 142 */   {
/* line: 143, address: 0x6014c814 */     v13 = *((_DWORD *)a1 + 642);
/* line: 144, address: 0x6014c81c */     if ( v13 <= 5 )
/* line: 145 */     {
/* line: 146, address: 0x6014c824 */       v14 = &a1[56 * v13];
/* line: 147, address: 0x6014c828 */       if ( v14[3267] )
/* line: 148 */       {
/* line: 149, address: 0x6014c838 */         if ( (v12 & 1) == 0 )
/* line: 150, address: 0x6014c838 */           goto LABEL_22;
/* line: 151, address: 0x6014c83c */         v15 = *((_DWORD *)a1 + 643);
/* line: 152, address: 0x6014c840 */         v16 = v15 <= 5;
/* line: 153, address: 0x6014c844 */         if ( v15 <= 5 )
/* line: 154, address: 0x6014c844 */           v16 = v13 <= v15;
/* line: 155, address: 0x6014ca90 */         if ( v16 && a1[56 * v15 + 3603] )
/* line: 156 */         {
/* line: 157, address: 0x6014ca9c */           v17 = *((_DWORD *)a1 + 551);
/* line: 158, address: 0x6014caa0 */           v19 = 0.0;
/* line: 159, address: 0x6014caa4 */           v18 = *(float *)(v17 + 4);
/* line: 160 */         }
/* line: 161 */         else
/* line: 162 */         {
/* line: 163 */ LABEL_22:
/* line: 164, address: 0x6014c854 */           v17 = *((_DWORD *)a1 + 551);
/* line: 165, address: 0x6014c85c */           v18 = *(float *)(v17 + 4);
/* line: 166, address: 0x6014c860 */           v19 = *((float *)v14 + 822) - v18;
/* line: 167 */         }
/* line: 168, address: 0x6014c868 */         *(float *)(v17 + 4) = v18 + v19;
/* line: 169, address: 0x6014c86c */         v12 = *((_DWORD *)a1 + 556);
/* line: 170 */       }
/* line: 171 */     }
/* line: 172 */   }
/* line: 173, address: 0x6014c880 */   if ( (v12 & 0x10401) == 0x400 )
/* line: 174 */   {
/* line: 175, address: 0x6014c890 */     (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)a1 + 44))(a1);
/* line: 176, address: 0x6014c898 */     sub_6014D97C(a1);
/* line: 177, address: 0x6014c89c */     v12 = *((_DWORD *)a1 + 556);
/* line: 178, address: 0x6014c8a4 */     if ( (v12 & 1) != 0 )
/* line: 179 */     {
/* line: 180, address: 0x6014c8a8 */       v20 = *((_DWORD *)a1 + 643);
/* line: 181, address: 0x6014c8b0 */       if ( v20 <= 5 )
/* line: 182 */       {
/* line: 183, address: 0x6014c8b8 */         v21 = &a1[56 * v20];
/* line: 184, address: 0x6014c8bc */         if ( v21[3603] )
/* line: 185 */         {
/* line: 186, address: 0x6014c8d0 */           if ( (v12 & 0x10400) != 0x400 )
/* line: 187, address: 0x6014c8d0 */             goto LABEL_35;
/* line: 188, address: 0x6014c8d4 */           v22 = *((_DWORD *)a1 + 642);
/* line: 189, address: 0x6014c8d8 */           v23 = v22 < 5;
/* line: 190, address: 0x6014c8dc */           if ( v22 <= 5 )
/* line: 191, address: 0x6014c8dc */             v23 = v20 < v22;
/* line: 192, address: 0x6014c8ec */           if ( v23 && a1[56 * v22 + 3267] )
/* line: 193 */           {
/* line: 194, address: 0x6014c8f8 */             v24 = *((_DWORD *)a1 + 551);
/* line: 195, address: 0x6014c8fc */             v25 = 0.0;
/* line: 196, address: 0x6014c900 */             v26 = *(float *)(v24 + 4);
/* line: 197 */           }
/* line: 198 */           else
/* line: 199 */           {
/* line: 200 */ LABEL_35:
/* line: 201, address: 0x6014c910 */             v24 = *((_DWORD *)a1 + 551);
/* line: 202, address: 0x6014c918 */             v26 = *(float *)(v24 + 4);
/* line: 203, address: 0x6014c91c */             v25 = *((float *)v21 + 906) - v26;
/* line: 204 */           }
/* line: 205, address: 0x6014c924 */           *(float *)(v24 + 4) = v26 + v25;
/* line: 206, address: 0x6014c928 */           v12 = *((_DWORD *)a1 + 556);
/* line: 207 */         }
/* line: 208 */       }
/* line: 209 */     }
/* line: 210 */   }
/* line: 211, address: 0x6014c930 */   v27 = *((float **)a1 + 551);
/* line: 212, address: 0x6014c934 */   v28 = *((float **)a1 + 552);
/* line: 213, address: 0x6014c93c */   v29 = 0;
/* line: 214, address: 0x6014c940 */   v30 = 0;
/* line: 215, address: 0x6014c950 */   v31 = *v28;
/* line: 216, address: 0x6014c954 */   v32 = *v27;
/* line: 217, address: 0x6014c964 */   v33 = *v27 < *v28;
/* line: 218, address: 0x6014c96c */   v34 = *v27 >= *v28;
/* line: 219, address: 0x6014c970 */   v35 = (float)(*(float *)(*((_DWORD *)a1 + 549) + 108) - *(float *)(*((_DWORD *)a1 + 549) + 584))
/* line: 220 */       - *(float *)(*((_DWORD *)a1 + 549) + 180);
/* line: 221, address: 0x6014c974 */   if ( (v12 & 1) == 0 )
/* line: 222, address: 0x6014c974 */     goto LABEL_59;
/* line: 223, address: 0x6014c978 */   v36 = *((_DWORD *)a1 + 643);
/* line: 224, address: 0x6014c97c */   v29 = 0;
/* line: 225, address: 0x6014c980 */   v30 = 0;
/* line: 226, address: 0x6014c988 */   if ( v36 > 5 )
/* line: 227, address: 0x6014c988 */     goto LABEL_59;
/* line: 228, address: 0x6014c990 */   v29 = 1;
/* line: 229, address: 0x6014c994 */   v37 = &a1[56 * v36];
/* line: 230, address: 0x6014c99c */   v30 = v37 + 3600;
/* line: 231, address: 0x6014c998 */   if ( !v37[3603] )
/* line: 232, address: 0x6014c998 */     goto LABEL_59;
/* line: 233, address: 0x6014c9b8 */   if ( (unsigned int)*((unsigned __int16 *)v37 + 1820) - 37 < 2 )
/* line: 234, address: 0x6014c9b8 */     goto LABEL_59;
/* line: 235, address: 0x6014c9c4 */   if ( (v12 & 0x10400) != 0x400 )
/* line: 236, address: 0x6014c9c4 */     goto LABEL_59;
/* line: 237, address: 0x6014c9c8 */   v38 = *((_DWORD *)a1 + 642);
/* line: 238, address: 0x6014c9d0 */   if ( v38 > 5 )
/* line: 239, address: 0x6014c9d0 */     goto LABEL_59;
/* line: 240, address: 0x6014c9dc */   if ( !a1[56 * v38 + 3267] )
/* line: 241, address: 0x6014c9dc */     goto LABEL_59;
/* line: 242, address: 0x6014c9f0 */   v39 = (int)&a1[56 * v36 + 2592];
/* line: 243, address: 0x6014c9f4 */   v40 = (int)&a1[56 * v38 + 2592];
/* line: 244, address: 0x6014ca0c */   if ( *(float *)(v40 + 696) >= *(float *)(v39 + 1032) )
/* line: 245, address: 0x6014ca0c */     goto LABEL_59;
/* line: 246, address: 0x6014ca14 */   v41 = *(_DWORD *)(v39 + 1016);
/* line: 247, address: 0x6014ca18 */   v42 = *(_DWORD *)(v40 + 680) ^ 0x80000000;
/* line: 248, address: 0x6014ca1c */   v43 = v41 - v42;
/* line: 249, address: 0x6014ca24 */   if ( v41 - v42 >= 0 )
/* line: 250, address: 0x6014ca24 */     goto LABEL_48;
/* line: 251, address: 0x6014ca28 */   if ( v43 != 0x80000000 )
/* line: 252 */   {
/* line: 253, address: 0x6014ca30 */     v43 = v42 - v41;
/* line: 254 */ LABEL_48:
/* line: 255, address: 0x6014ca38 */     if ( !v43 )
/* line: 256, address: 0x6014ca38 */       goto LABEL_59;
/* line: 257 */   }
/* line: 258, address: 0x6014ca40 */   if ( v41 > v42 )
/* line: 259 */   {
/* line: 260, address: 0x6014ca48 */     *((_DWORD *)a1 + 556) = v12 | 0x400000;
/* line: 261, address: 0x6014ca4c */     v44 = *v27;
/* line: 262, address: 0x6014ca5c */     if ( *v27 <= *v28 )
/* line: 263, address: 0x6014ca5c */       goto LABEL_59;
/* line: 264, address: 0x6014ca5c */     goto LABEL_58;
/* line: 265 */   }
/* line: 266, address: 0x6014cad4 */   *((_DWORD *)a1 + 556) = v12 | 0x800000;
/* line: 267, address: 0x6014cad8 */   v44 = *v27;
/* line: 268, address: 0x6014cae8 */   if ( *v27 < *v28 )
/* line: 269 */ LABEL_58:
/* line: 270, address: 0x6014caec */     *v27 = v44 - v35;
/* line: 271 */ LABEL_59:
/* line: 272, address: 0x6014caf4 */   v45 = *((int **)a1 + 551);
/* line: 273, address: 0x6014caf8 */   v46 = *v45;
/* line: 274, address: 0x6014cafc */   v47 = v45[1];
/* line: 275, address: 0x6014cb00 */   v91[0] = v46;
/* line: 276, address: 0x6014cb04 */   v91[1] = v47;
/* line: 277, address: 0x6014cb10 */   *((_DWORD *)a1 + 583) = v34;
/* line: 278, address: 0x6014cb14 */   sub_6014DEE4(a1, v33);
/* line: 279, address: 0x6014cb28 */   (*(void (__fastcall **)(unsigned __int8 *, _BOOL4))(*(_DWORD *)a1 + 52))(a1, v33);
/* line: 280, address: 0x6014cb34 */   sub_6014E8B8(a1, v33);
/* line: 281, address: 0x6014cb48 */   sub_6014EB4C(a1, v33, !v33);
/* line: 282, address: 0x6014cb54 */   sub_6014DEE4(a1, !v33);
/* line: 283, address: 0x6014cb68 */   (*(void (__fastcall **)(unsigned __int8 *, bool))(*(_DWORD *)a1 + 52))(a1, !v33);
/* line: 284, address: 0x6014cb74 */   sub_6014E8B8(a1, !v33);
/* line: 285, address: 0x6014cb88 */   sub_6014EB4C(a1, !v33, v33);
/* line: 286, address: 0x6014cb90 */   v48 = *((_DWORD *)a1 + 556);
/* line: 287, address: 0x6014cb94 */   v49 = 0x40000;
/* line: 288, address: 0x6014cb9c */   if ( v32 < v31 )
/* line: 289, address: 0x6014cb9c */     v49 = 0x80000;
/* line: 290, address: 0x6014cba4 */   if ( (v48 & v49) == 0 )
/* line: 291 */   {
/* line: 292, address: 0x6014cbac */     v50 = 0x400000;
/* line: 293, address: 0x6014cbb4 */     if ( v32 < v31 )
/* line: 294, address: 0x6014cbb4 */       v50 = 0x800000;
/* line: 295, address: 0x6014cbbc */     if ( (v48 & v50) == 0 )
/* line: 296, address: 0x6014cbbc */       goto LABEL_68;
/* line: 297 */   }
/* line: 298, address: 0x6014cbc4 */   v51 = 0x10000000;
/* line: 299, address: 0x6014cbcc */   if ( v32 < v31 )
/* line: 300, address: 0x6014cbcc */     v51 = 0x20000000;
/* line: 301, address: 0x6014cbd4 */   if ( (v48 & v51) != 0 )
/* line: 302 */   {
/* line: 303 */ LABEL_68:
/* line: 304, address: 0x6014cbe0 */     v52 = (v48 & (1 << (v34 | 0x12))) == 0;
/* line: 305, address: 0x6014cbe4 */     if ( (v48 & (1 << (v34 | 0x12))) == 0 )
/* line: 306, address: 0x6014cbe8 */       v52 = (v48 & (1 << (v34 | 0x16))) == 0;
/* line: 307, address: 0x6014cbf8 */     if ( !v52 && (v48 & (1 << (v34 | 0x1C))) == 0 )
/* line: 308 */     {
/* line: 309, address: 0x6014cc04 */       sub_6014DEE4(a1, v33);
/* line: 310, address: 0x6014cc18 */       (*(void (__fastcall **)(unsigned __int8 *, _BOOL4))(*(_DWORD *)a1 + 52))(a1, v33);
/* line: 311, address: 0x6014cc24 */       sub_6014E8B8(a1, v33);
/* line: 312, address: 0x6014cc38 */       sub_6014EB4C(a1, v33, !v33);
/* line: 313, address: 0x6014cc3c */       v48 = *((_DWORD *)a1 + 556);
/* line: 314 */     }
/* line: 315 */   }
/* line: 316, address: 0x6014cc40 */   v53 = v48 & 0x10000000;
/* line: 317, address: 0x6014cc84 */   if ( ((v48 & 0x440000) != 0 && !v53 || (v48 & 0x880000) != 0 && (v48 & 0x20000000) == 0)
/* line: 318 */     && v48 & 1 | ((v48 & 0x10400) == 1024)
/* line: 319 */     && (v48 & 0xC00000) == 0 )
/* line: 320 */   {
/* line: 321, address: 0x6014cc8c */     v54 = 0;
/* line: 322, address: 0x6014cc90 */     v55 = v53 != 0;
/* line: 323, address: 0x6014cca0 */     if ( (v48 & 0x40000) != 0 && !v55 )
/* line: 324 */     {
/* line: 325, address: 0x6014cca4 */       v56 = *((_DWORD *)a1 + 640);
/* line: 326, address: 0x6014ccb4 */       v54 = 0;
/* line: 327, address: 0x6014ccb8 */       if ( v56 < 6 )
/* line: 328, address: 0x6014ccb8 */         v54 = (int)&a1[56 * v56 + 2592];
/* line: 329 */     }
/* line: 330, address: 0x6014ccc8 */     if ( (v48 & 0x880000) != 0 && (v48 & 0x20000000) == 0 )
/* line: 331 */     {
/* line: 332, address: 0x6014cccc */       v57 = *((_DWORD *)a1 + 641);
/* line: 333, address: 0x6014ccdc */       v58 = 0;
/* line: 334, address: 0x6014cce0 */       if ( v57 < 6 )
/* line: 335, address: 0x6014cce0 */         v58 = (int)&a1[56 * v57 + 2928];
/* line: 336, address: 0x6014ccf0 */       if ( v54 && v57 <= 5 )
/* line: 337 */       {
/* line: 338, address: 0x6014ccf8 */         v59 = *(_BYTE *)(v54 + 3) == 0;
/* line: 339, address: 0x6014ccf4 */         if ( *(_BYTE *)(v54 + 3) )
/* line: 340, address: 0x6014cd00 */           v59 = *(_BYTE *)(v58 + 3) == 0;
/* line: 341, address: 0x6014cd10 */         if ( !v59 && *((_DWORD *)a1 + 640) == v57 )
/* line: 342 */         {
/* line: 343, address: 0x6014cd14 */           v60 = *(_DWORD *)(v54 + 8);
/* line: 344, address: 0x6014cd18 */           v61 = v60 == 0x40000000;
/* line: 345, address: 0x6014cd1c */           if ( v60 == 0x40000000 )
/* line: 346, address: 0x6014cd20 */             v61 = *(_DWORD *)(v58 + 8) == -1073741824;
/* line: 347, address: 0x6014cd24 */           if ( v61 )
/* line: 348, address: 0x6014cd34 */             **((_DWORD **)a1 + 551) = **((_DWORD **)a1 + 552);
/* line: 349 */         }
/* line: 350 */       }
/* line: 351 */     }
/* line: 352 */   }
/* line: 353, address: 0x6014cd40 */   result = sub_6014F130(a1, v91);
/* line: 354, address: 0x6014cd48 */   if ( v29 == 1 )
/* line: 355 */   {
/* line: 356, address: 0x6014cd4c */     result = v30[3];
/* line: 357, address: 0x6014cd50 */     v62 = result == 0;
/* line: 358, address: 0x6014cd4c */     if ( v30[3] )
/* line: 359 */     {
/* line: 360, address: 0x6014cd54 */       result = v30[2];
/* line: 361, address: 0x6014cd58 */       v62 = result == 0;
/* line: 362 */     }
/* line: 363, address: 0x6014cd5c */     if ( !v62 )
/* line: 364 */     {
/* line: 365, address: 0x6014cd64 */       result = *((_DWORD *)a1 + 556) & 0x10400;
/* line: 366, address: 0x6014cd6c */       if ( result == 1024 )
/* line: 367 */       {
/* line: 368, address: 0x6014cd70 */         v63 = *((_DWORD *)a1 + 642);
/* line: 369, address: 0x6014cd78 */         if ( v63 <= 5 )
/* line: 370 */         {
/* line: 371, address: 0x6014cd88 */           v64 = &a1[56 * v63];
/* line: 372, address: 0x6014cda0 */           result = ActorMgrRelated_getById(MEMORY[0xC7B400] + 27168);
/* line: 373, address: 0x6014cda8 */           if ( result )
/* line: 374 */           {
/* line: 375, address: 0x6014cdb0 */             v65 = v64 + 3296;
/* line: 376, address: 0x6014cdb0 */             result = *((_DWORD *)v64 + 824);
/* line: 377, address: 0x6014cdb4 */             v66 = result == 0;
/* line: 378, address: 0x6014cdb8 */             if ( result )
/* line: 379 */             {
/* line: 380, address: 0x6014cdb8 */               result = v64[3267];
/* line: 381, address: 0x6014cdbc */               v66 = result == 0;
/* line: 382 */             }
/* line: 383, address: 0x6014cdc0 */             if ( !v66 )
/* line: 384 */             {
/* line: 385, address: 0x6014cdc4 */               result = *((_DWORD *)a1 + 556);
/* line: 386, address: 0x6014cdc8 */               v67 = 0;
/* line: 387, address: 0x6014cdcc */               v68 = 0;
/* line: 388, address: 0x6014cdd4 */               if ( (result & 0x440000) != 0 )
/* line: 389 */               {
/* line: 390, address: 0x6014cddc */                 v68 = 0;
/* line: 391, address: 0x6014cde0 */                 if ( (result & 0x10000000) == 0 )
/* line: 392 */                 {
/* line: 393, address: 0x6014cde4 */                   v69 = *((_DWORD *)a1 + 640);
/* line: 394, address: 0x6014cde8 */                   v68 = 0;
/* line: 395, address: 0x6014cdf8 */                   if ( v69 < 6 )
/* line: 396, address: 0x6014cdf8 */                     v68 = (int)&a1[56 * v69 + 2592];
/* line: 397 */                 }
/* line: 398 */               }
/* line: 399, address: 0x6014ce00 */               if ( (result & 0x880000) != 0 )
/* line: 400 */               {
/* line: 401, address: 0x6014ce04 */                 result &= 0x20000000u;
/* line: 402, address: 0x6014ce08 */                 if ( !result )
/* line: 403 */                 {
/* line: 404, address: 0x6014ce0c */                   result = *((_DWORD *)a1 + 641);
/* line: 405, address: 0x6014ce10 */                   v67 = 0;
/* line: 406, address: 0x6014ce20 */                   if ( result < 6 )
/* line: 407, address: 0x6014ce20 */                     v67 = (int)&a1[56 * result + 2928];
/* line: 408 */                 }
/* line: 409 */               }
/* line: 410, address: 0x6014ce24 */               v70 = v68 == 0;
/* line: 411, address: 0x6014ce28 */               if ( v68 )
/* line: 412, address: 0x6014ce28 */                 v70 = v67 == 0;
/* line: 413, address: 0x6014ce2c */               if ( !v70 )
/* line: 414 */               {
/* line: 415, address: 0x6014ce30 */                 result = *(unsigned __int8 *)(v68 + 3);
/* line: 416, address: 0x6014ce34 */                 v71 = result == 0;
/* line: 417, address: 0x6014ce30 */                 if ( *(_BYTE *)(v68 + 3) )
/* line: 418 */                 {
/* line: 419, address: 0x6014ce38 */                   result = *(unsigned __int8 *)(v67 + 3);
/* line: 420, address: 0x6014ce3c */                   v71 = result == 0;
/* line: 421 */                 }
/* line: 422, address: 0x6014ce40 */                 if ( !v71 )
/* line: 423 */                 {
/* line: 424, address: 0x6014ce5c */                   ActorMgrRelated_getById(MEMORY[0xC7B400] + 27168);
/* line: 425, address: 0x6014ce68 */                   v72 = *(_DWORD *)(*(_DWORD *)v65 + 144);
/* line: 426, address: 0x6014ce78 */                   v73 = 0;
/* line: 427, address: 0x6014ce80 */                   v74 = 0;
/* line: 428, address: 0x6014ce74 */                   if ( ActorMgrRelated_getById(MEMORY[0xC7B400] + 27168) )
/* line: 429 */                   {
/* line: 430, address: 0x6014ce8c */                     v74 = 0;
/* line: 431, address: 0x6014ce88 */                     if ( *(_DWORD *)(v68 + 32) )
/* line: 432 */                     {
/* line: 433, address: 0x6014ceb0 */                       ActorMgrRelated_getById(MEMORY[0xC7B400] + 27168);
/* line: 434, address: 0x6014ceb8 */                       v74 = *(_DWORD *)(*(_DWORD *)(v68 + 32) + 144);
/* line: 435 */                     }
/* line: 436 */                   }
/* line: 437, address: 0x6014ced0 */                   result = ActorMgrRelated_getById(MEMORY[0xC7B400] + 27168);
/* line: 438, address: 0x6014ced4 */                   v75 = result == 0;
/* line: 439, address: 0x6014ced8 */                   if ( result )
/* line: 440 */                   {
/* line: 441, address: 0x6014ced8 */                     result = *(_DWORD *)(v67 + 32);
/* line: 442, address: 0x6014cedc */                     v75 = result == 0;
/* line: 443 */                   }
/* line: 444, address: 0x6014cee0 */                   if ( !v75 )
/* line: 445 */                   {
/* line: 446, address: 0x6014cefc */                     ActorMgrRelated_getById(MEMORY[0xC7B400] + 27168);
/* line: 447, address: 0x6014cf00 */                     result = *(_DWORD *)(v67 + 32);
/* line: 448, address: 0x6014cf04 */                     v73 = *(_DWORD *)(result + 144);
/* line: 449 */                   }
/* line: 450, address: 0x6014cf08 */                   v76 = v74 == v72;
/* line: 451, address: 0x6014cf0c */                   if ( v74 != v72 )
/* line: 452, address: 0x6014cf0c */                     v76 = v73 == v72;
/* line: 453, address: 0x6014cf10 */                   if ( v76 )
/* line: 454 */                   {
/* line: 455, address: 0x6014cf14 */                     v77 = 0;
/* line: 456, address: 0x6014cf20 */                     v86 = 0;
/* line: 457, address: 0x6014cf2c */                     v87 = **((_BYTE **)a1 + 553);
/* line: 458, address: 0x6014cf38 */                     v88 = **((_BYTE **)a1 + 554);
/* line: 459, address: 0x6014cf40 */                     v89 = 0;
/* line: 460, address: 0x6014cf44 */                     v90 = a1 + 80;
/* line: 461, address: 0x6014cf4c */                     sub_6015D144(a1 + 4, &v86);
/* line: 462, address: 0x6014cf50 */                     v78 = *((_DWORD *)a1 + 549);
/* line: 463, address: 0x6014cf54 */                     *((_DWORD *)a1 + 3) = v78;
/* line: 464, address: 0x6014cf58 */                     *((_DWORD *)a1 + 7) = 0;
/* line: 465, address: 0x6014cf5c */                     *((_DWORD *)a1 + 8) = 0;
/* line: 466, address: 0x6014cf60 */                     v79 = *((_DWORD *)a1 + 6);
/* line: 467, address: 0x6014cf68 */                     if ( v79 >= 1 )
/* line: 468 */                     {
/* line: 469, address: 0x6014cf70 */                       *((_DWORD *)a1 + 8) = 1;
/* line: 470, address: 0x6014cf78 */                       **((_DWORD **)a1 + 5) = v78;
/* line: 471, address: 0x6014cf7c */                       v79 = *((_DWORD *)a1 + 6);
/* line: 472, address: 0x6014cf80 */                       v77 = *((_DWORD *)a1 + 8);
/* line: 473 */                     }
/* line: 474, address: 0x6014cf88 */                     if ( v77 < v79 )
/* line: 475 */                     {
/* line: 476, address: 0x6014cf90 */                       v80 = *((_DWORD *)a1 + 550);
/* line: 477, address: 0x6014cf94 */                       *((_DWORD *)a1 + 8) = v77 + 1;
/* line: 478, address: 0x6014cfa0 */                       v81 = *((_DWORD *)a1 + 7) + v77;
/* line: 479, address: 0x6014cfa4 */                       v82 = __OFSUB__(v81, v79);
/* line: 480, address: 0x6014cfa4 */                       v83 = v81 - v79;
/* line: 481, address: 0x6014cfa8 */                       if ( v83 < 0 != v82 )
/* line: 482, address: 0x6014cfa8 */                         v83 = *((_DWORD *)a1 + 7) + v77;
/* line: 483, address: 0x6014cfac */                       *(_DWORD *)(*((_DWORD *)a1 + 5) + 4 * v83) = v80;
/* line: 484 */                     }
/* line: 485, address: 0x6014cfc0 */                     a1[5] = 1;
/* line: 486, address: 0x6014cfc4 */                     v84 = *((float *)v30 + 4);
/* line: 487, address: 0x6014cfcc */                     v85[0] = *((_DWORD *)v30 + 3);
/* line: 488, address: 0x6014cfd8 */                     *(float *)&v85[1] = v84 + 1.0;
/* line: 489, address: 0x6014cfdc */                     result = ((int (__fastcall *)(unsigned __int8 *, __int16 *, _DWORD *))sub_6015DF58)(
/* line: 490 */                                a1 + 4,
/* line: 491 */                                &v86,
/* line: 492 */                                v85);
/* line: 493, address: 0x6014cfe4 */                     if ( result == 1 )
/* line: 494 */                     {
/* line: 495, address: 0x6014cfe8 */                       result = *((_DWORD *)a1 + 551);
/* line: 496, address: 0x6014cff8 */                       *(float *)(result + 4) = *(float *)(result + 4) + 8.0;
/* line: 497 */                     }
/* line: 498 */                   }
/* line: 499 */                 }
/* line: 500 */               }
/* line: 501 */             }
/* line: 502 */           }
/* line: 503 */         }
/* line: 504 */       }
/* line: 505 */     }
/* line: 506 */   }
/* line: 507, address: 0x6014d008 */   return result;
/* line: 508 */ }