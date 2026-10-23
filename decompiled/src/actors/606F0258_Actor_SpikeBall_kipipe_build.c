/* Actor_SpikeBall_kipipe_build
 * address: 0x606F0258   size: 116   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_SpikeBall_kipipe_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1AE0u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C200A8;
  RectCollider_ctor((RectCollider *)(v2 + 6104));
  FIELD_U32(v2, 6104) = off_60BC30D8;
  memset(v2 + 6760, 0, 43);
  memset((void *)(v2 + 6804), 0, 72);
  return v2;
}
