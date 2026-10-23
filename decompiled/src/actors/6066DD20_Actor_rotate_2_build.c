/* Actor_rotate_2_build
 * address: 0x6066DD20   size: 308   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_rotate_2_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x22C0u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C156D8;
  FIELD_U32(v2, 6100) = 0;
  RectCollider_ctor((RectCollider *)(v2 + 6120));
  FIELD_U32(v2, 6120) = off_60BC30D8;
  RectCollider_ctor((RectCollider *)(v2 + 6776));
  FIELD_U32(v2, 6776) = off_60BC30D8;
  RectCollider_ctor((RectCollider *)(v2 + 7432));
  FIELD_U32(v2, 7432) = off_60BC30D8;
  FIELD_U32(v2, 8272) = 0;
  FIELD_U32(v2, 8276) = 0;
  FIELD_U32(v2, 8280) = 0;
  FIELD_U8(v2, 8268) = 0;
  FIELD_U32(v2, 8264) = 0;
  FIELD_U32(v2, 8260) = 0;
  FIELD_U32(v2, 8256) = 0;
  FIELD_U32(v2, 8252) = 0;
  FIELD_U32(v2, 8244) = 0;
  FIELD_U32(v2, 8248) = 0;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 8284));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 8588));
  FIELD_U32(v2, 8892) = off_60C157A0;
  FIELD_U32(v2, 6112) = 0;
  FIELD_U32(v2, 6108) = 0;
  FIELD_U32(v2, 6104) = 0;
  FIELD_U8(v2, 8240) = 0;
  FIELD_U8(v2, 8241) = 0;
  memset((void *)(v2 + 8088), 0, 72);
  return v2;
}
