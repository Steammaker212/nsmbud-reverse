/* sub_60584B74
 * address: 0x60584B74   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60584B74(int a1, float *a2, int a3, int a4, int a5, char a6)
{
  float v7; // s18
  float WrappedXPos; // s16
  int v11; // r0
  float v12; // s18
  float v13; // s16
  ActorBuildInfo v15; // [sp+0h] [bp-50h] BYREF

  v7 = a2[1];
  WrappedXPos = AreaTask_getWrappedXPos(AreaTask_intance, *a2);
  memset(&v15, 0, sizeof(v15));
  v11 = a4 & 0xF;
  if ( a4 == -1 )
    v11 = 3;
  v12 = v7 + 8.0;
  v13 = WrappedXPos + -8.0;
  if ( a3 == 1 )
  {
    v15.settings1 = (v11 << 12) | 0x10000;
    v15.profile = Profile__get(0x1A9u);
  }
  else
  {
    v15.settings1 = v11;
    v15.profile = Profile__get(0x190u);
    if ( a5 == 1 )
      ++FIELD_U32(a1, 33812);
  }
  v15.position.x = v13;
  v15.position.y = v12;
  v15.position.z = 550.0;
  v15.field_20 = 0;
  v15.eventId1 = 0;
  v15.eventId2 = 0;
  v15.linkId = a6;
  v15.field_28 = 0;
  return ActorMgr__create((void *)ActorMgr__instance, &v15, 1);
}
