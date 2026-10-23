/* sub_60466974
 * address: 0x60466974   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60466974(int a1, Vec3 *a2)
{
  ActorBuildInfo v4; // [sp+4h] [bp-3Ch] BYREF

  memset(&v4.settings2, 0, 36);
  v4.settings1 = 117440512;
  v4.profile = Profile__get(0x255u);
  v4.position = *a2;
  v4.field_20 = 0;
  v4.eventId1 = 0;
  v4.eventId2 = 0;
  v4.field_28 = 0;
  return ActorMgr__create((void *)ActorMgr__instance, &v4, 0);
}
