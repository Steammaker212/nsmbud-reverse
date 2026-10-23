/* Actor_lava_level_RDash_build
 * address: 0x6070D674   size: 128   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_lava_level_RDash_build(ActorBuildInfo *a1)
{
  int v2; // r5

  v2 = operator_new(0x19A0u);
  sub_606C103C((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C2169C;
  FIELD_U32(v2, 6120) = 0;
  FIELD_U32(v2, 6124) = 0;
  ShapedCollider_ctor((ShapedCollider *)(v2 + 6128));
  FIELD_U32(v2, 6552) = 0;
  FIELD_U32(v2, 6548) = 0;
  FIELD_U32(v2, 6544) = 0;
  FIELD_U32(v2, 6536) = 0;
  FIELD_U32(v2, 6540) = 0;
  return v2;
}
