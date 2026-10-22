#include "nsmbudx_prelude.h"
/* line: 0, address: 0x6013fb0c */ int __fastcall sub_6013FB0C(int a1)
/* line: 1 */ {
/* line: 2 */   int v2; // r0
/* line: 3 */   int v3; // r0
/* line: 4 */   float v4; // s0
/* line: 5 */   int v5; // r3
/* line: 6 */   int v6; // r5
/* line: 7 */   int v7; // r6
/* line: 8 */   int v8; // r7
/* line: 9 */   int v9; // r3
/* line: 10 */   int v10; // r4
/* line: 11 */   int v11; // r5
/* line: 12 */   int v12; // r6
/* line: 13 */   int v13; // r7
/* line: 14 */   int v14; // r0
/* line: 15 */ 
/* line: 16, address: 0x6013fb24 */   *(_DWORD *)(a1 + 144) = 0;
/* line: 17, address: 0x6013fb28 */   *(_DWORD *)(a1 + 148) = 0;
/* line: 18, address: 0x6013fb2c */   *(_DWORD *)(a1 + 152) = 0;
/* line: 19, address: 0x6013fb30 */   v2 = *(_DWORD *)(a1 + 20);
/* line: 20, address: 0x6013fb3c */   *(_DWORD *)(a1 + 80) = v2 & 1;
/* line: 21, address: 0x6013fb48 */   *(float *)(a1 + 160) = flt_60AF1EC0[v2 & 1];
/* line: 22, address: 0x6013fb50 */   *(_DWORD *)(a1 + 164) = 0;
/* line: 23, address: 0x6013fb58 */   *(_DWORD *)(a1 + 156) = -775480206;
/* line: 24, address: 0x6013fb64 */   *(_DWORD *)(a1 + 144) = 1050253722;
/* line: 25, address: 0x6013fb68 */   v3 = BYTE2(v2);
/* line: 26, address: 0x6013fb6c */   *(_DWORD *)(a1 + 148) = 1050253722;
/* line: 27, address: 0x6013fb78 */   *(_DWORD *)(a1 + 152) = 1050253722;
/* line: 28, address: 0x6013fb80 */   *(_DWORD *)(a1 + 11840) = v3;
/* line: 29, address: 0x6013fb90 */   v4 = 0.7 / (float)v3;
/* line: 30, address: 0x6013fb94 */   *(float *)(a1 + 11828) = v4;
/* line: 31, address: 0x6013fb98 */   *(float *)(a1 + 11832) = v4;
/* line: 32, address: 0x6013fba4 */   *(float *)(a1 + 11836) = v4;
/* line: 33, address: 0x6013fbac */   *(_BYTE *)(a1 + 6100) = 0;
/* line: 34, address: 0x6013fbc4 */   v5 = unk_60BD31F4;
/* line: 35, address: 0x6013fbc4 */   v6 = unk_60BD31F8;
/* line: 36, address: 0x6013fbc4 */   v7 = unk_60BD31FC;
/* line: 37, address: 0x6013fbc4 */   v8 = unk_60BD3200;
/* line: 38, address: 0x6013fbc8 */   *(_DWORD *)(a1 + 11852) = unk_60BD31F0;
/* line: 39, address: 0x6013fbc8 */   *(_DWORD *)(a1 + 11856) = v5;
/* line: 40, address: 0x6013fbc8 */   *(_DWORD *)(a1 + 11860) = v6;
/* line: 41, address: 0x6013fbc8 */   *(_DWORD *)(a1 + 11864) = v7;
/* line: 42, address: 0x6013fbc8 */   *(_DWORD *)(a1 + 11868) = v8;
/* line: 43, address: 0x6013fbcc */   v9 = unk_60BD3208;
/* line: 44, address: 0x6013fbcc */   v10 = unk_60BD320C;
/* line: 45, address: 0x6013fbcc */   v11 = unk_60BD3210;
/* line: 46, address: 0x6013fbcc */   v12 = unk_60BD3214;
/* line: 47, address: 0x6013fbcc */   v13 = unk_60BD3218;
/* line: 48, address: 0x6013fbd0 */   *(_DWORD *)(a1 + 11872) = unk_60BD3204;
/* line: 49, address: 0x6013fbd0 */   *(_DWORD *)(a1 + 11876) = v9;
/* line: 50, address: 0x6013fbd0 */   *(_DWORD *)(a1 + 11880) = v10;
/* line: 51, address: 0x6013fbd0 */   *(_DWORD *)(a1 + 11884) = v11;
/* line: 52, address: 0x6013fbd0 */   *(_DWORD *)(a1 + 11888) = v12;
/* line: 53, address: 0x6013fbd0 */   *(_DWORD *)(a1 + 11892) = v13;
/* line: 54, address: 0x6013fbe0 */   ActiveCollider::init(a1 + 188, a1, a1 + 11852, 0);
/* line: 55, address: 0x6013fbe8 */   *(_DWORD *)(a1 + 572) = 0;
/* line: 56, address: 0x6013fbf8 */   *(_DWORD *)(a1 + 576) = 1082130432;
/* line: 57, address: 0x6013fbfc */   *(_DWORD *)(a1 + 580) = 0;
/* line: 58, address: 0x6013fc04 */   v14 = *(_DWORD *)(a1 + 6124);
/* line: 59, address: 0x6013fc08 */   *(_DWORD *)(a1 + 620) = v14;
/* line: 60, address: 0x6013fc0c */   *(_DWORD *)(v14 + 16) = 1;
/* line: 61, address: 0x6013fc18 */   *(_DWORD *)(*(_DWORD *)(a1 + 6128) + 28) = 1;
/* line: 62, address: 0x6013fc28 */   *(_DWORD *)(a1 + 624) = *(_DWORD *)(a1 + 6128);
/* line: 63, address: 0x6013fc30 */   *(_DWORD *)(a1 + 640) = 0;
/* line: 64, address: 0x6013fc34 */   *(_DWORD *)(a1 + 492) = 0;
/* line: 65, address: 0x6013fc38 */   *(_DWORD *)(a1 + 496) = 0;
/* line: 66, address: 0x6013fc40 */   StateMgr::changeState(a1 + 6084, 13139140);
/* line: 67, address: 0x6013fc48 */   sub_6013FDC0(a1);
/* line: 68, address: 0x6013fc64 */   (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 11824) + 52))(**(_DWORD **)(a1 + 11824));
/* line: 69, address: 0x6013fc78 */   (*(void (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 11824) + 56))(**(_DWORD **)(a1 + 11824));
/* line: 70, address: 0x6013fca4 */   CollisionMgr_init(a1 + 6472, a1, &unk_60AF68D0, &unk_60AF68DC, &unk_60AF68E8);
/* line: 71, address: 0x6013fcac */   *(_DWORD *)(a1 + 11900) = 0;
/* line: 72, address: 0x6013fcb4 */   return 11900;
/* line: 73 */ }