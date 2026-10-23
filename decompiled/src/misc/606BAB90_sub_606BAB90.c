/* sub_606BAB90
 * address: 0x606BAB90   size: 432   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StageActor *__fastcall sub_606BAB90(StageActor *a1, ActorBuildInfo *a2)
{
  char v2; // r12
  int v3; // r8
  int v4; // r6
  StageActor *v6; // [sp+0h] [bp-48h]

  v6 = StageActor__ctor(a1, a2);
  v3 = 12;
  FIELD_U32(v6, 0x0) = (int)off_60C1B3FC;
  do
  {
    v4 = *(_DWORD *)(PlayerMgr_instance + 4 * v3);
    if ( ((unsigned int)&dword_60C7B37C & ~(1617669212 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v4 && (**(int (__fastcall ***)(int, int *))v4)(v4, &dword_60C7B378) == 1 )
    {
      if ( ((unsigned int)&dword_60C7B364 & ~(1617669296 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( (**(int (__fastcall ***)(int, int *))v4)(v4, &StageActor_RTTI) == 1
        && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << FIELD_U8(v4, 84))) != 0 )
      {
        sub_607641D8(v4);
      }
    }
    ++v3;
  }
  while ( v3 != 16 );
  FIELD_U8(v6, 0x13) = 1;
  return v6;
}
