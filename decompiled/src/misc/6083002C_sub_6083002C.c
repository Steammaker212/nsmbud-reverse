/* sub_6083002C
 * address: 0x6083002C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083002C(int a1)
{
  FIELD_U32(dword_60C99DD4, 1376) |= 2u;
  FIELD_F32(a1, 644) = (float)(FIELD_U32(a1, 20) >> 28) * 8.0;
  return 1;
}
