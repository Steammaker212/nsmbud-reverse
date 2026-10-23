/* sub_60808374
 * address: 0x60808374   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60808374(_DWORD *a1, int a2, int a3, int a4)
{
  _DWORD *v7; // r5
  int v8; // r4

  v7 = a1 + 13;
  v8 = (*(int (__fastcall **)(_DWORD *, _DWORD *, int))(*a1 + 32))(a1, a1 + 13, a2);
  if ( v8 == 1 )
    sub_60808570(1, v7, a3);
  if ( (unsigned int)(a4 - 0x100000) < 2 || a4 == 1 )
  {
    if ( *v7 )
    {
      sub_608B0390(*v7, 1);
      if ( *v7 )
      {
        sub_608B0444(*v7, 0, 1.0);
        return v8;
      }
    }
  }
  else
  {
    sub_60807574(a1);
  }
  return v8;
}
