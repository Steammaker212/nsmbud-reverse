/* sub_607A0514
 * address: 0x607A0514   size: 408   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607A0514(int a1, int a2)
{
  char v2; // r12
  _DWORD *v5; // r7
  _DWORD *v6; // r6
  _DWORD *v7; // r7
  int v8; // r4
  _DWORD *v9; // r5
  bool v10; // zf
  float v11; // s0
  int v12; // r4

  v5 = *(_DWORD **)(a1 + 64);
  if ( ((unsigned int)&dword_60C7B374 & ~(1618609460 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( v5 )
  {
    v6 = (_DWORD *)(*(int (__fastcall **)(_DWORD *, int *))*v5)(v5, &dword_60C7B370);
    if ( v6 )
      v6 = v5;
  }
  else
  {
    v6 = 0;
  }
  v7 = *(_DWORD **)(a2 + 64);
  if ( ((unsigned int)&dword_60C7B374 & ~(1618609592 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  v8 = 0;
  if ( v7 )
  {
    v9 = (_DWORD *)(*(int (__fastcall **)(_DWORD *, int *))*v7)(v7, &dword_60C7B370);
    if ( v9 )
      v9 = v7;
    v10 = v6 == 0;
    if ( v6 )
      v10 = v9 == 0;
    if ( !v10 )
    {
      if ( sub_60766708((int)v9) == 1 )
      {
        v11 = 1.0;
      }
      else
      {
        v12 = (*(int (__fastcall **)(_DWORD *, _DWORD))(*v6 + 156))(v6, v6[330]);
        v11 = flt_60B0C714[3 * v12 + (*(int (__fastcall **)(_DWORD *, _DWORD))(*v9 + 156))(v9, v9[330])];
      }
      ((void (__fastcall *)(_DWORD *, int, int, _DWORD, float))loc_60765458)(v6, a1, a2, 0, v11);
      return 1;
    }
  }
  return v8;
}
