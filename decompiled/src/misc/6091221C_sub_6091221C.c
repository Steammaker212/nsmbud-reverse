/* sub_6091221C
 * address: 0x6091221C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6091221C(int *a1, int a2)
{
  int v2; // r2

  v2 = *a1;
  if ( *a1 == 3 )
  {
    if ( dword_60CCFC6C )
      return dword_60CCFC6C(a1[1]);
    return 0;
  }
  if ( v2 != 2 )
  {
    if ( v2 == 1 && dword_60CCFC68 )
      return dword_60CCFC68(a1[1]);
    return 0;
  }
  return ((int (__fastcall *)(int))a1[1])(a2);
}
