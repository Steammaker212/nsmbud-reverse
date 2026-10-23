/* sub_606E8678
 * address: 0x606E8678   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E8678(int a1)
{
  int v2; // r12
  int v3; // r2
  float v4; // s0
  unsigned int v5; // r0
  int v6; // r0

  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 644));
  sub_606E8220(a1);
  sub_606E84F8(a1);
  v2 = FIELD_U32(a1, 116);
  v3 = FIELD_U32(a1, 108);
  v4 = FIELD_F32(a1, 112);
  v5 = (int)(float)((float)(2147500000.0 * 4.9) / 180.0) + FIELD_U32(a1, 688);
  FIELD_U32(a1, 688) = v5;
  FIELD_F32(a1, 652) = (float)((float)((float)(*(float *)((char *)sinLutTable + ((v5 >> 20) & 0xFF0))
                                               + (float)((float)(*(float *)((char *)&sinLutTable[1]
                                                                          + ((v5 >> 20) & 0xFF0))
                                                               * (float)(v5 & 0xFFFFFF))
                                                       * 0.000000059605))
                                       * 130.0)
                               * 0.04)
                       + 130.0;
  FIELD_U32(a1, 660) = v3;
  FIELD_F32(a1, 664) = v4 + 4.0;
  FIELD_U32(a1, 668) = v2;
  LightMask__update((LightMask *)(a1 + 648));
  StageActor__cullCheck((StageActor *)a1, 0);
  return v6 ^ 1;
}
