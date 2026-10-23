/* sub_60346A74
 * address: 0x60346A74   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall sub_60346A74(int a1)
{
  int v2; // r6
  float v3; // r7
  float v4; // r5
  _BYTE *v5; // r0
  ActorBuildInfo v7; // [sp+0h] [bp-48h] BYREF

  v2 = 0;
  FIELD_U32(a1, 7100) = 0;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 7080) + FIELD_F32(a1, 112);
  sub_60345A00(a1, 7);
  Enemy__beginState_DieFumi((Enemy *)a1);
  FIELD_U8(a1, 6056) = 2;
  FIELD_U32(a1, 120) = FIELD_U32(a1, 6104);
  FIELD_U32(a1, 124) = 1082130432;
  FIELD_U32(a1, 128) = 0;
  v3 = FIELD_F32(a1, 7044);
  v4 = FIELD_F32(a1, 7040);
  memset(&v7, 0, 40);
  v7.profile = Profile__get(0x26Bu);
  v7.position.x = v4;
  v7.position.y = v3;
  v7.position.z = 5000.0;
  v7.field_20 = 0;
  v7.eventId1 = 0;
  v7.eventId2 = 0;
  v7.field_28 = 0;
  v5 = ActorMgr__create((void *)ActorMgr__instance, &v7, 0);
  if ( v5 )
    v2 = *((_DWORD *)v5 + 2);
  FIELD_U32(a1, 7120) = v2;
  sub_60346400(a1, 0.0, 1.5, 2.0);
  return ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6312));
}
