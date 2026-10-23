/* sub_603B175C
 * address: 0x603B175C   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B175C(int a1, int a2, int a3)
{
  char v3; // r12
  int v6; // r4
  int v7; // r7

  v6 = 0;
  if ( FIELD_U32(a3, 136) != 15 )
  {
    v7 = FIELD_U32(a3, 64);
    if ( ((unsigned int)&dword_60C7B374 & ~(1614485388 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v7 )
    {
      if ( (**(int (__fastcall ***)(int, int *))v7)(v7, &dword_60C7B370) == 1 )
      {
        v6 = 1;
        if ( !(*(int (__fastcall **)(int))(*(_DWORD *)v7 + 1156))(v7) )
          (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v7 + 1164))(v7, a2, a3);
      }
    }
  }
  return v6;
}
