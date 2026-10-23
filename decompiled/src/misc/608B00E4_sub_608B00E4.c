/* sub_608B00E4
 * address: 0x608B00E4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_608B00E4(_DWORD *result)
{
  int v1; // r1
  int v2; // r1
  int v3; // r1

  v1 = result[37];
  if ( v1 < result[36] )
    result[37] = v1 + 1;
  v2 = result[45];
  if ( v2 < result[44] )
    result[45] = v2 + 1;
  v3 = result[69];
  if ( v3 < result[68] )
    result[69] = v3 + 1;
  return result;
}
