/* Actor_Boxing_BowserJr_exclusive_floor_build
 * address: 0x60633788   size: 192   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Boxing_BowserJr_exclusive_floor_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1A98u);
  StateActor_ctor((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C129AC;
  FIELD_U32(v2, 6112) = 0;
  FIELD_U32(v2, 6108) = 0;
  FIELD_U32(v2, 6100) = 0;
  FIELD_U32(v2, 6104) = 0;
  RectCollider_ctor((RectCollider *)(v2 + 6120));
  FIELD_U32(v2, 6120) = off_60BC30D8;
  FIELD_U16(v2, 6800) = 0;
  FIELD_U32(v2, 6804) = 0;
  FIELD_U8(v2, 6798) = 0;
  FIELD_U16(v2, 6796) = 0;
  FIELD_U32(v2, 6792) = 0;
  FIELD_U32(v2, 6788) = 0;
  FIELD_U32(v2, 6784) = 0;
  FIELD_U32(v2, 6780) = 0;
  FIELD_U32(v2, 6776) = 0;
  return v2;
}
