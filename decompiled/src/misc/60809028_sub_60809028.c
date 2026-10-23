/* sub_60809028
 * address: 0x60809028   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60809028(_DWORD *a1, int a2)
{
  int v4; // r0
  _DWORD *v5; // r6
  int v6; // r5

  v5 = a1 + 16;
  v4 = a1[16];
  if ( v4 )
    sub_608AF208(v4, 0);
  *((_BYTE *)a1 + 44) = 1;
  v6 = (*(int (__fastcall **)(_DWORD *, _DWORD *, int))(*a1 + 24))(a1, v5, a2);
  if ( sub_60816CBC(dword_60CC6B68) == 1 && *v5 )
    sub_608AF328(*v5, 1, 0);
  if ( v6 == 1 )
    sub_60807574(a1);
  return v6;
}
