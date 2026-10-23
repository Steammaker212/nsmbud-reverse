/* sub_608C6FEC
 * address: 0x608C6FEC   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C6FEC(int result)
{
  int v1; // r2
  int v2; // r1

  v1 = FIELD_U32(result, 1544);
  v2 = result + 772;
  if ( v1 != result )
  {
    if ( v1 != v2 )
      return result;
    v2 = result;
  }
  FIELD_U32(v2, 768) = 0;
  FIELD_U32(result, 1544) = v2;
  return result;
}
