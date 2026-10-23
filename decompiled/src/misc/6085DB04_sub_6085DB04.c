/* sub_6085DB04
 * address: 0x6085DB04   size: 536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085DB04(float32x4_t *a1, int a2, int a3, int a4, float32x2_t a5)
{
  unsigned __int32 v8; // r0
  bool v9; // zf
  unsigned __int8 v10; // r0
  bool v11; // zf
  int result; // r0
  unsigned __int16 v13; // r0
  int *v14; // r0
  int v15; // r2
  int v16; // r1
  int *v17; // r0
  int v18; // r2
  int v19; // r1
  _DWORD v20[11]; // [sp+Ch] [bp-64h] BYREF
  unsigned __int32 v21; // [sp+38h] [bp-38h]
  int v22; // [sp+58h] [bp-18h]
  char v23; // [sp+5Ch] [bp-14h]

  sub_60858D50(a1, a2, a3, a4, a5);
  if ( !a1[13].n128_u16[3] )
    goto LABEL_11;
  v8 = a1[11].n128_u32[3];
  v9 = v8 == 0;
  if ( v8 )
    v9 = a1[16].n128_u32[0] == 0;
  if ( v9 )
  {
LABEL_11:
    result = a1[4].n128_u8[4] & 0xEF;
    a1[4].n128_u8[4] = result;
    return result;
  }
  v10 = a1[4].n128_u8[0];
  v11 = (v10 & 1) == 0;
  if ( (v10 & 1) != 0 )
    v11 = a1[4].n128_u8[2] == 0;
  if ( v11 )
  {
    if ( FIELD_U8(a3, 23) )
    {
      result = v10 & 0x7F;
      a1[4].n128_u8[0] = result;
      return result;
    }
    goto LABEL_11;
  }
  sub_6084A204(a1[16].n128_i32[1], FIELD_U32(a2, 196));
  sub_608672C4(a1[16].n128_u32[0], a2);
  v13 = a1[13].n128_u16[4];
  if ( (v13 & 4) == 0 )
    return sub_6085D7E0((int)a1, a2);
  a1[13].n128_u16[4] = v13 & 0xFFFB;
  if ( a1[13].n128_u8[11] )
  {
    sub_6084CA5C((int)v20);
    v23 = a1[13].n128_u8[9] & 1;
    (*(void (__fastcall **)(float32x4_t *, _DWORD *))(FIELD_U32(a1, 0x0)[0] + 144))(a1, v20);
    v21 = a1[16].n128_u32[1];
    sub_6084A098((int)v20);
    v14 = (int *)a1[15].n128_u32[3];
    v15 = a1[13].n128_u16[3];
    v16 = a1[10].n128_i32[3];
    if ( v14 )
      sub_6084D488(v20, v16, v15, 16, v14[1], *v14);
    else
      sub_6084D410(v20, v16, v15);
    nullsub_89();
    if ( (a1[13].n128_u8[8] & 0x80) != 0 )
      sub_6085DD1C(a1, v22);
    j_nullsub_88();
  }
  else
  {
    sub_6084E138((int)v20);
    v23 = a1[13].n128_u8[9] & 1;
    (*(void (__fastcall **)(float32x4_t *, _DWORD *))(FIELD_U32(a1, 0x0)[0] + 140))(a1, v20);
    v21 = a1[16].n128_u32[1];
    sub_6084A098((int)v20);
    v17 = (int *)a1[15].n128_u32[3];
    v18 = a1[13].n128_u16[3];
    v19 = a1[10].n128_i32[3];
    if ( v17 )
      sub_6084EBDC(v20, v19, v18, 16, v17[1], *v17);
    else
      sub_6084EB64(v20, v19, v18);
    nullsub_89();
    if ( (a1[13].n128_u8[8] & 0x80) != 0 )
      sub_6085DE84(a1, v22);
    j_nullsub_88_0();
  }
  return sub_6085D7E0((int)a1, a2);
}
