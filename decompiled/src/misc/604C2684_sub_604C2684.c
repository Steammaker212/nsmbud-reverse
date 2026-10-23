/* sub_604C2684
 * address: 0x604C2684   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C2684(int a1)
{
  int result; // r0

  sub_60502C04(a1 + 4056, &unk_60B02F38, 3);
  FIELD_U8(a1, 5110) = 1;
  FIELD_U8(a1, 14173) = 1;
  FIELD_U8(a1, 5099) = 0;
  FIELD_U8(a1, 5096) = 1;
  FIELD_U8(a1, 14182) = 0;
  FIELD_U8(a1, 14188) = 0;
  *(_BYTE *)(FIELD_U32(a1, 13884) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 13888) + 64) &= ~1u;
  result = FIELD_U32(a1, 13872);
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
