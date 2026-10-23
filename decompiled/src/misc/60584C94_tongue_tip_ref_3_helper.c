/* tongue_tip_ref_3_helper
 * address: 0x60584C94   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall tongue_tip_ref_3_helper(int a1, Vec3 *a2, int a3)
{
  float y; // s16
  float WrappedXPos; // s0
  ActorBuildInfo v8; // [sp+4h] [bp-4Ch] BYREF

  y = FIELD_F32(a2, 0x4);
  WrappedXPos = AreaTask_getWrappedXPos(AreaTask_intance, FIELD_F32(a2, 0x0));
  TileMgr_setTile(
    TileMgr_instance,
    (unsigned int)(float)((float)(int)(float)(WrappedXPos * 0.0625) * 16.0),
    (unsigned int)(float)((float)(int)(float)(y * -0.0625) * 16.0),
    0,
    0);
  memset(&v8.settings2, 0, 36);
  v8.settings1 = a3;
  v8.profile = Profile__get(0x1A8u);
  v8.position = *a2;
  v8.field_20 = 0;
  v8.eventId1 = 0;
  v8.eventId2 = 0;
  v8.field_28 = 0;
  return ActorMgr__create((void *)ActorMgr__instance, &v8, 0);
}
