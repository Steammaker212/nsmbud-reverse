/* Actor_gurupukinokoburoku_build_helper
 * address: 0x60679E00   size: 100   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_gurupukinokoburoku_build_helper(int a1, ActorBuildInfo *a2)
{
  StateActor_ctor((StateActor *)a1, a2);
  *(_DWORD *)a1 = off_60C16544;
  FIELD_U32(a1, 6100) = 0;
  RectCollider_ctor((RectCollider *)(a1 + 6104));
  FIELD_U32(a1, 6104) = off_60BC30D8;
  LineFollower_ctor((LineFollower *)(a1 + 6760));
  FIELD_U32(a1, 6904) = 0;
  return a1;
}
