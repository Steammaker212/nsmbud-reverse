/* sub_60239B9C
 * address: 0x60239B9C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60239B9C(int result, _DWORD *a2, int a3, int a4)
{
  int v5; // r5
  int v7; // r7

  v5 = a3;
  v7 = result;
  if ( a3 < a4 )
  {
    do
      result = sub_60239158(v7, a2, v5++, 0);
    while ( a4 != v5 );
  }
  return result;
}
