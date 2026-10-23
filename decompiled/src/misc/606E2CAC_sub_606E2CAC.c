/* sub_606E2CAC
 * address: 0x606E2CAC   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_606E2CAC(_DWORD *a1)
{
  char v1; // r12
  int v3; // r5
  char v4; // r12
  int v5; // r5
  int v6; // r0
  bool v7; // zf
  int v8; // r0

  if ( ((unsigned int)&dword_60C7B37C & ~(1617833156 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
  {
    dword_60C7B378 = (int)&off_60BC00BC;
    _cxa_guard_release(&dword_60C7B37C);
  }
  v3 = 1;
  if ( a1 && (*(int (__fastcall **)(_DWORD *, int *))*a1)(a1, &dword_60C7B378) == 1 )
  {
    if ( ((unsigned int)&dword_60C7B374 & ~(1617833276 << v4) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( (*(int (__fastcall **)(_DWORD *, int *))*a1)(a1, &dword_60C7B370) != 1 )
      return 1;
    v5 = a1[304];
    v6 = sub_607C7184(a1);
    v7 = v6 == 0;
    if ( v6 )
      v7 = (v5 & 0x80000) == 0;
    if ( v7 )
      v8 = (*(int (__fastcall **)(_DWORD *))(*a1 + 80))(a1);
    else
      v8 = (*(int (__fastcall **)(int))(*(_DWORD *)v6 + 80))(v6);
    return (FIELD_U8(v8, 2224) & 1) == 0;
  }
  return v3;
}
