/* sub_60375FB0
 * address: 0x60375FB0   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60375FB0(StateActor *a1)
{
  int eventId1; // r0
  int v3; // r3
  __int64 v4; // r0
  _BYTE *v5; // r0
  Vec2 v7; // [sp+0h] [bp-18h] BYREF

  eventId1 = (unsigned __int8)FIELD_U8(a1, 0x21B);
  if ( eventId1 )
  {
    v3 = eventId1 - 33;
    HIDWORD(v4) = 1u >> (33 - eventId1);
    LODWORD(v4) = 1 << (eventId1 - 1);
    if ( v3 >= 0 )
    {
      HIDWORD(v4) = 1 << v3;
      LODWORD(v4) = 0;
    }
    if ( (FIELD_U64(EventMgr__instance, 16) & v4) != 0 )
    {
      v5 = (_BYTE *)FIELD_U32(a1, 0x278);
      if ( v5 )
        *v5 = 1;
      return sub_60373B78((int)a1);
    }
  }
  if ( ((StageActor__distanceToPlayer(a1, &v7) << 24) | 0xFFFFFFu) > 0x4FFFFFE
    || (float)((float)(v7.y * v7.y) + (float)(v7.x * v7.x)) > unk_60C96460 )
  {
    return sub_60373B78((int)a1);
  }
  return (*(int (__fastcall **)(StateActor *, void *))(FIELD_U32(a1, 0x0) + 192))(a1, &unk_60C963A8);
}
