/* sub_60584A10
 * address: 0x60584A10   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_60584A10(int a1, int a2, float *a3, int a4, int a5)
{
  float v8; // s18
  float WrappedXPos; // s16
  int v10; // r6
  Profile *v11; // r0
  ActorBuildInfo buildInfo; // [sp+8h] [bp-58h] BYREF

  if ( (unsigned int)FIELD_U8(a2, 552) - 1 <= 1 )
    sub_6040B3B0((_BYTE *)dword_60C9A1F0, FIELD_U8(dword_60C9A1F0, 6551));
  v8 = a3[1];
  WrappedXPos = AreaTask_getWrappedXPos(AreaTask_intance, *a3);
  TileMgr_setTile(TileMgr_instance, (unsigned int)WrappedXPos, (unsigned int)(float)-v8, 0, 0);
  memset(&buildInfo, 0, sizeof(buildInfo));
  v10 = a4 & 0xF;
  if ( a4 == -1 )
    v10 = 3;
  if ( (a5 & 0xFF0000) != 0x20000 )
  {
    v11 = Profile__get(0x190u);
    ++FIELD_U32(a1, 33808);
  }
  else
  {
    v10 = (v10 << 12) | 0x10000;
    v11 = Profile__get(0x1A9u);
  }
  buildInfo.settings1 = v10;
  buildInfo.profile = v11;
  buildInfo.position.x = WrappedXPos + -8.0;
  buildInfo.position.y = v8 + 8.0;
  buildInfo.position.z = 0.0;
  buildInfo.field_20 = 0;
  buildInfo.eventId1 = 0;
  buildInfo.eventId2 = 0;
  buildInfo.field_28 = 0;
  return ActorMgr__create((void *)ActorMgr__instance, &buildInfo, 0);
}
