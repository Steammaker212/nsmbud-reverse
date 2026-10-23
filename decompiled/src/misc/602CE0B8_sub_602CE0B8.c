/* sub_602CE0B8
 * address: 0x602CE0B8   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602CE0B8(int a1, int a2, int a3, int a4)
{
  float v5; // r1
  float v6; // r2
  int v7; // r1
  int v8; // r2
  int v10[4]; // [sp+0h] [bp-28h] BYREF
  float v11[6]; // [sp+10h] [bp-18h] BYREF

  v5 = FIELD_F32(a4, 112);
  v6 = FIELD_F32(a4, 116);
  v11[0] = FIELD_F32(a4, 108);
  v11[1] = v5;
  v11[2] = v6;
  v7 = FIELD_U32(a4, 160);
  v8 = FIELD_U32(a4, 164);
  v10[0] = FIELD_U32(a4, 156);
  v10[2] = v8;
  v10[1] = (int)(float)((float)v7 * 0.5);
  sub_602D17E0(a1, v11, v10);
  sub_602D25C0(a1);
  SE_OBJ_CMN_SPLASH_ref_2D1F80(a1);
  return 1;
}
