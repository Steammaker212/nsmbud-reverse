/* sub_60913708
 * address: 0x60913708   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60913708(int result, int a2)
{
  int v2; // r4

  v2 = result;
  if ( a2 )
  {
    dword_60CC7970(FIELD_U32(result, 192), a2 & 3 | (2 * a2) & 8 | 0x10);
    FIELD_U32(v2, 416) = 0;
    FIELD_U32(v2, 420) = 0;
    return 0;
  }
  return result;
}
