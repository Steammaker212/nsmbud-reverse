/* SE_BOSS_JR_CLOWN_MOVE_ref
 * address: 0x6008D0C0   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_BOSS_JR_CLOWN_MOVE_ref(int a1)
{
  float v2; // s18
  float v3; // s16
  float v4; // s0
  int result; // r0
  int v6; // r5
  char v7; // r12
  Vec2 v8; // [sp+0h] [bp-30h] BYREF
  Vec3 position; // [sp+8h] [bp-28h] BYREF

  j_ModelWrapper_updateAnims(FIELD_U32(a1, 6304));
  v2 = FIELD_F32(a1, 112);
  v3 = ((float (__fastcall *)(int, float, float, float, float))loc_60832560)(
         a1 + 112,
         FIELD_F32(a1, 15296),
         0.1,
         6.0,
         0.1);
  v4 = FIELD_F32(a1, 112);
  FIELD_F32(a1, 124) = v2 - v4;
  position.x = FIELD_F32(a1, 108);
  position.y = v4;
  mapPositionToScreen(&v8, &position);
  sub_60813574(a1 + 9476, "SE_BOSS_JR_CLOWN_MOVE", &v8, 0);
  result = ((int (__fastcall *)(int))loc_601005C0)(a1);
  if ( v3 < 1.0 )
  {
    v6 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
    if ( ((unsigned int)&dword_60C81760 & ~(1611190656 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C81760) )
    {
      dword_60C8175C = (int)&off_60BC6E94;
      _cxa_guard_release(&dword_60C81760);
    }
    if ( v6 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C8175C) == 1 )
        (*(void (__fastcall **)(int, void *))(*(_DWORD *)v6 + 192))(v6, &unk_60C819A8);
    }
    return (*(int (__fastcall **)(int, void *))(*(_DWORD *)a1 + 192))(a1, &unk_60C81FE0);
  }
  return result;
}
