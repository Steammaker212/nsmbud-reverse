/* sub_6079FB3C
 * address: 0x6079FB3C   size: 804   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6079FB3C(int a1, int a2)
{
  char v2; // r12
  _DWORD *v5; // r6
  char v6; // r12
  int v7; // r8
  int v8; // r7
  int v9; // r0
  bool v10; // zf
  int v11; // r0

  v5 = *(_DWORD **)(a1 + 64);
  if ( ((unsigned int)&dword_60C7B374 & ~(1618606940 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
  {
    dword_60C7B370 = (int)&off_60BC00B0;
    _cxa_guard_release(&dword_60C7B374);
  }
  if ( v5 && (*(int (__fastcall **)(_DWORD *, int *))*v5)(v5, &dword_60C7B370) == 1 )
  {
    v7 = FIELD_U32(a2, 64);
    if ( FIELD_U32(a2, 136) > 2u )
      goto LABEL_46;
    if ( ((unsigned int)&dword_60C7B37C & ~(1618607072 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
    {
      dword_60C7B378 = (int)&off_60BC00BC;
      _cxa_guard_release(&dword_60C7B37C);
    }
    if ( v7 )
    {
      v8 = (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B378);
      if ( v8 )
        v8 = v7;
    }
    else
    {
      v8 = 0;
    }
    if ( v5 != (_DWORD *)sub_60765884(v8) && v8 != sub_60765884((int)v5) )
    {
LABEL_46:
      if ( FIELD_U32(a1, 136) == 15 || !sub_6079FEC4(a1, a2) )
      {
        v9 = FIELD_U32(a2, 136);
        if ( v9 == 2 )
        {
          if ( ((unsigned int)&dword_60C7B408 & ~(1618607492 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B408) )
          {
            dword_60C7B404 = (int)&off_60BC00B0;
            _cxa_guard_release(&dword_60C7B408);
          }
          if ( v7
            && (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B404) == 1
            && !sub_60760004((int)v5, v7)
            && !sub_607A01BC(a1, a2)
            && FIELD_U32(v7, 11360) )
          {
            (*(void (__fastcall **)(_DWORD *, _DWORD))(*v5 + 156))(v5, v5[330]);
            JUMPOUT(0x60765458);
          }
        }
        else
        {
          v10 = v9 == 0;
          if ( !v9 )
            v10 = FIELD_U8(v7, 533) == 1;
          if ( v10 )
          {
            if ( ((unsigned int)&dword_60C7B374 & ~(1618607292 << v6) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
            {
              dword_60C7B370 = (int)&off_60BC00B0;
              _cxa_guard_release(&dword_60C7B374);
            }
            if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B370) == 1 && !sub_60760004((int)v5, v7) )
            {
              v11 = FIELD_U32(v7, 8);
              if ( v5[3248] != v11 && v5[3249] != v11 && !sub_607A01BC(a1, a2) )
                sub_607A0514(a1, a2);
            }
          }
        }
      }
    }
  }
}
