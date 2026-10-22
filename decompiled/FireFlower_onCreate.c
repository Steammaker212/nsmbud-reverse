#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6045D79C(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6045D79C(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6045D79C(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6045D79C(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6045D79C(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6045D79C(int a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6045D79C(int a1);
/* line: 0, address: 0x6045d79c */ int __fastcall sub_6045D79C(int a1)
/* line: 1 */ {
/* line: 2 */   int Resource; // r8
/* line: 3 */   int Model2; // r6
/* line: 4 */   int v4; // r7
/* line: 5 */   int v5; // r0
/* line: 6 */   _DWORD v7[2]; // [sp+18h] [bp-10h] BYREF
/* line: 7 */   _DWORD v8[2]; // [sp+20h] [bp-8h] BYREF
/* line: 8 */ 
/* line: 9, address: 0x6045d7b0 */   *(_BYTE *)(a1 + 6199) = 1;
/* line: 10, address: 0x6045d7b8 */   *(_DWORD *)(a1 + 6168) = 1;
/* line: 11, address: 0x6045d7d8 */   v8[0] = 12321336;
/* line: 12, address: 0x6045d7e4 */   v8[1] = "I_fireflower";
/* line: 13, address: 0x6045d7fc */   v7[0] = 12321336;
/* line: 14, address: 0x6045d800 */   Resource = LoadResource(MEMORY[0xC9CA88], v8);
/* line: 15, address: 0x6045d804 */   v7[1] = "I_fireflower";
/* line: 16, address: 0x6045d820 */   Model2 = Resource_getModel2(Resource, v7, 1, 1, 0, 0, 0, 0, 0);
/* line: 17, address: 0x6045d848 */   v4 = operator new(48, 0, 4);
/* line: 18, address: 0x6045d850 */   v5 = ModelWrapper_ctor(v4, Model2, 1, 1, 0, 0, 0);
/* line: 19, address: 0x6045d860 */   ModelWrapper_setup(v5, Resource, 0, 0);
/* line: 20, address: 0x6045d868 */   *(_DWORD *)(a1 + 6160) = v4;
/* line: 21, address: 0x6045d870 */   sub_6046135C(a1);
/* line: 22, address: 0x6045d878 */   sub_60461C50(a1);
/* line: 23, address: 0x6045d880 */   sub_60462018(a1);
/* line: 24, address: 0x6045d88c */   return 1;
/* line: 25 */ }