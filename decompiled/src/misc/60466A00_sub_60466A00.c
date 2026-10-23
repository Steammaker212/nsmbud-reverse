/* sub_60466A00
 * address: 0x60466A00   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60466A00(int a1, Vec3 *a2, int a3)
{
  ActorBuildInfo v6; // [sp+4h] [bp-3Ch] BYREF

  memset(&v6.settings2, 0, 36);
  v6.settings1 = 184549376;
  v6.parentId = a3;
  v6.profile = Profile__get(0x256u);
  v6.position = *a2;
  v6.field_20 = 0;
  v6.eventId1 = 0;
  v6.eventId2 = 0;
  v6.field_28 = 0;
  return ActorMgr__create((void *)ActorMgr__instance, &v6, 0);
}
