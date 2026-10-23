/* SE_OBJ_TEKKYU_CRASH_ref
 * address: 0x602C6524   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_TEKKYU_CRASH_ref(StageActor *a1)
{
  int result; // r0
  int v3; // r5
  float y; // r1
  int v5; // r6
  _DWORD v6[2]; // [sp+4h] [bp-2Ch] BYREF
  char v7; // [sp+Ch] [bp-24h]
  Vec2 out; // [sp+10h] [bp-20h] BYREF
  Vec3 position; // [sp+18h] [bp-18h] BYREF

  result = a1[43].field_230;
  if ( !result )
  {
    result = StageActor__isOffScreen(a1);
    if ( !result )
    {
      v6[0] = 15;
      v6[1] = unk_60C26388;
      v7 = 1;
      v3 = ((int (__fastcall *)(StageActor *))loc_606E74C4)(a1);
      y = FIELD_U32(a1, 0x6C).y;
      v5 = Global_BasicSoundActor2;
      position.x = FIELD_U32(a1, 0x6C).x;
      position.y = y;
      mapPositionToScreen(&out, &position);
      return sub_60813BDC(v5, "SE_OBJ_TEKKYU_CRASH", &out, v3, v6);
    }
  }
  return result;
}
