/* sub_60582B14
 * address: 0x60582B14   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60582B14(int a1, Vec3 *a2, int a3, int a4)
{
  ActorBuildInfo v8; // [sp+4h] [bp-44h] BYREF

  memset(&v8.settings2, 0, 36);
  v8.settings1 = a4 | (16 * a3);
  v8.profile = Profile__get(0x18Fu);
  v8.position = *a2;
  v8.field_20 = 0;
  v8.eventId1 = 0;
  v8.eventId2 = 0;
  v8.field_28 = 0;
  return ActorMgr__create((void *)ActorMgr__instance, &v8, 0);
}
