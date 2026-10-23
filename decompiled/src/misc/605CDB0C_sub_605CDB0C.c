/* sub_605CDB0C
 * address: 0x605CDB0C   size: 36   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605CDB0C(int a1)
{
  return byte_60AFE3F4[FIELD_U8(a1, 106)] * FIELD_U32(a1, 80) - 0x40000000;
}
