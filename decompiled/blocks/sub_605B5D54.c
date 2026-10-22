#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
float * __fastcall sub_605B5D54(float *result, int a2, int a3, __int16 a4, int a5);

/* ---- forward declarations for functions defined below ---- */
float * __fastcall sub_605B5D54(float *result, int a2, int a3, __int16 a4, int a5);

/* ---- forward declarations for functions defined below ---- */
float * __fastcall sub_605B5D54(float *result, int a2, int a3, __int16 a4, int a5);

/* ---- forward declarations for functions defined below ---- */
float * __fastcall sub_605B5D54(float *result, int a2, int a3, __int16 a4, int a5);

/* ---- forward declarations for functions defined below ---- */
float * __fastcall sub_605B5D54(float *result, int a2, int a3, __int16 a4, int a5);

/* ---- forward declarations for functions defined below ---- */
float * __fastcall sub_605B5D54(float *result, int a2, int a3, __int16 a4, int a5);
/* line: 0, address: 0x605b5d54 */ float *__fastcall sub_605B5D54(float *result, int a2, int a3, __int16 a4, int a5)
/* line: 1 */ {
/* line: 2 */   float v6; // r6
/* line: 3 */   float v7; // r7
/* line: 4 */   int v8; // r5
/* line: 5 */   float v9; // s0
/* line: 6 */   float v10; // r7
/* line: 7 */   int v11; // r1
/* line: 8 */   float v12; // s2
/* line: 9 */   int v13; // r5
/* line: 10 */   int v14; // [sp+4h] [bp-34h] BYREF
/* line: 11 */   float v15[9]; // [sp+8h] [bp-30h] BYREF
/* line: 12 */   int v16; // [sp+2Ch] [bp-Ch]
/* line: 13 */   _BYTE v17[8]; // [sp+30h] [bp-8h] BYREF
/* line: 14 */ 
/* line: 15, address: 0x605b5d80 */   switch ( *((_DWORD *)result + 1714) )
/* line: 16 */   {
/* line: 17, address: 0x605b5d80 */     case 0:
/* line: 18, address: 0x605b5d80 */     case 1:
/* line: 19, address: 0x605b5d80 */     case 2:
/* line: 20, address: 0x605b5d80 */     case 3:
/* line: 21, address: 0x605b5d80 */     case 4:
/* line: 22, address: 0x605b5d80 */     case 5:
/* line: 23, address: 0x605b5d80 */     case 6:
/* line: 24, address: 0x605b5d80 */     case 8:
/* line: 25, address: 0x605b5d80 */     case 9:
/* line: 26, address: 0x605b5d80 */     case 0xA:
/* line: 27, address: 0x605b5d80 */     case 0x16:
/* line: 28, address: 0x605b5d80 */     case 0x17:
/* line: 29, address: 0x605b5d80 */     case 0x19:
/* line: 30, address: 0x605b5dfc */       result = (float *)sub_605B5A3C((int)result, a2, a3, a4, a5);
/* line: 31, address: 0x605b5dfc */       break;
/* line: 32, address: 0x605b5d80 */     case 0xE:
/* line: 33, address: 0x605b5eb0 */       result = (float *)(*(int (__fastcall **)(float *))(*(_DWORD *)result + 240))(result);
/* line: 34, address: 0x605b5eb0 */       break;
/* line: 35, address: 0x605b5d80 */     case 0xF:
/* line: 36, address: 0x605b5e18 */       v6 = result[27];
/* line: 37, address: 0x605b5e1c */       v7 = result[28];
/* line: 38, address: 0x605b5e20 */       v8 = *((_DWORD *)result + 1716);
/* line: 39, address: 0x605b5e28 */       if ( v8 == 2 )
/* line: 40, address: 0x605b5e38 */         v7 = v7 + 16.0;
/* line: 41, address: 0x605b5e48 */       memset(v15, 0, sizeof(v15));
/* line: 42, address: 0x605b5e58 */       v14 = (unsigned __int16)(a4 << 8) | (16 * v8);
/* line: 43, address: 0x605b5e70 */       LODWORD(v15[2]) = Profile::get(MEMORY[0xAF301C]);
/* line: 44, address: 0x605b5e70 */       v15[3] = v6;
/* line: 45, address: 0x605b5e70 */       v15[4] = v7;
/* line: 46, address: 0x605b5e78 */       v15[5] = -32.0;
/* line: 47, address: 0x605b5e80 */       LOWORD(v15[7]) = 0;
/* line: 48, address: 0x605b5e88 */       BYTE2(v15[7]) = 0;
/* line: 49, address: 0x605b5e8c */       v16 = 0;
/* line: 50, address: 0x605b5e98 */       goto LABEL_9;
/* line: 51, address: 0x605b5d80 */     case 0x10:
/* line: 52, address: 0x605b5d80 */     case 0x12:
/* line: 53, address: 0x605b5e10 */       result = (float *)sub_605B586C();
/* line: 54, address: 0x605b5e10 */       break;
/* line: 55, address: 0x605b5d80 */     case 0x11:
/* line: 56, address: 0x605b5ebc */       v9 = result[28];
/* line: 57, address: 0x605b5ecc */       v11 = *((_DWORD *)result + 1716);
/* line: 58, address: 0x605b5ed8 */       v14 = *((_DWORD *)result + 27);
/* line: 59, address: 0x605b5ec0 */       v10 = *(float *)&v14;
/* line: 60, address: 0x605b5eec */       v12 = flt_60AF1EE8[(unsigned __int8)(v11 - 2)];
/* line: 61, address: 0x605b5efc */       v13 = MEMORY[0xC7F534];
/* line: 62, address: 0x605b5f00 */       v15[0] = v9 + v12;
/* line: 63, address: 0x605b5f04 */       mapPositionToScreen(v17, &v14);
/* line: 64, address: 0x605b5f20 */       BasicSoundActor2_play(v13, "SE_OBJ_JUMPDAI_APP", v17, 0);
/* line: 65, address: 0x605b5f2c */       memset(v15, 0, sizeof(v15));
/* line: 66, address: 0x605b5f34 */       v14 = 0x10000000;
/* line: 67, address: 0x605b5f48 */       LODWORD(v15[2]) = Profile::get(MEMORY[0xAF35D4]);
/* line: 68, address: 0x605b5f50 */       v15[3] = v10;
/* line: 69, address: 0x605b5f54 */       v15[4] = v9 + v12;
/* line: 70, address: 0x605b5f58 */       v15[5] = 0.0;
/* line: 71, address: 0x605b5f5c */       LOWORD(v15[7]) = 0;
/* line: 72, address: 0x605b5f64 */       BYTE2(v15[7]) = 0;
/* line: 73, address: 0x605b5f68 */       v16 = 0;
/* line: 74 */ LABEL_9:
/* line: 75, address: 0x605b5f70 */       result = (float *)ActorMgr::create(MEMORY[0xC7B400], (int)&v14, 0);
/* line: 76, address: 0x605b5f7c */       break;
/* line: 77 */     default:
/* line: 78 */       return result;
/* line: 79 */   }
/* line: 80, address: 0x605b5f88 */   return result;
/* line: 81 */ }