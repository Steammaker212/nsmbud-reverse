/* sub_60807FC0
 * address: 0x60807FC0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60807FC0(_DWORD *a1, int a2, int a3)
{
  _DWORD *v4; // r5
  int v5; // r4

  v4 = a1 + 20;
  v5 = (*(int (__fastcall **)(_DWORD *, _DWORD *, int))(*a1 + 24))(a1, a1 + 20, a2);
  if ( v5 == 1 )
    sub_60808570(1, v4, a3);
  if ( *v4 )
  {
    sub_608B0390(*v4, 1);
    if ( *v4 )
      sub_608B0444(*v4, 0, 1.0);
  }
  return v5;
}
