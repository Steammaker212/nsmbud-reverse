/* Actor_Player_ice_build
 * address: 0x60784FA4   size: 120   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_Player_ice_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x768u);
  StageActor__ctor((StageActor *)v2, a1);
  *(_DWORD *)v2 = off_60C249E8;
  FIELD_U32(v2, 644) = 0;
  sub_602F2C84(v2 + 648);
  RectCollider_ctor((RectCollider *)(v2 + 1216));
  FIELD_U32(v2, 1216) = off_60BC30D8;
  FIELD_U32(v2, 1872) = 0;
  FIELD_U32(v2, 1876) = 0;
  FIELD_U32(v2, 1880) = 0;
  FIELD_U32(v2, 1884) = 1065353216;
  FIELD_U32(v2, 1888) = 1065353216;
  FIELD_U32(v2, 1892) = 1065353216;
  return v2;
}
