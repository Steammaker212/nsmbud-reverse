/* sub_6050DF1C
 * address: 0x6050DF1C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050DF1C(int a1, int a2)
{
  int result; // r0

  result = a2;
  if ( a2 > 4 )
    result = 3;
  if ( a2 < 0 )
    return 0;
  return result;
}
