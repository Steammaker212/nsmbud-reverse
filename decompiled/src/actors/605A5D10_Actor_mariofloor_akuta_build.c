/* Actor_mariofloor_akuta_build
 * address: 0x605A5D10   size: 112   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

MultiStateActor *__fastcall Actor_mariofloor_akuta_build(ActorBuildInfo *a1)
{
  int v2; // r5
  RectCollider *v3; // r0

  v2 = operator_new(0x15EC0u);
  TerrainActor_ctor(v2, a1);
  *(_DWORD *)v2 = off_60C08264;
  v3 = RectCollider_ctor((RectCollider *)(v2 + 72328));
  FIELD_U32(v3, 0x0) = (int)off_60BC30D8;
  v3[1]._._._.vtable = (int)off_60C08358;
  sub_605C10B4(&v3[1]._._._.field_8);
  return (MultiStateActor *)v2;
}
