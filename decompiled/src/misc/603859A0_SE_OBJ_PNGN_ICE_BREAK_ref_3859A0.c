/* SE_OBJ_PNGN_ICE_BREAK_ref_3859A0
 * address: 0x603859A0   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall SE_OBJ_PNGN_ICE_BREAK_ref_3859A0(int a1)
{
  _BYTE *v2; // r5
  signed int result; // r0
  int v4; // r7
  float v5; // r1
  int v6; // r5
  Vec2 v7; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v2 = (_BYTE *)(a1 + 6333);
  if ( !FIELD_U8(a1, 6333) && FIELD_U8(a1, 6332) )
  {
    sub_60385760(a1);
    *v2 = 1;
  }
  result = sub_602F3978((unsigned __int8 *)(a1 + 6152));
  if ( result )
  {
    if ( result == 3 )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 216))(a1);
      return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 220))(a1);
    }
  }
  else
  {
    result = 6226;
    v4 = FIELD_S8(a1, 6226);
    if ( FIELD_U8(a1, 6226) )
    {
      sub_602F428C((unsigned __int8 *)(a1 + 6152));
      v5 = FIELD_F32(a1, 112);
      v6 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108);
      position.y = v5;
      mapPositionToScreen(&v7, &position);
      result = BasicSoundActor2_play(v6, "SE_OBJ_PNGN_ICE_BREAK", &v7.x, 0);
      if ( v4 == 3 )
      {
        return sub_602A74C0(a1);
      }
      else if ( v4 == 1 )
      {
        return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 352))(a1);
      }
    }
  }
  return result;
}
