/* sub_60204658
 * address: 0x60204658   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60204658(int a1, int a2, int a3)
{
  float *v5; // r0
  float v6; // r7
  float v7; // r6
  float v8; // r9
  unsigned int v9; // r0
  ActorBuildInfo v11; // [sp+4h] [bp-4Ch] BYREF

  v5 = (float *)sub_601DFFE4(a2);
  v6 = v5[18];
  v7 = v5[19];
  v8 = v5[20];
  memset(&v11.settings2, 0, 40);
  v9 = sub_6021EE50(2, a3);
  v11.profile = Profile__get(v9);
  v11.settings1 = 1;
  v11.position.x = v6;
  v11.position.y = v7;
  v11.position.z = v8;
  v11.field_1C = 0;
  v11.eventId2 = 2;
  v11.field_20 = 0;
  v11.movementId = FIELD_U32(a2, 8);
  v11.linkId = a3;
  return ActorMgr__create((void *)ActorMgr__instance, &v11, 0);
}
