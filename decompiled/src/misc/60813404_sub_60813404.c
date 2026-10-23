/* sub_60813404
 * address: 0x60813404   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60813404(int a1)
{
  int v2; // r5
  int result; // r0

  v2 = 20;
  do
  {
    result = FIELD_U32(a1, 468);
    if ( result )
      result = sub_60813048(a1);
    a1 += 500;
    --v2;
  }
  while ( v2 );
  return result;
}
