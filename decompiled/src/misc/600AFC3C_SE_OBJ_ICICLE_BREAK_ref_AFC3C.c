/* SE_OBJ_ICICLE_BREAK_ref_AFC3C
 * address: 0x600AFC3C   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_OBJ_ICICLE_BREAK_ref_AFC3C(int a1, int a2)
{
  char v2; // r12
  int v5; // r7
  int v6; // r5
  char v7; // r12
  bool v8; // zf
  float v9; // r1
  int v10; // r6
  Vec3 v11; // [sp+4h] [bp-34h] BYREF
  Vec2 out; // [sp+10h] [bp-28h] BYREF
  Vec3 position; // [sp+18h] [bp-20h] BYREF

  v5 = FIELD_U32(a1, 64);
  if ( ((unsigned int)&dword_60C82EAC & ~(1611332704 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C82EAC) )
  {
    dword_60C82EA8 = (int)&off_60BC00C8;
    _cxa_guard_release(&dword_60C82EAC);
  }
  if ( v5 )
  {
    v6 = (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C82EA8);
    if ( v6 )
      v6 = v5;
    v8 = v6 == 0;
    if ( v6 )
    {
      v5 = FIELD_U32(a2, 64);
      v8 = v5 == 0;
    }
    if ( !v8 && FIELD_U8(v5, 533) == 3 )
    {
      if ( ((unsigned int)dword_60C7B430 & ~(1611332852 << v7) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
      {
        Enemy_RTTI = (int)&off_60BC00C8;
        _cxa_guard_release(dword_60C7B430);
      }
      if ( (**(int (__fastcall ***)(int, int *))v5)(v5, &Enemy_RTTI) == 1 && (FIELD_U8(a2, 153) & 2) != 0 )
      {
        sub_600AE93C(v6, v5);
        v9 = FIELD_F32(v6, 112);
        v11.x = FIELD_F32(v6, 108);
        v11.y = v9;
        v11.z = 4500.0;
        EffectData_create(1055, &v11, 0, 0);
        v10 = Global_BasicSoundActor2;
        position.x = v11.x;
        position.y = v11.y;
        mapPositionToScreen(&out, &position);
        BasicSoundActor2_play(v10, "SE_OBJ_ICICLE_BREAK", &out.x, 0);
        FIELD_U8(v6, 19) = 1;
        FIELD_U8(a1, 110) |= 2u;
      }
    }
  }
}
