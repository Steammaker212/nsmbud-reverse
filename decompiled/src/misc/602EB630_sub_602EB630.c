/* sub_602EB630
 * address: 0x602EB630   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_602EB630(_DWORD *a1)
{
  int *result; // r0
  int v2; // t1

  if ( *((float *)a1 + 29) > 3300.0 )
    a1[29] = 1162756096;
  a1[25] = -1103101952;
  v2 = a1[1860];
  result = a1 + 1860;
  *result = v2 | 1;
  return result;
}
