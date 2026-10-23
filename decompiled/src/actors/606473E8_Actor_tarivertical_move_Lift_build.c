/* Actor_tarivertical_move_Lift_build
 * address: 0x606473E8   size: 280   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_tarivertical_move_Lift_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1BE0u);
  sub_606429C0((StateActor *)v2, a1);
  *(_DWORD *)v2 = off_60C1394C;
  FIELD_U32(v2, 6104) = 0;
  memset((void *)(v2 + 6240), 0, 92);
  FIELD_U32(v2, 6332) = 1065353216;
  FIELD_U8(v2, 6336) = 0;
  sead_IDisposer_ctor((sead_IDisposer *)(v2 + 6340));
  FIELD_U32(v2, 6340) = off_60BC6E38;
  FIELD_U32(v2, 6356) = 0;
  memset((void *)(v2 + 6108), 0, 132);
  RectCollider_ctor((RectCollider *)(v2 + 6360));
  FIELD_U32(v2, 6360) = off_60BC30D8;
  FIELD_U32(v2, 7096) = 0;
  FIELD_U8(v2, 7100) = 0;
  memset((void *)(v2 + 7016), 0, 77);
  FIELD_U32(v2, 7132) = 0;
  FIELD_U32(v2, 7128) = 0;
  FIELD_U32(v2, 7124) = 0;
  FIELD_U32(v2, 7120) = 0;
  FIELD_U32(v2, 7116) = 0;
  FIELD_U32(v2, 7112) = 0;
  FIELD_U32(v2, 7104) = 0;
  FIELD_U32(v2, 7108) = 0;
  return v2;
}
