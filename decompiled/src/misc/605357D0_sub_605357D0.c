/* sub_605357D0
 * address: 0x605357D0   size: 504   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605357D0(int a1)
{
  unsigned int *v2; // r7
  int v3; // r5
  unsigned int v4; // r0
  int result; // r0

  v2 = (unsigned int *)(a1 + 83612);
  v3 = a1 + 15700;
  v4 = FIELD_U32(a1, 16728) - 1;
  if ( v4 <= 2 )
    *v2 = v4;
  sub_60473DE4((_DWORD *)(a1 + 12092), 0, &dword_60CAADE4, 0);
  FIELD_U8(a1, 83625) = 1;
  FIELD_U8(a1, 83629) = 1;
  FIELD_U32(a1, 52496) = *v2;
  FIELD_U32(a1, 52468) = 2;
  sub_60502548(v3);
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
  *(_BYTE *)(FIELD_U32(a1, 52600) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 52604) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 52608) + 64) |= 1u;
  result = FIELD_U32(a1, 52612);
  FIELD_U8(result, 64) &= ~1u;
  return result;
}
