/* sub_608527DC
 * address: 0x608527DC   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608527DC(_DWORD *a1, int a2, int a3, int a4, int a5)
{
  int result; // r0
  int v10; // r0
  int v11; // r5

  result = sub_60851D10(a2);
  if ( result > a4 )
  {
    v10 = sub_60851D24(a2);
    v11 = sub_60855AD8(a3, v10 + 36 * a4);
    (*(void (__fastcall **)(_DWORD *, int))(*a1 + 44))(a1, v11);
    a1[12] = v11;
    return (*(int (__fastcall **)(_DWORD *, int))(*a1 + 16))(a1, a5);
  }
  return result;
}
