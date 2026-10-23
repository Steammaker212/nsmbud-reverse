/* CollisionMgr_vf18
 * address: 0x6014BBC8   size: 368   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CollisionMgr_vf18(_BYTE *a1)
{
  _BYTE *v1; // r4
  char v2; // r12
  char v3; // lr
  char v4; // r2
  char v5; // r3
  _BYTE *v6; // r0
  char v7; // r5
  char v8; // r1
  char v9; // r3
  char v10; // r1
  char v11; // r3
  char v12; // r1
  char v13; // r2
  char v14; // r12
  char v15; // t1
  char v16; // t1
  char v17; // r2
  char v18; // r3
  char v19; // r6
  char v20; // r5
  char v21; // r0

  v1 = a1;
  v2 = a1[2561];
  v3 = a1[2565];
  v4 = a1[2569];
  v5 = a1[2573];
  v6 = a1 + 2588;
  v1[2589] = v5;
  v1[2585] = v4;
  v1[2581] = v3;
  v1[2577] = v2;
  v7 = v1[2574];
  v8 = v1[2575];
  *v6 = v1[2572];
  v6 += 2;
  v6[1] = v8;
  *v6 = v7;
  v9 = v1[2570];
  v10 = v1[2571];
  v1[2584] = v1[2568];
  v1[2587] = v10;
  v1[2586] = v9;
  v11 = v1[2566];
  v12 = v1[2567];
  v1[2580] = v1[2564];
  v1[2583] = v12;
  v1[2582] = v11;
  v13 = v1[2562];
  LOBYTE(v6) = v1[2563];
  v1[2576] = v1[2560];
  v1[2579] = (_BYTE)v6;
  v1[2578] = v13;
  qmemcpy(v1 + 3936, v1 + 2592, 0x540u);
  v15 = v1[2224];
  v1 += 2224;
  v14 = v15;
  v16 = v1[4];
  v1 += 4;
  v17 = v1[3];
  v18 = v1[2];
  v19 = *(v1 - 3);
  v20 = *(v1 - 2);
  v21 = *(v1 - 1);
  v1[9] = v1[1];
  v1[5] = v19;
  v1[8] = v16;
  v1[11] = v17;
  v1[10] = v18;
  v1[4] = v14;
  v1[7] = v21;
  v1[6] = v20;
  v1[298] = v1[296];
  v1[299] = v1[297];
  v1[112] = 0;
  return 0;
}
