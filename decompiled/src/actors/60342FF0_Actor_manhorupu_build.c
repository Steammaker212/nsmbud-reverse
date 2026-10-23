/* Actor_manhorupu_build
 * address: 0x60342FF0   size: 388   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_manhorupu_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x3260u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BEDBBC;
  RectCollider_ctor((RectCollider *)(v2 + 6312));
  FIELD_U32(v2, 6312) = off_60BC30D8;
  memset((void *)(v2 + 7028), 0, 36);
  FIELD_U32(v2, 7064) = 2;
  FIELD_U32(v2, 7092) = 0;
  FIELD_U32(v2, 7088) = 0;
  FIELD_U32(v2, 7084) = 0;
  FIELD_U32(v2, 7080) = 0;
  FIELD_U32(v2, 7076) = 0;
  FIELD_U32(v2, 7072) = 0;
  FIELD_U32(v2, 7068) = 0;
  FIELD_U32(v2, 7096) = -1;
  FIELD_U32(v2, 7116) = 0;
  FIELD_U32(v2, 7120) = 0;
  FIELD_U8(v2, 7112) = 0;
  FIELD_U32(v2, 7108) = 0;
  FIELD_U32(v2, 7104) = 0;
  FIELD_U32(v2, 7100) = 0;
  sub_601531B4((CollisionMgr *)(v2 + 7128));
  sub_602A8564((_DWORD *)(v2 + 12480), FIELD_U32(v2, 8));
  sub_602A40A0((_DWORD *)(v2 + 12516), FIELD_U32(v2, 8));
  ActiveCollider_ctor((ActiveCollider *)(v2 + 12552));
  FIELD_U32(v2, 12856) = &ActorScaler_vtable;
  FIELD_U32(v2, 12860) = 1065353216;
  FIELD_U32(v2, 12864) = 1065353216;
  FIELD_U32(v2, 12868) = 1065353216;
  FIELD_U32(v2, 12872) = 1065353216;
  FIELD_U32(v2, 12876) = 0;
  FIELD_U32(v2, 12880) = 0;
  FIELD_U32(v2, 12884) = v2;
  FIELD_U32(v2, 12888) = off_60BEDE60;
  FIELD_U32(v2, 12892) = 0;
  return v2;
}
