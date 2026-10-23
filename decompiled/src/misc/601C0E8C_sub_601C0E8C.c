/* sub_601C0E8C
 * address: 0x601C0E8C   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C0E8C(int a1)
{
  int v2; // r5
  int v3; // r6
  __int16 *v4; // r0
  int v5; // r1
  float v6; // r3
  float v7; // r2
  int v8; // r7
  float v9; // r4
  int v10; // r6
  float v11; // s18
  float v12; // s16
  int v13; // r0
  int v15; // [sp+8h] [bp-38h] BYREF
  float v16; // [sp+Ch] [bp-34h]
  float v17; // [sp+10h] [bp-30h]

  v2 = dword_60C8AEF0;
  v3 = sub_601CF9C0(dword_60C8AEF0);
  v4 = (__int16 *)sub_601CFF2C(v2, 4);
  v5 = FIELD_U32(v3, 968);
  FIELD_U32(a1, 80) = v5;
  v6 = FIELD_F32(v3, 972);
  FIELD_F32(a1, 84) = v6;
  v7 = FIELD_F32(v3, 976);
  FIELD_F32(a1, 88) = v7;
  v8 = FIELD_U32(v3, 980);
  v9 = FIELD_F32(v3, 984);
  v17 = FIELD_F32(v3, 988);
  v16 = v9;
  v15 = v8;
  if ( FIELD_U32(a1, 1084) == 7 )
  {
    v10 = *v4;
    v11 = 30.0;
    v12 = 800.0;
    v13 = sub_601C5EEC(a1);
  }
  else
  {
    v15 = v5;
    v17 = v7 + 1.0;
    v16 = v6 + 1000.0;
    v12 = v6 + 500.0;
    v11 = 0.033333;
    v10 = sub_601C5EEC(a1);
    v13 = 8;
  }
  sub_601C4A1C(a1, a1 + 80, &v15, v10 * v13, v11, v12, 2.3, 2.3, 1);
  FIELD_U32(a1, 1468) = 4;
  sub_601BA0F8(a1, 15, 0.0, 0.0);
  FIELD_U32(a1, 1048) = 0;
  return 0;
}
