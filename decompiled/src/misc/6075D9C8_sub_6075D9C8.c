/* sub_6075D9C8
 * address: 0x6075D9C8   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6075D9C8(int a1)
{
  if ( (FIELD_U8(a1, 196) & 1) != 0 )
    return flt_60B0A87C[FIELD_U32(a1, 300)];
  else
    return 0.0;
}
