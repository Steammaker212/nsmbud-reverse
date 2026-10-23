/* SE_OBJ_PNGN_ICE_BREAK_ref_36CFB4
 * address: 0x6036CFB4   size: 428   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_OBJ_PNGN_ICE_BREAK_ref_36CFB4(int a1, int a2)
{
  int result; // r0
  _BYTE *v5; // r4
  float v6; // r1
  int v7; // r6
  float v8; // s0
  _DWORD *v9; // r6
  char v10; // r12
  char v11; // r0
  int v12; // r4
  Vec2 v13; // [sp+0h] [bp-30h] BYREF
  Vec3 position; // [sp+8h] [bp-28h] BYREF

  v5 = (_BYTE *)(a1 + 7309);
  result = FIELD_U8(a1, 7309);
  if ( !result )
  {
    result = FIELD_U8(a1, 7310);
    if ( !FIELD_U8(a1, 7310) )
    {
      FIELD_U8(a1, 6292) = 1;
      ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6072));
      v6 = FIELD_F32(a1, 112);
      v7 = Global_BasicSoundActor2;
      position.x = FIELD_F32(a1, 108);
      position.y = v6;
      mapPositionToScreen(&v13, &position);
      BasicSoundActor2_play(v7, "SE_OBJ_PNGN_ICE_BREAK", &v13.x, 0);
      v8 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
      position.x = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
      position.y = v8;
      sub_602F335C((_BYTE *)(a1 + 6728), (int *)&position, 4u);
      *v5 = 1;
      v9 = *(_DWORD **)(a1 + 56);
      if ( ((unsigned int)dword_60C7B430 & ~(1614205084 << v10) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
      {
        Enemy_RTTI = (int)&off_60BC00C8;
        _cxa_guard_release(dword_60C7B430);
      }
      if ( v9 && (*(int (__fastcall **)(_DWORD *, int *))*v9)(v9, &Enemy_RTTI) == 1 )
      {
        if ( a2 )
        {
          v11 = FIELD_U8(a2, 84);
          v12 = FIELD_F32(a2, 108) < FIELD_F32(a1, 108);
        }
        else
        {
          v12 = FIELD_U32(a1, 80);
          v11 = -1;
        }
        (*(void (__fastcall **)(_DWORD *, _DWORD))(*v9 + 68))(v9, v11);
        v9[1571] = v12;
      }
      FIELD_U8(a1, 19) = 1;
      return 1;
    }
  }
  return result;
}
