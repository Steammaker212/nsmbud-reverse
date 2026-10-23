/* sub_603FC760
 * address: 0x603FC760   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_603FC760(int a1)
{
  return (float)(FIELD_U32(a1, 24) - FIELD_U32(a1, 20) + (FIELD_U16(a1, 30) << 12)) * 0.00024414;
}
