/* sub_60478864
 * address: 0x60478864   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60478864(int a1)
{
  int v1; // r0

  v1 = FIELD_U32(a1, 92);
  if ( v1 )
    return FIELD_F32(v1, 124);
  else
    return 0.0;
}
