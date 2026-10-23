/* Actor_snow_spawn_Tag_build
 * address: 0x606A36DC   size: 196   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_snow_spawn_Tag_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x22D8u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60C19300;
  sub_60448BFC((_DWORD *)(v2 + 6308));
  memset((void *)(v2 + 6372), 0, 88);
  FIELD_U32(v2, 6304) = off_60C19578;
  FIELD_U32(v2, 6472) = 1065353216;
  FIELD_U32(v2, 6476) = 1065353216;
  FIELD_U8(v2, 6480) = -1;
  FIELD_U8(v2, 6481) = 0;
  FIELD_U8(v2, 6482) = 0;
  FIELD_U8(v2, 6483) = 0;
  FIELD_U8(v2, 6484) = -1;
  FIELD_U8(v2, 6485) = 0;
  FIELD_U8(v2, 6486) = 0;
  FIELD_U8(v2, 6487) = 0;
  FIELD_U8(v2, 533) = 0;
  return v2;
}
