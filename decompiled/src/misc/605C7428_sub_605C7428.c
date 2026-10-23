/* sub_605C7428
 * address: 0x605C7428   size: 32   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605C7428(int result)
{
  FIELD_U8(result, 2942) = dword_60B05728[FIELD_U8(result, 2944)];
  FIELD_U32(result, 2956) = 1;
  return result;
}
