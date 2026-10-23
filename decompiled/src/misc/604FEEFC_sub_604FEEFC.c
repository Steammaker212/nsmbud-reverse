/* sub_604FEEFC
 * address: 0x604FEEFC   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_604FEEFC(int a1)
{
  int v2; // r0
  float result; // s0
  int (**v4)(); // [sp+0h] [bp-28h] BYREF
  const char *v5; // [sp+4h] [bp-24h]

  sub_604FF028();
  sub_604FF248(a1);
  sub_604FF638(a1);
  sub_604FFD54(a1 + 5688);
  v4 = &sead__SafeStringBase__vtable;
  v5 = "NXStaffCredit_Heading_00";
  sub_6047E13C(11, &v4, FIELD_U32(a1, 14976), 0);
  FIELD_F32(a1, 15988) = FIELD_F32(a1, 15988) - (float)(*(float *)(FIELD_U32(a1, 14948) + 60) * 0.5);
  sub_604FF7EC(a1);
  v2 = FIELD_U32(a1, 14968);
  FIELD_F32(a1, 15988) = FIELD_F32(a1, 15988) - (float)(FIELD_F32(v2, 60) * 0.5);
  FIELD_U32(v2, 32) = FIELD_U32(a1, 15992);
  FIELD_U32(v2, 28) = FIELD_U32(a1, 15988);
  FIELD_U32(v2, 24) = FIELD_U32(a1, 15984);
  FIELD_U8(v2, 64) |= 0x10u;
  v4 = &sead__SafeStringBase__vtable;
  v5 = "NXStaffCredit_Copyright_00";
  sub_6047E13C(11, &v4, FIELD_U32(a1, 14980), 0);
  result = FIELD_F32(a1, 15988) - *(float *)(FIELD_U32(a1, 14972) + 28);
  FIELD_F32(a1, 15988) = result;
  return result;
}
