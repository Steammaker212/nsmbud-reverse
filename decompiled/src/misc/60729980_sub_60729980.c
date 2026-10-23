/* sub_60729980
 * address: 0x60729980   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60729980(int result)
{
  int v1; // r2
  int v2; // r3

  v1 = 0;
  FIELD_U32(result, 16) = 0;
  FIELD_U32(result, 20) = 0;
  FIELD_U8(result, 2360) = 0;
  do
  {
    v2 = result + v1;
    v1 += 24;
    FIELD_U32(v2, 24) = 0;
    FIELD_U8(v2, 32) = 0;
    FIELD_U32(v2, 28) = 0;
    FIELD_U32(v2, 36) = 0;
    FIELD_U8(v2, 44) = 0;
    FIELD_U32(v2, 40) = 0;
  }
  while ( v1 != 768 );
  FIELD_U8(result, 2328) = -1;
  FIELD_U32(result, 2332) = 0;
  FIELD_U32(result, 2336) = 0;
  FIELD_U32(result, 2340) = 0;
  FIELD_U32(result, 2344) = 0;
  FIELD_U32(result, 2348) = 0;
  FIELD_U32(result, 2352) = 0;
  FIELD_U32(result, 2356) = 0;
  return result;
}
