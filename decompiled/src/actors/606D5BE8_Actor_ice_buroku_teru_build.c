/* Actor_ice_buroku_teru_build
 * address: 0x606D5BE8   size: 148   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_ice_buroku_teru_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1CF8u);
  *(_DWORD *)v2 = off_60C1E1A8;
  sub_605C92C8((StateActor *)v2, a1, v2 + 6160, (void *)7);
  *(_DWORD *)v2 = off_60C1E1A8;
  FIELD_U32(v2, 6152) = 0;
  FIELD_U32(v2, 6156) = 0;
  RectCollider_ctor((RectCollider *)(v2 + 6160));
  FIELD_U32(v2, 6160) = off_60BC30D8;
  FIELD_U16(v2, 6848) = 0;
  sub_602F2C84(v2 + 6852);
  return v2;
}
