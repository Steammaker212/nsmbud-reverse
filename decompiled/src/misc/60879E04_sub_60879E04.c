/* sub_60879E04
 * address: 0x60879E04   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60879E04(int *result)
{
  int v1; // r3
  bool v2; // zf
  int v3; // r3

  v1 = *result;
  result[1] = 0;
  result[2] = 8;
  v2 = 80 * v1 == 0;
  v3 = 80 * v1;
  result[3] = v3;
  result[4] = 8;
  result[5] = 0;
  result[6] = -1;
  if ( !v2 )
  {
    result[6] = 0;
    result[1] = v3;
    result[2] = 8;
  }
  return result;
}
