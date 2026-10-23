/* FinalBowser__collisionPlayer
 * address: 0x60071610   size: 500   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60024E78
// 
// Overridden by: None
void __fastcall FinalBowser__collisionPlayer(int a1, int a2, int a3)
{
  char v3; // r12
  char *v5; // r4
  float v6; // s2
  float v7; // s4
  unsigned int v8; // r0
  int v9; // r1
  int v10; // r5
  char v11; // r12

  v5 = *(char **)(a3 + 64);
  if ( ((unsigned int)&dword_60C7B374 & ~(1611077168 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( v5
    && (**(int (__fastcall ***)(char *, int *))v5)(v5, &dword_60C7B370) == 1
    && !(*(int (__fastcall **)(char *))(*(_DWORD *)v5 + 1156))(v5) )
  {
    v6 = FIELD_F32(a1, 108);
    v7 = *((float *)v5 + 27);
    *((_DWORD *)v5 + 2393) = 127;
    (*(void (__fastcall **)(char *, int, bool, int, float, float, int))(*(_DWORD *)v5 + 1176))(
      v5,
      4,
      v7 < v6,
      1,
      5.0,
      0.0,
      1);
    sub_607734E8((int)v5, (int)"SE_PLY_CRASH_KOOPA", 0, 0);
    v8 = (unsigned __int8)v5[84];
    v9 = 0;
    if ( v8 < 4 )
      v9 = (char)v8;
    *(_WORD *)(a1 + 2 * v9 + 6140) = 32;
    (*(void (__fastcall **)(char *, int, _DWORD))(*(_DWORD *)v5 + 1172))(v5, a1, 0);
    v10 = *(_DWORD *)sub_60008598(ActorMgr__instance, 373, *(_DWORD *)(ActorMgr__instance + 27172));
    if ( ((unsigned int)&dword_60C81104 & ~(1611077504 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
    {
      dword_60C81100 = (int)&off_60BC66E8;
      _cxa_guard_release(&dword_60C81104);
    }
    if ( v10 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v10)(v10, &dword_60C81100) == 1 )
      {
        FIELD_U32(v10, 9436) = v5[84];
        FIELD_U32(v10, 9440) = 60;
      }
    }
  }
}
