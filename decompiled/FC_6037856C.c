#include "nsmbudx_prelude.h"

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6037856C(CollisionActor *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6037856C(CollisionActor *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6037856C(CollisionActor *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6037856C(CollisionActor *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6037856C(CollisionActor *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6037856C(CollisionActor *a1);

/* ---- forward declarations for functions defined below ---- */
int __fastcall sub_6037856C(CollisionActor *a1);
/* line: 0, address: 0x6037856c */ int __fastcall sub_6037856C(CollisionActor *a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r0
/* line: 3 */   int v3; // r1
/* line: 4 */   int v4; // r2
/* line: 5 */   int v5; // r3
/* line: 6 */   int v6; // r5
/* line: 7 */   int v7; // r2
/* line: 8 */   _DWORD v9[12]; // [sp+0h] [bp-40h] BYREF
/* line: 9 */   int v10; // [sp+30h] [bp-10h] BYREF
/* line: 10 */   int v11; // [sp+34h] [bp-Ch] BYREF
/* line: 11 */   int v12; // [sp+38h] [bp-8h] BYREF
/* line: 12 */ 
/* line: 13, address: 0x60378580 */   StateMgr::execute((_DWORD *)a1 + 1521);
/* line: 14, address: 0x6037859c */   (*(void (__fastcall **)(_DWORD))(**(_DWORD **)(*((_DWORD *)a1 + 1525) + 4) + 148))(*(_DWORD *)(*((_DWORD *)a1 + 1525)
/* line: 15 */                                                                                                + 4));
/* line: 16, address: 0x603785a4 */   CollisionActor::handleGravity(a1);
/* line: 17, address: 0x603785ac */   CollisionActor::handleSpeed(a1);
/* line: 18, address: 0x603785b4 */   CollisionActor::sub_600034C8(a1);
/* line: 19, address: 0x603785b8 */   v2 = *((_DWORD *)a1 + 28);
/* line: 20, address: 0x603785bc */   v3 = *((_DWORD *)a1 + 29);
/* line: 21, address: 0x603785c0 */   v4 = *((_DWORD *)a1 + 27);
/* line: 22, address: 0x603785c4 */   v5 = *((_DWORD *)a1 + 39);
/* line: 23, address: 0x603785c8 */   v6 = *((_DWORD *)a1 + 40);
/* line: 24, address: 0x603785d0 */   v12 = *((_DWORD *)a1 + 41);
/* line: 25, address: 0x603785d4 */   v11 = v6;
/* line: 26, address: 0x603785d8 */   v10 = v5;
/* line: 27, address: 0x603785e8 */   v9[0] = 1065353216;
/* line: 28, address: 0x603785ec */   v9[1] = 0;
/* line: 29, address: 0x603785f0 */   v9[2] = 0;
/* line: 30, address: 0x603785f4 */   v9[4] = 0;
/* line: 31, address: 0x603785f8 */   v9[5] = 1065353216;
/* line: 32, address: 0x603785fc */   v9[6] = 0;
/* line: 33, address: 0x60378600 */   v9[8] = 0;
/* line: 34, address: 0x60378604 */   v9[9] = 0;
/* line: 35, address: 0x6037860c */   v9[10] = 1065353216;
/* line: 36, address: 0x60378610 */   v9[3] = v4;
/* line: 37, address: 0x60378614 */   v9[7] = v2;
/* line: 38, address: 0x60378618 */   v9[11] = v3;
/* line: 39, address: 0x60378624 */   Mtx34_rotateY(v9, &v11);
/* line: 40, address: 0x60378630 */   Mtx34_rotateX(v9, &v10);
/* line: 41, address: 0x6037863c */   Mtx34_rotateZ(v9, &v12);
/* line: 42, address: 0x6037864c */   sub_60793FF0(*(_DWORD *)(*((_DWORD *)a1 + 1525) + 4), v9, v7);
/* line: 43, address: 0x60378658 */   return 1;
/* line: 44 */ }