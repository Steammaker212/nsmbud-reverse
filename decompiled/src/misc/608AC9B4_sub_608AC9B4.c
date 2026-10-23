/* sub_608AC9B4
 * address: 0x608AC9B4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608AC9B4(int a1, int a2, int a3)
{
  int result; // r0
  int v7; // r7

  result = FIELD_U32(a1, 4);
  if ( result != a1 )
  {
    do
    {
      v7 = FIELD_U32(result, 4);
      sub_608AF328(result - 404, a2, a3);
      result = v7;
    }
    while ( v7 != a1 );
  }
  return result;
}
