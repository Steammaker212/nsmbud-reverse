/* sub_6099ACD0
 * address: 0x6099ACD0   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099ACD0(int a1)
{
  *(_DWORD *)a1 = off_60C60B88;
  sub_608500C8(a1, 0, 12, 0, 0, 0, 1);
  FIELD_U32(a1, 24) = -1;
  FIELD_U32(a1, 28) = -1;
  FIELD_U8(a1, 16) = 0;
  return a1;
}
