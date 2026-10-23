/* sub_60359190
 * address: 0x60359190   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60359190(int a1)
{
  int v2; // r1
  signed int v3; // r0
  int v4; // r1
  int v5; // r2
  float v6; // s0
  float v7; // s2
  int v8; // r1

  v2 = (FIELD_U32(a1, 20) >> 28) & 7;
  v3 = v2 - 1;
  if ( (unsigned int)(v2 - 1) < 2 )
  {
    v5 = 32;
    v4 = 7488;
    v6 = (float)byte_60AFE3F4[v3];
    FIELD_U32(a1, 80) = v3;
    v7 = -3.0;
    FIELD_F32(a1, 120) = v6 * 0.5;
LABEL_7:
    FIELD_F32(a1, 112) = FIELD_F32(a1, 112) + v7;
    goto LABEL_8;
  }
  if ( v2 == 3 )
  {
    v3 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
    FIELD_U32(a1, 80) = v3;
    v7 = -14.0;
    v5 = 60;
    FIELD_U32(a1, 124) = 1056964608;
    v4 = 7488;
    goto LABEL_7;
  }
  if ( v2 == 4 )
  {
    v3 = StageActor__directionToPlayerX((StateActor *)a1, (Vec3 *)(a1 + 108));
    FIELD_U32(a1, 80) = v3;
    FIELD_U32(a1, 124) = -1090519040;
    FIELD_U32(a1, 7488) = 48;
    v4 = 7492;
    v5 = 56;
LABEL_8:
    *(_DWORD *)(a1 + v4) = v5;
    goto LABEL_10;
  }
  v3 = FIELD_U32(a1, 80);
LABEL_10:
  v8 = dword_60AF20E0[FIELD_U32(a1, 7476)];
  if ( v3 )
    v8 = -v8;
  FIELD_U32(a1, 160) = v8;
  sub_6015913C((ActiveCollider *)(a1 + 188), 72);
  return sub_6015913C((ActiveCollider *)(a1 + 6868), 64);
}
