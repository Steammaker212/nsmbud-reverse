/* sub_600B056C
 * address: 0x600B056C   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_600B056C(StageActor *a1)
{
  int v2; // r0
  Vec3 a2; // [sp+14h] [bp-14h] BYREF

  StageActor__cullCheck(a1, 0);
  CollisionMgr_process(&FIELD_U32(a1 + (1) * 644, 0x4));
  v2 = *(_DWORD *)&FIELD_U8(a1 + (4) * 644, 0x128);
  if ( (v2 & 1) != 0
    || (v2 & 0x10400) == 0x400
    || (v2 & 0x440000) != 0 && (v2 & 0x10000000) == 0
    || (v2 & 0x880000) != 0 && (v2 & 0x20000000) == 0 )
  {
    if ( (v2 & 0x10) != 0 )
      (*(void (__fastcall **)(StageActor *, _DWORD))(FIELD_U32(a1, 0x0) + 296))(a1, 0);
    FIELD_U8(a1, 0x13) = 1;
  }
  StateMgr__execute((StateMgr *)&a1[9].aCollider.field_64);
  (*(void (__fastcall **)(StageActor *))(FIELD_U32(a1, 0x0) + 256))(a1);
  a2.x = FIELD_F32(a1, 0x6C) + FIELD_F32(a1, 0x23C);
  a2.y = FIELD_F32(a1, 0x70) + FIELD_F32(a1, 0x240);
  a2.z = FIELD_F32(a1, 0x74) + FIELD_F32(a1, 0x244);
  LightSource_update2((LightSource *)&a1[9].aCollider.info.distToEdge.y, &a2, 0, 0, 0, 0, 0, 0);
  return 1;
}
