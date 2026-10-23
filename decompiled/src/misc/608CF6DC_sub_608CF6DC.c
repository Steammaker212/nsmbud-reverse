/* sub_608CF6DC
 * address: 0x608CF6DC   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608CF6DC(_DWORD *a1, int a2, int a3)
{
  int v6; // r0
  bool v7; // zf
  int v8; // r0

  if ( a1[6] )
  {
    v6 = a1[8];
    v7 = v6 == 0;
    if ( v6 )
      v7 = a1[9] == 0;
    if ( !v7 )
      sub_608CFE1C(a1 + 5);
  }
  v8 = (*(int (__fastcall **)(_DWORD *))(*a1 + 68))(a1);
  return sub_608CFDF8(a1 + 5, a1 + 13, (a2 + v8 - 1) & -v8, a2 + a3 - ((a2 + v8 - 1) & -v8));
}
