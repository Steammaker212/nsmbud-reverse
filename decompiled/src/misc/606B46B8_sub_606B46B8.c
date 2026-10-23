/* sub_606B46B8
 * address: 0x606B46B8   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int (__fastcall ***sub_606B46B8())(_DWORD, int *)
{
  char v0; // r12
  int v1; // r7
  int v2; // r0
  int v3; // r5
  int (__fastcall ***v4)(_DWORD, int *); // r4

  v1 = 0;
  v2 = PlayerMgr_instance;
  while ( 1 )
  {
    v3 = *(_DWORD *)(v2 + 4 * v1 + 48);
    if ( ((unsigned int)&dword_60C7B37C & ~(1617643384 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v3 && (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B378) == 1 )
    {
      if ( ((unsigned int)&dword_60C7B364 & ~(1617643468 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      if ( (**(int (__fastcall ***)(int, int *))v3)(v3, &StageActor_RTTI) == 1
        && (FIELD_U16(PlayerMgr_instance, 66) & (unsigned __int16)(1 << FIELD_U8(v3, 84))) != 0 )
      {
        break;
      }
    }
    v2 = PlayerMgr_instance;
    if ( ++v1 >= 4 )
    {
      v4 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 48);
      if ( ((unsigned int)&dword_60C7B37C & ~(1617643608 << v0) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( !v4 )
        return 0;
      v3 = (**v4)(v4, &dword_60C7B378);
      if ( v3 )
        return v4;
      return (int (__fastcall ***)(_DWORD, int *))v3;
    }
  }
  return (int (__fastcall ***)(_DWORD, int *))v3;
}
