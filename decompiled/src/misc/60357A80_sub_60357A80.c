/* sub_60357A80
 * address: 0x60357A80   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60357A80(int result)
{
  FIELD_U32(result, 156) += 83886080 * dword_60AF1FF8[FIELD_U32(result, 6284)];
  return result;
}
