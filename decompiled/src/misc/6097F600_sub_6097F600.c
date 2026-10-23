/* sub_6097F600
 * address: 0x6097F600   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6097F600(int a1, int a2, int a3)
{
  ((void (*)(void))loc_60857B80)();
  *(_DWORD *)a1 = off_60C5F60C;
  FIELD_U32(a1, 172) = a1 + 172;
  FIELD_U32(a1, 176) = a1 + 172;
  FIELD_U8(a1, 180) = 0;
  FIELD_U32(a1, 184) = 0;
  FIELD_U32(a1, 188) = 0;
  FIELD_U32(a1, 204) = -1;
  FIELD_U32(a1, 200) = -1;
  FIELD_U32(a1, 192) = off_60BFDB94;
  FIELD_U16(a1, 208) = 0;
  FIELD_U16(a1, 210) = 0;
  FIELD_U32(a1, 216) = 0;
  sub_60919E88((_DWORD *)(a1 + 220));
  sub_6091ABEC((_DWORD *)(a1 + 288));
  sub_6097F690(a1, FIELD_U32(a3, 24));
  return a1;
}
