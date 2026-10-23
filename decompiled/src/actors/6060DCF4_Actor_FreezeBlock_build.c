/* Actor_FreezeBlock_build
 * address: 0x6060DCF4   size: 156   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_FreezeBlock_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1CC0u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C0FB74;
  RectCollider_ctor((RectCollider *)(v2 + 6112));
  FIELD_U32(v2, 6112) = off_60BC30D8;
  FIELD_U32(v2, 6788) = 0;
  FIELD_U32(v2, 6784) = 0;
  FIELD_U32(v2, 6780) = 0;
  FIELD_U32(v2, 6776) = 0;
  FIELD_U32(v2, 6768) = 0;
  FIELD_U32(v2, 6772) = 0;
  sub_602F2C84(v2 + 6792);
  FIELD_U8(v2, 7356) = 0;
  return v2;
}
