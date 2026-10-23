/* sub_60772990
 * address: 0x60772990   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60772990(int a1)
{
  if ( (FIELD_U8(a1, 6906) & 1) != 0 )
    return flt_60B0A898[sub_6014C540(a1 + 1328)] * 4.0;
  else
    return 0.0;
}
