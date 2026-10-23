/* sub_607CD478
 * address: 0x607CD478   size: 944   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607CD478(int a1, int a2)
{
  char v2; // r12
  int v5; // r6
  char v6; // r12
  int v7; // r7
  _DWORD *v8; // r8
  int v9; // r9
  char v10; // r12
  char v11; // r12
  int v12; // r0
  bool v13; // zf
  int v14; // r7
  int v15; // r0
  int v16; // r0
  int v17; // r0

  v5 = FIELD_U32(a1, 64);
  if ( ((unsigned int)&dword_60C7B408 & ~(1618793624 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
  {
    dword_60C7B404 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B408);
  }
  if ( v5 && (**(int (__fastcall ***)(int, int *))v5)(v5, &dword_60C7B404) == 1 && FIELD_U32(v5, 11360) )
  {
    v7 = FIELD_U32(a2, 64);
    if ( ((unsigned int)&dword_60C7B37C & ~(1618793760 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    v8 = 0;
    v9 = 1;
    if ( v7 && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B378) == 1 )
    {
      if ( v5 == sub_60765884(v7) || v7 == sub_60765884(v5) )
        return;
      if ( ((unsigned int)&dword_60C7B408 & ~(1618793916 << v10) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
      {
        dword_60C7B404 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B408);
      }
      v9 = 0;
      if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B404) == 1 )
      {
        v8 = (_DWORD *)v7;
        if ( !FIELD_U32(v7, 11360) )
          return;
      }
      else
      {
        v8 = (_DWORD *)v7;
      }
    }
    if ( sub_607CD8A8(a1, a2) )
      return;
    v12 = FIELD_U32(a2, 136);
    v13 = v12 == 15;
    if ( v12 != 15 )
      v13 = v12 == 0;
    if ( v13 )
    {
      if ( ((unsigned int)&dword_60C7B374 & ~(1618794092 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      v14 = 1;
      if ( !v9 )
      {
        v16 = (*(int (__fastcall **)(_DWORD *, int *))*v8)(v8, &dword_60C7B370);
        v14 = 0;
        if ( v8 )
        {
          if ( v16 == 1 )
          {
            if ( sub_60760004(v5, (int)v8) || sub_607CDA84(a1, a2) )
              return;
            v17 = (*(int (__fastcall **)(_DWORD *, _DWORD))(*v8 + 156))(v8, v8[330]);
            v14 = 0;
            ((void (__fastcall *)(int, int, int, _DWORD, float))loc_60765458)(v5, a1, a2, 0, flt_60B0D154[v17]);
          }
        }
      }
      if ( FIELD_U32(a2, 136) != 2 )
        return;
    }
    else
    {
      v14 = v9;
      if ( v12 != 2 )
        return;
    }
    if ( ((unsigned int)&dword_60C7B408 & ~(1618794208 << v11) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
    {
      dword_60C7B404 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B408);
    }
    if ( !v14 )
    {
      v15 = (*(int (__fastcall **)(_DWORD *, int *))*v8)(v8, &dword_60C7B404);
      if ( v8 )
      {
        if ( v15 == 1 && !sub_60760004(v5, (int)v8) && !sub_607CDA84(a1, a2) )
          JUMPOUT(0x60765458);
      }
    }
  }
}
