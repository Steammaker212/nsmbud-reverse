/* sub_6068C438
 * address: 0x6068C438   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6068C438(int a1)
{
  return (FIELD_U32(a1, 16) & 0xF0) == 32 || (unsigned __int8)FIELD_U32(a1, 16) == 48;
}
