/* sub_601C7300
 * address: 0x601C7300   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_601C7300(int a1)
{
  float v1; // s16

  v1 = FIELD_F32(a1, 1152);
  return v1 + *((float *)sub_601C6BF0(a1) + 11);
}
