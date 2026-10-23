/* sub_609962E4
 * address: 0x609962E4   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609962E4(unsigned __int8 *a1)
{
  int v1; // r1
  bool v2; // zf

  v1 = a1[84];
  v2 = v1 == 5;
  if ( v1 != 5 )
    v2 = v1 == 3;
  if ( v2 || v1 == 2 )
    return (*(int (__fastcall **)(unsigned __int8 *, int))(*(_DWORD *)a1 + 116))(a1, 5);
  else
    return sub_609917C0((int)a1);
}
