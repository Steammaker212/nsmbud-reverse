/* sub_60595CB8
 * address: 0x60595CB8   size: 676   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60595CB8(_DWORD *a1)
{
  char v1; // r12
  _DWORD *v3; // r0
  int v4; // t1
  int (__fastcall ***v5)(_DWORD, int *); // r5
  int (__fastcall ***v6)(_DWORD, int *); // r5
  int (__fastcall ***v7)(_DWORD, int *); // r5
  _DWORD *v8; // r4
  int v9; // t1
  int (__fastcall ***v10)(_DWORD, int *); // r4

  v4 = a1[1529];
  v3 = a1 + 1529;
  if ( v4 == 3 )
  {
    *v3 = 0;
    v5 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 48);
    if ( ((unsigned int)&dword_60C7B374 & ~(1616469240 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v5 && (**v5)(v5, &dword_60C7B370) == 1 )
      sub_607A8354(v5);
  }
  if ( a1[1531] == 3 )
  {
    a1[1531] = 0;
    v6 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 52);
    if ( ((unsigned int)&dword_60C7B374 & ~(1616469408 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v6 && (**v6)(v6, &dword_60C7B370) == 1 )
      sub_607A8354(v6);
  }
  if ( a1[1533] == 3 )
  {
    a1[1533] = 0;
    v7 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 56);
    if ( ((unsigned int)&dword_60C7B374 & ~(1616469576 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v7 && (**v7)(v7, &dword_60C7B370) == 1 )
      sub_607A8354(v7);
  }
  v9 = a1[1535];
  v8 = a1 + 1535;
  if ( v9 == 3 )
  {
    *v8 = 0;
    v10 = *(int (__fastcall ****)(_DWORD, int *))(PlayerMgr_instance + 60);
    if ( ((unsigned int)&dword_60C7B374 & ~(1616469740 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v10 )
    {
      if ( (**v10)(v10, &dword_60C7B370) == 1 )
        sub_607A8354(v10);
    }
  }
}
