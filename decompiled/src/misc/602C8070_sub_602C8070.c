/* sub_602C8070
 * address: 0x602C8070   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C8070(int a1)
{
  if ( !FIELD_U32(a1, 6352) )
  {
    sub_602A3EFC(a1 + 6328, 24, 0.02);
    FIELD_U32(a1, 80) ^= 1u;
    FIELD_F32(a1, 120) = -FIELD_F32(a1, 120);
    FIELD_U32(a1, 124) = 1069547520;
  }
  return 1;
}
