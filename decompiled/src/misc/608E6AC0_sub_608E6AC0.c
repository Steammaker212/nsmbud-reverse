/* sub_608E6AC0
 * address: 0x608E6AC0   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E6AC0(_BYTE *a1, int a2, int a3)
{
  bool v6; // zf
  int v7; // r0

  v6 = a3 == 0;
  if ( a3 )
    v6 = a1[76] == 0;
  if ( v6 )
    return 0;
  v7 = (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 32))(a1, a3);
  if ( !a2 || v7 != 1 )
    return 0;
  else
    return (*(int (__fastcall **)(_BYTE *, int, int))(*(_DWORD *)a1 + 76))(a1, a2, a3);
}
