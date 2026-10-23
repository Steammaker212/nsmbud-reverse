/* Actor_mist_range_raito_build
 * address: 0x602838B4   size: 288   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_mist_range_raito_build(ActorBuildInfo *a1)
{
  int v2; // r6
  _WORD *v3; // r5
  int v4; // r2
  _DWORD *v5; // r1

  v2 = operator_new(0x2330u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BDDAE8;
  sub_60448BFC(v2 + 6308);
  memset((void *)(v2 + 6372), 0, 88);
  v3 = (_WORD *)(v2 + 6810);
  v4 = 150;
  FIELD_U32(v2, 6304) = off_60BDDD60;
  FIELD_U32(v2, 6468) = 2139095039;
  FIELD_U32(v2, 6472) = 2139095039;
  FIELD_U32(v2, 6476) = -8388609;
  FIELD_U32(v2, 6480) = -8388609;
  FIELD_U32(v2, 8912) = 0;
  FIELD_U32(v2, 9000) = 0;
  FIELD_U32(v2, 76) |= 2u;
  FIELD_U8(v2, 533) = 0;
  FIELD_U32(v2, 8920) = 0;
  FIELD_U32(v2, 8916) = 0;
  FIELD_U16(v2, 6508) = 0;
  FIELD_U32(v2, 6504) = 0;
  FIELD_U32(v2, 6500) = 0;
  v5 = (_DWORD *)(v2 + 7120);
  do
  {
    --v4;
    *v3 = 0;
    *(v3 - 150) = 0;
    *(v5 - 2) = 0;
    *(v5 - 1) = 0;
    *v5 = 0;
    v5 += 3;
    ++v3;
  }
  while ( v4 );
  return v2;
}
