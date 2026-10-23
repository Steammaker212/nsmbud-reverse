/* sub_6025A430
 * address: 0x6025A430   size: 444   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6025A430(int a1)
{
  char v1; // r12
  signed int v3; // r5
  signed int v4; // r0
  _DWORD *v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r0
  _DWORD *v9; // r0
  int *v10; // r1
  unsigned int v11; // r2
  unsigned int v12; // r0
  int v13; // r5
  int *v14; // r4
  int v15; // t1

  v4 = dword_60AF24C4[FIELD_U32(a1, 20) & 3 ^ 2];
  v3 = v4;
  if ( (v4 | 1) == 3 )
    v4 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
  FIELD_U32(a1, 80) = v4;
  FIELD_U32(a1, 160) = Enemy_CommonRotations[v4];
  if ( ((unsigned int)dword_60C8E354 & ~(1613079700 << v1) & 1) == 0 && _cxa_guard_acquire(dword_60C8E354) )
  {
    dword_60C8E398 = 1056964608;
    dword_60C8E39C = 0;
    dword_60C8E3A0 = 0;
    dword_60C8E3A4 = -1090519040;
    dword_60C8E3A8 = 0;
    dword_60C8E3AC = 0;
    dword_60C8E3B0 = 0;
    dword_60C8E3B4 = 1056964608;
    dword_60C8E3B8 = 0;
    dword_60C8E3BC = 0;
    dword_60C8E3C0 = -1090519040;
    dword_60C8E3C4 = 0;
    _cxa_guard_release(dword_60C8E354);
  }
  v5 = (_DWORD *)((char *)&unk_60C8E350 + 12 * v3);
  v6 = v5[18];
  v7 = v5[19];
  v8 = v5[20];
  FIELD_U32(a1, 120) = v6;
  FIELD_U32(a1, 124) = v7;
  FIELD_U32(a1, 128) = v8;
  if ( FIELD_U32(a1, 6360) )
  {
    FIELD_U32(a1, 6360) = 0;
    sub_60421AD4(FIELD_U32(a1, 6352));
  }
  else
  {
    v9 = *(_DWORD **)(a1 + 6352);
    v10 = (int *)v9[3];
    v11 = v9[2];
    v12 = v9[17];
    if ( v11 > v12 )
      v10 += v12;
    v13 = *v10;
    if ( (float)(*(float *)(*v10 + 24) + *(float *)(*v10 + 24)) < 0.0 )
      sub_6041838C((ModelAnimation *)(v13 + 4));
    FIELD_U32(v13, 24) = 0x40000000;
  }
  v15 = FIELD_U32(a1, 6148);
  v14 = (int *)(a1 + 6148);
  *v14 = v15 | 0x10000;
  v14[76] = 32;
  sub_6015913C((ActiveCollider *)(v14 - 1490), 8);
  *(v14 - 1453) &= ~2u;
  return -5812;
}
