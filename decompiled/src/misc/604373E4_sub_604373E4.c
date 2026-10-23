/* sub_604373E4
 * address: 0x604373E4   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_604373E4(int a1)
{
  float *v2; // r0
  float v3; // s16
  float v4; // s18
  float v5; // s20
  __int64 *v6; // r0
  _QWORD *v7; // r1
  __int64 v8; // d16
  __int64 v9; // d17
  __int64 v10; // d17
  __int64 v11; // d17
  float result; // s0

  v2 = (float *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  v3 = *v2;
  v4 = v2[1];
  v5 = v2[2];
  v6 = (__int64 *)(*(int (__fastcall **)(int))(*(_DWORD *)a1 + 64))(a1);
  v7 = v6 + 4;
  v8 = *v6;
  v9 = v6[1];
  v6 += 2;
  FIELD_U64(a1, 956) = v8;
  FIELD_U64(a1, 964) = v9;
  v10 = v6[1];
  FIELD_U64(a1, 972) = *v6;
  FIELD_U64(a1, 980) = v10;
  v11 = v7[1];
  FIELD_U64(a1, 988) = *v7;
  FIELD_U64(a1, 996) = v11;
  FIELD_F32(a1, 956) = v3 * FIELD_F32(a1, 956);
  FIELD_F32(a1, 972) = v3 * FIELD_F32(a1, 972);
  FIELD_F32(a1, 988) = v3 * FIELD_F32(a1, 988);
  FIELD_F32(a1, 960) = v4 * FIELD_F32(a1, 960);
  FIELD_F32(a1, 976) = v4 * FIELD_F32(a1, 976);
  FIELD_F32(a1, 992) = v4 * FIELD_F32(a1, 992);
  FIELD_F32(a1, 964) = v5 * FIELD_F32(a1, 964);
  FIELD_F32(a1, 980) = v5 * FIELD_F32(a1, 980);
  result = v5 * FIELD_F32(a1, 996);
  FIELD_F32(a1, 996) = result;
  return result;
}
