/* sub_606D45B8
 * address: 0x606D45B8   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606D45B8(_DWORD *a1, _DWORD *a2, int *a3, int a4)
{
  int *v4; // r0
  int v5; // r2
  int result; // r0

  *a1 = a3[2];
  if ( a4 == 3 )
  {
    v4 = a3 + 1558;
  }
  else if ( a4 == 2 )
  {
    v4 = a3 + 1537;
  }
  else
  {
    v4 = a3 + 27;
  }
  v5 = *v4;
  result = v4[1];
  *a2 = v5;
  a2[1] = result;
  return result;
}
