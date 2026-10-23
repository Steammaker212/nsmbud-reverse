/* sub_601C2634
 * address: 0x601C2634   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C2634(_DWORD *a1, int a2)
{
  int result; // r0

  result = a1[263];
  if ( result == 1 )
  {
    result = sub_605EB988(**(_DWORD **)(*(_DWORD *)(a1[236] + 12) + 12), a2);
    if ( result == 1 )
    {
      sub_601B69E0((int)a1);
      return (*(int (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
    }
  }
  else if ( !result )
  {
    result = sub_601860F8((int)a1);
    if ( result == 1 )
    {
      sub_601C6044(a1, a1 + 271);
      sub_60169018(a1);
      sub_601C503C(a1);
      sub_601C3AA4(a1, 9);
      result = 1;
      a1[263] = 1;
    }
  }
  return result;
}
