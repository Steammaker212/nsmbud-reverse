/* sub_608F4A80
 * address: 0x608F4A80   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F4A80(int a1)
{
  *(_DWORD *)a1 = off_60C5C880;
  sub_60835558(a1 + 8);
  FIELD_U32(a1, 16) = FIELD_U32(dword_60CCF464, 36);
  FIELD_U32(a1, 192) = 0;
  FIELD_U8(a1, 8) = 2;
  return a1;
}
