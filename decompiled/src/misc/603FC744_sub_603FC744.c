/* sub_603FC744
 * address: 0x603FC744   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_603FC744(int a1)
{
  return (unsigned int)(FIELD_U32(a1, 24) - FIELD_U32(a1, 20) + (FIELD_U16(a1, 30) << 12)) >> 12;
}
