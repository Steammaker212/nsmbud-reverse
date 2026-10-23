/* sub_6032C26C
 * address: 0x6032C26C   size: 440   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6032C26C(int a1, int a2)
{
  char v2; // r12
  _BYTE *v5; // r7
  _BYTE *v6; // r6
  int (__fastcall ***v7)(_DWORD, int *); // r7
  int v8; // r0
  char v9; // r12

  if ( FIELD_U32(a2, 136) != 15 )
  {
    v5 = *(_BYTE **)(a2 + 64);
    if ( ((unsigned int)&dword_60C7B364 & ~(1613939352 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    if ( v5 )
    {
      v6 = (_BYTE *)(**(int (__fastcall ***)(_BYTE *, int *))v5)(v5, &StageActor_RTTI);
      if ( v6 )
        v6 = v5;
    }
    else
    {
      v6 = 0;
    }
    v7 = *(int (__fastcall ****)(_DWORD, int *))(a1 + 64);
    if ( ((unsigned int)&dword_60C866E8 & ~(1613939484 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C866E8) )
    {
      dword_60C866E4 = (int)&off_60BC04AC;
      _cxa_guard_release(&dword_60C866E8);
    }
    if ( v7 )
    {
      v8 = (**v7)(v7, &dword_60C866E4);
      if ( v6 )
      {
        if ( v8 == 1 && (unsigned __int8)(v6[533] - 1) <= 1u )
        {
          if ( ((unsigned int)&dword_60C7B37C & ~(1613939628 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
          {
            dword_60C7B378 = (int)&off_60BC00BC;
            _cxa_guard_release(&dword_60C7B37C);
          }
          if ( (**(int (__fastcall ***)(_BYTE *, int *))v6)(v6, &dword_60C7B378) == 1 )
            (*(void (__fastcall **)(_BYTE *, int, int))(*(_DWORD *)v6 + 1164))(v6, a1, a2);
        }
      }
    }
  }
}
