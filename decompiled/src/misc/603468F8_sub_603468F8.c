/* sub_603468F8
 * address: 0x603468F8   size: 320   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603468F8(int a1)
{
  int v2; // r6
  float v3; // r7
  float v4; // r5
  _BYTE *v5; // r0
  float v6; // s1
  float v7; // s0
  float v8; // s0
  ActorBuildInfo v10; // [sp+0h] [bp-48h] BYREF

  v2 = 0;
  FIELD_U32(a1, 7100) = 0;
  FIELD_F32(a1, 112) = FIELD_F32(a1, 7080) + FIELD_F32(a1, 112);
  sub_60345A00(a1, 7);
  FIELD_U32(a1, 120) = FIELD_U32(a1, 6104);
  FIELD_U32(a1, 124) = 1082130432;
  FIELD_U32(a1, 128) = 0;
  v3 = FIELD_F32(a1, 7044);
  v4 = FIELD_F32(a1, 7040);
  memset(&v10, 0, 40);
  v10.profile = Profile__get(0x26Bu);
  v10.position.x = v4;
  v10.position.y = v3;
  v10.position.z = 5000.0;
  v10.field_20 = 0;
  v10.eventId1 = 0;
  v10.eventId2 = 0;
  v10.field_28 = 0;
  v5 = ActorMgr__create((void *)ActorMgr__instance, &v10, 0);
  v6 = 1.5;
  if ( v5 )
    v2 = *((_DWORD *)v5 + 2);
  FIELD_U32(a1, 7120) = v2;
  v7 = FIELD_F32(a1, 120);
  if ( v7 <= 0.0 )
  {
    if ( v7 < 0.0 )
    {
      v8 = -2.0;
    }
    else
    {
      v8 = 0.0;
      v6 = 0.5;
    }
  }
  else
  {
    v8 = 2.0;
  }
  sub_60346400(a1, v8, v6, 2.0);
  ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6312));
  Enemy__beginState_DieFall((Enemy *)a1);
  FIELD_U8(a1, 6056) = 2;
  return 6056;
}
