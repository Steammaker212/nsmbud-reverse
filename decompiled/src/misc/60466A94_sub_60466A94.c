/* sub_60466A94
 * address: 0x60466A94   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60466A94(int a1, float *a2)
{
  float v2; // s16
  float v3; // r5
  ActorBuildInfo v5; // [sp+4h] [bp-44h] BYREF

  v2 = a2[1];
  v3 = *a2;
  memset(&v5.settings2, 0, 36);
  v5.settings1 = 0x8000000;
  v5.profile = Profile__get(0x24Fu);
  v5.position.x = v3;
  v5.position.y = v2 + 8.0;
  v5.position.z = 650.0;
  v5.field_20 = 0;
  v5.eventId1 = 0;
  v5.eventId2 = 0;
  v5.field_28 = 0;
  return ActorMgr__create((void *)ActorMgr__instance, &v5, 0);
}
