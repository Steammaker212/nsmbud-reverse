/* sub_60603428
 * address: 0x60603428   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60603428(int a1, _DWORD *a2)
{
  char v2; // r12
  _BYTE *v5; // r6

  if ( a2[34] != 15 )
  {
    v5 = (_BYTE *)a2[16];
    if ( (unsigned __int8)(v5[533] - 1) <= 1u && a2[35] != 3 )
    {
      if ( ((unsigned int)&dword_60C7B37C & ~(1616917620 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B37C) )
      {
        dword_60C7B378 = (int)&off_60BC00BC;
        _cxa_guard_release(&dword_60C7B37C);
      }
      if ( v5 )
      {
        if ( (**(int (__fastcall ***)(_BYTE *, int *))v5)(v5, &dword_60C7B378) == 1 )
          (*(void (__fastcall **)(_BYTE *, int, _DWORD *))(*(_DWORD *)v5 + 1164))(v5, a1, a2);
      }
    }
  }
}
