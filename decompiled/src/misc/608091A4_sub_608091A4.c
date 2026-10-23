/* sub_608091A4
 * address: 0x608091A4   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608091A4(_DWORD *a1, int a2)
{
  int v4; // r0
  _DWORD *v5; // r6
  int v6; // r5

  v5 = a1 + 15;
  v4 = a1[15];
  if ( v4 )
    sub_608AF208(v4, 0);
  v6 = (*(int (__fastcall **)(_DWORD *, _DWORD *, int))(*a1 + 24))(a1, v5, a2);
  sub_60807574(a1);
  return v6;
}
