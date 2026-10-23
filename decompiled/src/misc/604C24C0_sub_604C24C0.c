/* sub_604C24C0
 * address: 0x604C24C0   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604C24C0(int a1)
{
  int v2; // r0
  char v3; // r0

  v2 = dword_60C89E18;
  FIELD_U32(a1, 14144) = FIELD_U32(dword_60C89E18, 20);
  v3 = sub_601A446C(v2) ^ 1;
  FIELD_U8(a1, 14016) = 1;
  FIELD_U8(a1, 14019) = 1;
  FIELD_U8(a1, 14015) = 1;
  FIELD_U8(a1, 14018) = 1;
  FIELD_U8(a1, 14017) = 1;
  FIELD_U8(a1, 14020) = v3;
  FIELD_U8(a1, 14021) = 0;
  FIELD_U8(a1, 14022) = v3;
  FIELD_U8(a1, 14023) = v3;
  FIELD_U8(a1, 14024) = 0;
  FIELD_U8(a1, 14025) = 0;
  ((void (__fastcall *)(int))loc_604C77D4)(a1);
  ((void (__fastcall *)(int))loc_604C6EF0)(a1);
  G_Flag_00_ref(a1);
  sub_604C7134(a1);
  sub_604C75B8(a1);
  sub_604C6B78(a1);
  FIELD_U8(a1, 14168) = 1;
  return sub_60502548(a1 + 4056);
}
