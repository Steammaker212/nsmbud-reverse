/* Actor_tsufloor_akuta_build
 * address: 0x605A20B0   size: 128   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_tsufloor_akuta_build(ActorBuildInfo *a1)
{
  int v2; // r4
  RectCollider *v3; // r0

  v2 = operator_new(0x15E58u);
  TerrainActor_ctor(v2, a1);
  *(_DWORD *)v2 = off_60C08034;
  v3 = RectCollider_ctor((RectCollider *)(v2 + 72328));
  FIELD_U32(v3, 0x0)._._.vtable = (int)off_60BC30D8;
  sub_605C10B4(&v3[1]._._.nodes[0].prev);
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 89664));
  FIELD_U32(v2, 89664) = off_60BC6E38;
  FIELD_U32(v2, 89680) = 0;
  return v2;
}
