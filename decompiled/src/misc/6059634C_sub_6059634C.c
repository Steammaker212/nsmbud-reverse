/* sub_6059634C
 * address: 0x6059634C   size: 660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6059634C(int a1)
{
  char v1; // r12
  int (__fastcall ***v3)(_DWORD, int *); // r5
  int v4; // r1
  _BOOL4 result; // r0
  int (__fastcall ***v6)(_DWORD, int *); // r5
  int v7; // r1
  int (__fastcall ***v8)(_DWORD, int *); // r5
  int v9; // r1
  int (__fastcall ***v10)(_DWORD, int *); // r5

  v3 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 48);
  if ( ((unsigned int)&dword_60C7B37C & ~(1616470900 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  if ( !v3 || (**v3)(v3, &dword_60C7B378) != 1 || (v4 = sub_60764200(v3, a1), result = 1, !v4) )
  {
    v6 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 52);
    if ( ((unsigned int)&dword_60C7B37C & ~(1616471060 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( !v6 || (**v6)(v6, &dword_60C7B378) != 1 || (v7 = sub_60764200(v6, a1), result = 1, !v7) )
    {
      v8 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 56);
      if ( ((unsigned int)&dword_60C7B37C & ~(1616471220 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( !v8 || (**v8)(v8, &dword_60C7B378) != 1 || (v9 = sub_60764200(v8, a1), result = 1, !v9) )
      {
        v10 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 60);
        if ( ((unsigned int)&dword_60C7B37C & ~(1616471380 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        return v10 && (**v10)(v10, &dword_60C7B378) == 1 && sub_60764200(v10, a1) != 0;
      }
    }
  }
  return result;
}
