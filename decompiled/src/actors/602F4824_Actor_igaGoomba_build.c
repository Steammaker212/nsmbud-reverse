/* Actor_igaGoomba_build
 * address: 0x602F4824   size: 452   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall Actor_igaGoomba_build(ActorBuildInfo *a1)
{
  int v2; // r4

  v2 = operator_new(0x1AF8u);
  Enemy__ctor((Enemy *)v2, a1);
  *(_DWORD *)v2 = off_60BE76BC;
  FIELD_U32(v2, 6316) = 0;
  FIELD_U32(v2, 6312) = 0;
  FIELD_U32(v2, 6308) = 0;
  FIELD_U32(v2, 6304) = 0;
  FIELD_U32(v2, 6300) = 0;
  FIELD_U8(v2, 6320) = 1;
  FIELD_U8(v2, 6321) = 1;
  FIELD_U32(v2, 6324) = 0;
  FIELD_U32(v2, 6328) = 0;
  FIELD_U32(v2, 6332) = 1056964608;
  FIELD_U32(v2, 6336) = 1086324736;
  FIELD_U32(v2, 6340) = 0;
  FIELD_U32(v2, 6344) = 0;
  FIELD_U32(v2, 6348) = 300;
  FIELD_U32(v2, 6352) = 0;
  FIELD_U32(v2, 6356) = 0x10000000;
  FIELD_U8(v2, 6360) = 0;
  FIELD_U8(v2, 6361) = 0;
  FIELD_U32(v2, 6364) = 0;
  FIELD_U32(v2, 6368) = 0;
  FIELD_U32(v2, 6372) = 0;
  sub_602A8564((_DWORD *)(v2 + 6376), FIELD_U32(v2, 8));
  sub_602A40A0((_DWORD *)(v2 + 6412), FIELD_U32(v2, 8));
  FIELD_U32(v2, 6448) = v2;
  FIELD_U32(v2, 6452) = off_60BE2BE4;
  FIELD_U8(v2, 6456) = 0;
  EffectWrapper_ctor((EffectWrapper *)(v2 + 6460));
  FIELD_U32(v2, 6460) = off_60BC1450;
  ActiveCollider_ctor((ActiveCollider *)(v2 + 6564));
  FIELD_U32(v2, 6868) = &ActorScaler_vtable;
  FIELD_U32(v2, 6872) = 1065353216;
  FIELD_U32(v2, 6876) = 1065353216;
  FIELD_U32(v2, 6880) = 1065353216;
  FIELD_U32(v2, 6884) = 1065353216;
  FIELD_U32(v2, 6888) = 0;
  FIELD_U32(v2, 6892) = 0;
  FIELD_U32(v2, 6896) = v2;
  FIELD_U32(v2, 6900) = off_60BE7960;
  return v2;
}
