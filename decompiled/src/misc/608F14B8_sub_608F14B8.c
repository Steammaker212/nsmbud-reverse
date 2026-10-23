/* sub_608F14B8
 * address: 0x608F14B8   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F14B8(int result)
{
  unsigned int v1; // r1
  unsigned int v2; // r2
  int v3; // r1

  v1 = FIELD_U32(result, 1292);
  FIELD_U32(result, 1296) = v1;
  v2 = FIELD_U32(result, 1232);
  if ( v2 + v1 < v2 )
  {
    v3 = v1 % v2;
    FIELD_U32(result, 1296) = v3;
    FIELD_U32(result, 1292) = v3;
  }
  FIELD_U8(result, 1300) = 0;
  return result;
}
