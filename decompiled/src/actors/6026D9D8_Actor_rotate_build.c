/* Actor_rotate_build
 * address: 0x6026D9D8   size: 164   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_rotate_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x2538u);
  MultiStateActor__ctor((MultiStateActor *)v2, a1);
  *(_DWORD *)v2 = off_60BDC634;
  RectCollider_ctor((RectCollider *)(v2 + 6112));
  FIELD_U32(v2, 6112) = off_60BC30D8;
  RectCollider_ctor((RectCollider *)(v2 + 6768));
  FIELD_U32(v2, 6768) = off_60BC30D8;
  RectCollider_ctor((RectCollider *)(v2 + 7424));
  FIELD_U32(v2, 7424) = off_60BC30D8;
  RectCollider_ctor((RectCollider *)(v2 + 8080));
  FIELD_U32(v2, 8080) = off_60BC30D8;
  RectCollider_ctor((RectCollider *)(v2 + 8736));
  FIELD_U32(v2, 8736) = off_60BC30D8;
  memset((void *)(v2 + 9392), 0, 136);
  return v2;
}
