/* sub_608D3158
 * address: 0x608D3158   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D3158(int a1)
{
  if ( !FIELD_U8(a1, 1517) )
  {
    sub_608D3A9C(a1);
    FIELD_U8(a1, 1517) = 1;
  }
  FIELD_U8(a1, 1516) = 0;
  return 0;
}
