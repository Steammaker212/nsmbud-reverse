/* sub_605A4188
 * address: 0x605A4188   size: 168   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605A4188(int a1)
{
  int v2; // r6
  int v3; // t1
  int v4; // r1
  float v6; // [sp+0h] [bp-18h] BYREF
  int v7; // [sp+4h] [bp-14h]

  FIELD_U16(a1, 6888) = FIELD_U16(a1, 6890);
  FIELD_U32(EnemyCounterMaybe_instance, 28) = 0;
  v2 = dword_60CC6484;
  v3 = FIELD_U32(a1, 6128);
  v6 = FIELD_F32(dword_60CC6484, 112) + (float)(FIELD_F32(dword_60CC6484, 104) * 0.3);
  v7 = v3;
  TileMgr_splashRelated(TileMgr_instance, &v6, 10);
  v4 = FIELD_U32(a1, 6128);
  v6 = FIELD_F32(v2, 112) + (float)(FIELD_F32(v2, 104) * 0.8);
  v7 = v4;
  return TileMgr_splashRelated(TileMgr_instance, &v6, 10);
}
