/* sub_6031776C
 * address: 0x6031776C   size: 280   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6031776C(int a1)
{
  int result; // r0
  int v3; // r5
  float v4; // r1
  Vec2 out; // [sp+8h] [bp-20h] BYREF
  Vec3 position; // [sp+10h] [bp-18h] BYREF

  sub_602A3EFC(a1 + 7764, 24, 0.0625);
  result = FIELD_U8(a1, 7669);
  if ( FIELD_U8(a1, 7669) )
  {
    FIELD_U32(a1, 7620) = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    FIELD_U8(a1, 7668) = 1;
    FIELD_U8(a1, 7674) = 1;
    v3 = Global_BasicSoundActor1;
    v4 = FIELD_F32(a1, 112);
    if ( FIELD_U16(a1, 7642) == 1 )
    {
      position.x = FIELD_F32(a1, 108);
      position.y = v4;
      mapPositionToScreen(&out, &position);
      sub_60813810(v3, (int)"SE_EMY_BIG_KALON", (int)&out, 1, 0);
    }
    else
    {
      position.x = FIELD_F32(a1, 108);
      position.y = v4;
      mapPositionToScreen(&out, &position);
      sub_60813810(v3, (int)"SE_EMY_KALON", (int)&out, 1, 0);
    }
    return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9345C);
  }
  return result;
}
