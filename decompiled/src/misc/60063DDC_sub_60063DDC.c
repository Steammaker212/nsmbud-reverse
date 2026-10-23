/* sub_60063DDC
 * address: 0x60063DDC   size: 332   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60063DDC(Enemy *a1, int a2, int a3)
{
  int v4; // r4
  int v5; // r5
  char v6; // r12
  char v7; // r12
  int v8; // r6

  v4 = Enemy__vfC8(a1, a2, a3);
  if ( v4 == 1 )
  {
    v5 = *(_DWORD *)sub_60008598(ActorMgr__instance, 373, FIELD_U32(ActorMgr__instance, 27172));
    if ( ((unsigned int)&dword_60C81104 & ~(1611021868 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
    {
      dword_60C81100 = (int)&off_60BC66E8;
      _cxa_guard_release(&dword_60C81104);
    }
    if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C81100) == 1 )
    {
      v8 = FIELD_U32(a3, 64);
      if ( ((unsigned int)&dword_60C7B37C & ~(1611021988 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( v8 && (**(int (__fastcall ***)(int, int *))v8)(v8, &dword_60C7B378) == 1 )
      {
        FIELD_U32(v5, 9436) = FIELD_S8(v8, 84);
        FIELD_U32(v5, 9440) = 60;
      }
    }
  }
  return v4;
}
