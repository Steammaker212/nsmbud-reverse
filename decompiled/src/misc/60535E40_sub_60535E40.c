/* sub_60535E40
 * address: 0x60535E40   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60535E40(int a1)
{
  int result; // r0

  sub_604741D8((_DWORD *)(a1 + 12092), 0, &dword_60CAADF4, 0);
  sub_6047EFCC(a1 + 15740, 0);
  FIELD_U8(a1, 16200) = 1;
  sub_6047EFCC(a1 + 15740, 1);
  FIELD_U8(a1, 16201) = 1;
  sub_6047EFCC(a1 + 15740, 2);
  FIELD_U8(a1, 16202) = 1;
  sub_6047EFCC(a1 + 15740, 3);
  FIELD_U8(a1, 16203) = 1;
  *(_BYTE *)(FIELD_U32(a1, 52632) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52636) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52640) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52644) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52648) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52652) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52656) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52660) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52664) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52668) + 64) |= 1u;
  FIELD_U8(a1, 83625) = 1;
  *(_BYTE *)(FIELD_U32(a1, 52600) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52604) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52608) + 64) |= 1u;
  result = FIELD_U32(a1, 52612);
  FIELD_U8(result, 64) |= 1u;
  return result;
}
