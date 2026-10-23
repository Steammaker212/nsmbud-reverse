/* sub_600B2EF8
 * address: 0x600B2EF8   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_600B2EF8(int a1, int a2)
{
  char v2; // r12
  _BYTE *v5; // r6

  v5 = *(_BYTE **)(a2 + 64);
  if ( v5[533] == 1 )
  {
    if ( ((unsigned int)&dword_60C7B374 & ~(1611345700 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
    {
      dword_60C7B370 = (int)&off_60BC00B0;
      _cxa_guard_release(&dword_60C7B374);
    }
    if ( v5
      && (**(int (__fastcall ***)(_BYTE *, int *))v5)(v5, &dword_60C7B370) == 1
      && !(*(int (__fastcall **)(_BYTE *))(*(_DWORD *)v5 + 1156))(v5) )
    {
      (*(void (__fastcall **)(_BYTE *, int, int))(*(_DWORD *)v5 + 1164))(v5, a1, a2);
    }
  }
}
