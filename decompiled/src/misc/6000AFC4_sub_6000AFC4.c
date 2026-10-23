/* sub_6000AFC4
 * address: 0x6000AFC4   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6000AFC4(float *a1)
{
  float v2; // r1
  ActorBuildInfo v4; // [sp+4h] [bp-3Ch] BYREF

  memset(&v4.settings2, 0, 36);
  v4.settings1 = 1;
  v4.profile = Profile__get(0xBDu);
  v2 = a1[1];
  v4.position.x = *a1;
  v4.position.y = v2;
  v4.position.z = 480.0;
  v4.field_20 = 0;
  v4.eventId1 = 0;
  v4.eventId2 = 0;
  v4.field_28 = 0;
  return ActorMgr__create((void *)ActorMgr__instance, &v4, 0);
}
