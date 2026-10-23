/* sub_607D704C
 * address: 0x607D704C   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607D704C(int a1, int a2, int a3)
{
  int v6; // r0
  int (__fastcall ***v7)(_DWORD, int *); // r5
  char v8; // r12

  v6 = sub_607D6C28(a1);
  if ( v6 )
    (*(void (__fastcall **)(int, int, int))(*(_DWORD *)v6 + 1200))(v6, a2, a3);
  if ( !a2 )
  {
    v7 = (int (__fastcall ***)(_DWORD, int *))sub_607CFB50(a1);
    if ( ((unsigned int)&dword_60C7B374 & ~(1618833568 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v7 )
    {
      if ( (**v7)(v7, &dword_60C7B370) == 1 )
        (*(void (__fastcall **)(int, int (__fastcall ***)(_DWORD, int *)))(*(_DWORD *)a1 + 1212))(a1, v7);
    }
  }
}
