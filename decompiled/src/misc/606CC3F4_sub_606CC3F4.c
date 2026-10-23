/* sub_606CC3F4
 * address: 0x606CC3F4   size: 20   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_606CC3F4(int a1)
{
  return (float)((FIELD_U32(a1, 20) >> 20) & 3);
}
