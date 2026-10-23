/* sub_604C3418
 * address: 0x604C3418   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C3418(int a1)
{
  bool v1; // r3
  int result; // r0

  FIELD_U8(a1, 14172) = 1;
  FIELD_U8(a1, 14178) = 0;
  FIELD_U8(a1, 5099) = 0;
  FIELD_U8(a1, 5096) = 1;
  v1 = FIELD_U32(dword_60CC6D78, 416) == 0;
  *(_BYTE *)(FIELD_U32(a1, 13884) + 64) = *(_BYTE *)(FIELD_U32(a1, 13884) + 64) & 0xFE | v1;
  *(_BYTE *)(FIELD_U32(a1, 13888) + 64) = *(_BYTE *)(FIELD_U32(a1, 13888) + 64) & 0xFE | v1;
  *(_BYTE *)(FIELD_U32(a1, 13872) + 64) = *(_BYTE *)(FIELD_U32(a1, 13872) + 64) & 0xFE | v1;
  result = FIELD_U32(a1, 13872);
  FIELD_U8(result, 64) |= 1u;
  return result;
}
