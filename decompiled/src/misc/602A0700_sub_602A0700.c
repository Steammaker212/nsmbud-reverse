/* sub_602A0700
 * address: 0x602A0700   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602A0700(int result)
{
  unsigned int v1; // r1

  v1 = FIELD_U32(result, 20);
  FIELD_U32(result, 6120) = 10 * (unsigned __int8)(v1 >> 4) + 10;
  FIELD_U32(result, 6116) = (v1 & 0xF) + 1;
  FIELD_U8(result, 6128) = 1;
  return result;
}
