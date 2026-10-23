/* sub_6097D9D0
 * address: 0x6097D9D0   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097D9D0(int a1, int a2, int a3)
{
  ((void (*)(void))loc_60857B80)();
  *(_DWORD *)a1 = off_60C5F598;
  FIELD_U8(a1, 170) = 0;
  FIELD_U8(a1, 171) = 1;
  FIELD_U8(a1, 172) = 0;
  FIELD_U8(a1, 173) = 0;
  FIELD_U32(a1, 176) = 0;
  FIELD_U32(a1, 180) = 0;
  FIELD_U32(a1, 196) = -1;
  FIELD_U32(a1, 192) = -1;
  FIELD_U32(a1, 184) = off_60BFDB94;
  FIELD_U16(a1, 200) = 0;
  FIELD_U16(a1, 202) = 0;
  FIELD_U32(a1, 208) = 0;
  sub_60919E88((_DWORD *)(a1 + 212));
  sub_6091ABEC((_DWORD *)(a1 + 280));
  FIELD_U32(a1, 624) = 0;
  FIELD_U32(a1, 628) = 0;
  FIELD_U32(a1, 632) = 0;
  sub_6097DA70(a1, FIELD_U32(a3, 24));
  return a1;
}
