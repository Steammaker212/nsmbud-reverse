/* sub_60361EF8
 * address: 0x60361EF8   size: 476   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60361EF8(int a1, int a2)
{
  char v2; // r12
  int v3; // r5
  _BYTE *v5; // r4
  unsigned int result; // r0

  v3 = FIELD_U32(a1, 144);
  v5 = *(_BYTE **)(a2 + 2196);
  if ( ((unsigned int)&dword_60C823D4 & ~(1614159640 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C823D4) )
  {
    dword_60C823D0 = (int)&off_60BC00E0;
    _cxa_guard_release(&dword_60C823D4);
  }
  if ( v5 && (**(int (__fastcall ***)(_BYTE *, int *))v5)(v5, &dword_60C823D0) == 1 )
  {
    SE_OBJ_PNGN_ICEBALL_DISAPP_ref((int)v5);
    v5[19] = 1;
    return 1;
  }
  else
  {
    if ( ((unsigned int)&dword_60C823C4 & ~(1614159776 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C823C4) )
    {
      FireballBase_RTTI = (int)&off_60BC00E0;
      _cxa_guard_release(&dword_60C823C4);
    }
    if ( v5 && (**(int (__fastcall ***)(_BYTE *, int *))v5)(v5, &FireballBase_RTTI) == 1 )
    {
      (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)v5 + 240))(v5);
      return sub_601362A0((int)v5);
    }
    else
    {
      result = (unsigned __int8)v5[533];
      if ( result == 1 )
      {
        if ( ((unsigned int)&dword_60C7B37C & ~(1614159932 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
        {
          dword_60C7B378 = (int)&off_60BC00BC;
          _cxa_guard_release(&dword_60C7B37C);
        }
        result = (**(int (__fastcall ***)(_BYTE *, int *))v5)(v5, &dword_60C7B378);
        if ( v5 )
        {
          result ^= 1u;
          if ( !result )
          {
            result = *(_DWORD *)(FIELD_U32(a2, 5344) + 4) + 1;
            if ( result <= 1 )
              return (*(int (__fastcall **)(_BYTE *, int, _DWORD))(*(_DWORD *)v5 + 1168))(v5, v3, 0);
          }
        }
      }
    }
  }
  return result;
}
