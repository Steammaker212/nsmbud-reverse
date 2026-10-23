/* sub_605B2DE8
 * address: 0x605B2DE8   size: 628   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605B2DE8(int a1)
{
  char v1; // r12
  int v3; // r5
  _BOOL4 result; // r0
  int v5; // r5
  int v6; // r5
  int v7; // r5

  v3 = FIELD_U32(PlayerMgr_instance, 48);
  if ( ((unsigned int)&dword_60C7B374 & ~(1616588304 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( !v3
    || (**(int (__fastcall ***)(int, int *))v3)(v3, &dword_60C7B370) != 1
    || (result = 1, FIELD_U32(v3, 11408) != a1) )
  {
    v5 = FIELD_U32(PlayerMgr_instance, 52);
    if ( ((unsigned int)&dword_60C7B374 & ~(1616588456 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( !v5
      || (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B370) != 1
      || (result = 1, FIELD_U32(v5, 11408) != a1) )
    {
      v6 = FIELD_U32(PlayerMgr_instance, 56);
      if ( ((unsigned int)&dword_60C7B374 & ~(1616588608 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      if ( !v6
        || (**(int (__fastcall ***)(int, int *))v6)(v6, &dword_60C7B370) != 1
        || (result = 1, FIELD_U32(v6, 11408) != a1) )
      {
        v7 = FIELD_U32(PlayerMgr_instance, 60);
        if ( ((unsigned int)&dword_60C7B374 & ~(1616588760 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
        {
          dword_60C7B370 = (int)&off_60BC00B0;
          _cxa_guard_release(&dword_60C7B374);
        }
        return v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B370) == 1 && FIELD_U32(v7, 11408) == a1;
      }
    }
  }
  return result;
}
