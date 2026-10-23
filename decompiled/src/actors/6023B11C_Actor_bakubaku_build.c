/* Actor_bakubaku_build
 * address: 0x6023B11C   size: 316   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_bakubaku_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x31D8u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BD9640;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6300));
  sub_601531B4((CollisionMgr *)(v2 + 6616));
  memset((void *)(v2 + 11968), 0, 36);
  memset((void *)(v2 + 12036), 0, 58);
  FIELD_U8(v2, 12106) = 0;
  FIELD_U16(v2, 12104) = 0;
  FIELD_U32(v2, 12096) = 0;
  FIELD_U32(v2, 12100) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 12108));
  FIELD_U32(v2, 12108) = off_60BC1450;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 12212));
  FIELD_U32(v2, 12212) = off_60BC1450;
  FIELD_U32(v2, 12316) = &ActorScaler_vtable;
  FIELD_U32(v2, 12320) = 1065353216;
  FIELD_U32(v2, 12324) = 1065353216;
  FIELD_U32(v2, 12328) = 1065353216;
  FIELD_U32(v2, 12332) = 1065353216;
  FIELD_U32(v2, 12336) = 0;
  FIELD_U32(v2, 12340) = 0;
  FIELD_U32(v2, 12344) = v2;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 12348));
  FIELD_U32(v2, 12652) = off_60BD9920;
  memset((void *)(v2 + 12720), 0, 0x24u);
  return v2;
}
