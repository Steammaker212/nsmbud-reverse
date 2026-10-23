/* SE_OBJ_NO_DAMAGE_BOUND_ref_FF9B4
 * address: 0x600FF9B4   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_OBJ_NO_DAMAGE_BOUND_ref_FF9B4(int a1, int a2)
{
  char v2; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r6
  int v5; // r5
  char v6; // r12
  bool v7; // zf
  int v8; // r0
  bool v9; // zf
  float v10; // r1
  int v11; // r5
  Vec2 v12; // [sp+0h] [bp-20h] BYREF
  Vec3 position; // [sp+8h] [bp-18h] BYREF

  v3 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 144);
  if ( ((unsigned int)&dword_60C8110C & ~(1611659732 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C8110C) )
  {
    dword_60C81108 = (int)&off_60BC2CD4;
    _cxa_guard_release(&dword_60C8110C);
  }
  if ( v3 )
  {
    v5 = (**v3)(v3, &dword_60C81108);
    if ( v5 )
      v5 = (int)v3;
    v7 = v5 == 0;
    if ( v5 )
    {
      a2 = FIELD_U32(a2, 2196);
      v7 = a2 == 0;
    }
    if ( !v7 && FIELD_U8(a2, 533) == 1 )
    {
      if ( ((unsigned int)&dword_60C7B374 & ~(1611659880 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      if ( (**(int (__fastcall ***)(int, int *))a2)(a2, &dword_60C7B370) == 1
        && FIELD_F32(a2, 112) >= (float)(FIELD_F32(v5, 112) + 8.0)
        && FIELD_F32(a2, 124) < 0.0 )
      {
        sub_602A3178(a2, &dword_60CC4B7C);
        v8 = (*(int (__fastcall **)(int))(*(_DWORD *)a2 + 644))(a2);
        v9 = v8 == 0;
        if ( !v8 )
          v9 = (FIELD_U8(a2, 1205) & 0x40) == 0;
        if ( v9 )
        {
          v10 = FIELD_F32(a2, 112);
          v11 = Global_BasicSoundActor1;
          position.x = FIELD_F32(a2, 108);
          position.y = v10;
          mapPositionToScreen(&v12, &position);
          BasicSoundActor1_playSound(v11, "SE_OBJ_NO_DAMAGE_BOUND", (int)&v12, 0);
        }
      }
    }
  }
}
