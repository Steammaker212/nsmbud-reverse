/* sub_603EF1C4
 * address: 0x603EF1C4   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603EF1C4(int a1)
{
  float v1; // s0
  float v2; // s2
  float v3; // s4
  int v4; // r2
  __int16 v5; // r1

  v1 = FIELD_F32(a1, 80) + FIELD_F32(a1, 36);
  FIELD_F32(a1, 36) = v1;
  v2 = FIELD_F32(a1, 48);
  if ( v1 < v2 )
  {
    FIELD_F32(a1, 36) = v2;
    v1 = v2;
  }
  v3 = FIELD_F32(a1, 32);
  FIELD_F32(a1, 20) = FIELD_F32(a1, 20) + v3;
  FIELD_F32(a1, 24) = v1 + FIELD_F32(a1, 24);
  FIELD_F32(a1, 28) = FIELD_F32(a1, 28) + FIELD_F32(a1, 40);
  v4 = FIELD_U32(a1, 104);
  if ( v3 < 0.0 )
    v4 = -v4;
  FIELD_U32(a1, 76) += v4;
  v5 = FIELD_U16(a1, 88) - 1;
  FIELD_U16(a1, 88) = v5;
  if ( v5 )
    return sub_603EF044(a1);
  FIELD_U8(a1, 16) = 1;
  return a1;
}
