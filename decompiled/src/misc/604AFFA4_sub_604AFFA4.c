/* sub_604AFFA4
 * address: 0x604AFFA4   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604AFFA4(int a1)
{
  int v2; // r5
  int result; // r0

  FIELD_U32(a1, 4636) = 4;
  FIELD_U8(a1, 4651) = 0;
  FIELD_U8(a1, 4648) = 1;
  FIELD_U32(a1, 38068) = 4;
  v2 = a1 + 3608;
  sub_60502B04(a1 + 3608, &unk_60B02E68, 1);
  sub_60502C84(v2, &unk_60B02E6C, 0);
  sub_60502C84(v2, &unk_60B02E5C, 0);
  sub_60502C84(v2, &unk_60B02E60, 0);
  sub_60502C84(v2, &unk_60B02E64, 0);
  FIELD_U8(a1, 38095) = 0;
  FIELD_U8(a1, 38096) = 0;
  FIELD_U8(a1, 38097) = 1;
  *(_BYTE *)(FIELD_U32(a1, 6168) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 6172) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 6176) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 6180) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 6184) + 64) &= ~1u;
  *(_BYTE *)(FIELD_U32(a1, 6188) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 6192) + 64) |= 1u;
  *(_BYTE *)(FIELD_U32(a1, 6196) + 64) |= 1u;
  result = FIELD_U32(a1, 6200);
  FIELD_U8(result, 64) |= 1u;
  return result;
}
