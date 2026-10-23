/* sub_60988938
 * address: 0x60988938   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60988938(int a1, int a2, int a3, int *a4, int a5, unsigned int a6, const void *a7, int a8)
{
  int result; // r0

  result = *a4;
  if ( *a4 + a8 < a6 )
  {
    qmemcpy((void *)(a3 + 2 * result), a7, 2 * a8);
    result = *a4 + a8;
    *a4 = result;
  }
  return result;
}
