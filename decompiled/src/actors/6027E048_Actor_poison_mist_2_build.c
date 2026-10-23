/* Actor_poison_mist_2_build
 * address: 0x6027E048   size: 224   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_poison_mist_2_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x40B8u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BDD5E4;
  sub_60448BFC(v2 + 6308);
  memset((void *)(v2 + 6372), 0, 88);
  FIELD_U32(v2, 6304) = &off_60BDD860;
  FIELD_U32(v2, 6464) = 2139095039;
  FIELD_U32(v2, 6468) = 2139095039;
  FIELD_U32(v2, 6472) = -8388609;
  FIELD_U32(v2, 6476) = -8388609;
  FIELD_U32(v2, 16508) = 0;
  FIELD_U32(v2, 16540) = 0;
  FIELD_U32(v2, 16544) = 0;
  FIELD_U8(v2, 16548) = 0;
  FIELD_U32(v2, 16552) = 0;
  FIELD_U32(v2, 16556) = 0;
  FIELD_U8(v2, 16560) = 0;
  FIELD_U8(v2, 533) = 0;
  *(_DWORD *)v2 = off_60BDD86C;
  return v2;
}
