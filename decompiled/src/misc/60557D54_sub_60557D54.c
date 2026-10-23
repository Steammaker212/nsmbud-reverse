/* sub_60557D54
 * address: 0x60557D54   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60557D54(int a1)
{
  _DWORD *v2; // r5

  v2 = (_DWORD *)(a1 + 40);
  FIELD_U8(a1, 3688) = 0;
  sub_60473DE4((_DWORD *)(a1 + 40), 0, &dword_60CAD668, 0);
  FIELD_U8(a1, 3672) = 1;
  sub_60473DE4(v2, 1u, &dword_60CAD670, 0);
  FIELD_U8(a1, 3673) = 1;
  FIELD_U8(a1, 3688) = 1;
  FIELD_U8(a1, 3685) = 1;
  FIELD_U32(a1, 3668) = -1;
  FIELD_U32(a1, 3664) = -1;
  FIELD_U32(a1, 3660) = -1;
  FIELD_U32(a1, 3656) = -1;
  FIELD_U32(a1, 3652) = -1;
  FIELD_U32(a1, 3648) = -1;
  FIELD_U32(a1, 3644) = -1;
  FIELD_U32(a1, 3640) = -1;
  FIELD_U32(a1, 3676) = 0;
  FIELD_U32(a1, 3680) = 0;
  return -1;
}
