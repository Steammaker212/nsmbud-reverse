/* SE_BOSS_CMN_MAGIC_EXTINCT_ref
 * address: 0x600B9D94   size: 740   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall SE_BOSS_CMN_MAGIC_EXTINCT_ref(int a1, int a2)
{
  char v2; // r12
  int v5; // r5
  unsigned __int8 *v6; // r4
  char v7; // r12
  int v8; // r0
  float v9; // r1
  int v10; // r6
  char v11; // r12
  Vec2 v12; // [sp+0h] [bp-28h] BYREF
  Vec3 position; // [sp+8h] [bp-20h] BYREF

  v5 = FIELD_U32(a1, 64);
  v6 = *(unsigned __int8 **)(a2 + 64);
  if ( ((unsigned int)dword_60C81F18 & ~(1611374012 << v2) & 1) == 0 && _cxa_guard_acquire(dword_60C81F18) )
  {
    dword_60C81F14 = (int)&off_60BC00C8;
    _cxa_guard_release(dword_60C81F18);
  }
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C81F14) == 1 )
  {
    if ( (unsigned int)v6[533] - 1 > 1 )
    {
      v8 = FIELD_U32(a2, 140);
      if ( v8 == 2 )
      {
        FIELD_U8(a1, 110) |= 2u;
        v9 = FIELD_F32(v5, 112);
        v10 = Global_BasicSoundActor2;
        position.x = FIELD_F32(v5, 108);
        position.y = v9;
        mapPositionToScreen(&v12, &position);
        BasicSoundActor2_play(v10, "SE_BOSS_CMN_MAGIC_EXTINCT", &v12.x, 0);
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 280))(v5);
        FIELD_U8(v5, 19) = 1;
        if ( ((unsigned int)&dword_60C823CC & ~(1611374604 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C823CC) )
        {
          dword_60C823C8 = (int)&off_60BC7C30;
          _cxa_guard_release(&dword_60C823CC);
        }
        if ( (**(int (__fastcall ***)(unsigned __int8 *, int *))v6)(v6, &dword_60C823C8) == 1 )
          SE_OBJ_PNGN_ICEBALL_DISAPP_ref((int)v6);
      }
      else if ( v8 == 1 )
      {
        FIELD_U8(a1, 110) |= 2u;
        if ( ((unsigned int)&dword_60C823BC & ~(1611374360 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C823BC) )
        {
          dword_60C823B8 = (int)&off_60BC7C24;
          _cxa_guard_release(&dword_60C823BC);
        }
        if ( (**(int (__fastcall ***)(unsigned __int8 *, int *))v6)(v6, &dword_60C823B8) == 1 )
        {
          (*(void (__fastcall **)(unsigned __int8 *))(*(_DWORD *)v6 + 240))(v6);
          sub_601362A0(v6);
        }
      }
    }
    else
    {
      if ( ((unsigned int)&dword_60C7B374 & ~(1611374144 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      if ( (**(int (__fastcall ***)(unsigned __int8 *, int *))v6)(v6, &dword_60C7B370) == 1 )
      {
        FIELD_U8(a1, 110) |= 2u;
        (*(void (__fastcall **)(unsigned __int8 *, int, int))(*(_DWORD *)v6 + 1164))(v6, a1, a2);
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 288))(v5);
        (*(void (__fastcall **)(int))(*(_DWORD *)v5 + 244))(v5);
      }
    }
  }
}
