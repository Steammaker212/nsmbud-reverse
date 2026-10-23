/* sub_601BAA8C
 * address: 0x601BAA8C   size: 456   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_601BAA8C(int a1)
{
  int v2; // r8
  int v3; // r0
  unsigned int v4; // r1
  int v5; // s0
  int v6; // r5
  int v7; // r4
  int v8; // r7
  int v9; // r0
  float v10; // r1
  float v11; // r2
  int v12; // r1
  int v13; // r2
  int v14; // s2
  unsigned int result; // r0
  unsigned __int64 v16; // [sp+4h] [bp-64h] BYREF
  int v17; // [sp+Ch] [bp-5Ch]
  float v18[4]; // [sp+10h] [bp-58h] BYREF
  _DWORD v19[4]; // [sp+20h] [bp-48h] BYREF
  float v20; // [sp+30h] [bp-38h] BYREF
  float v21; // [sp+34h] [bp-34h]
  float v22; // [sp+38h] [bp-30h]

  v2 = sub_601CF9C0(dword_60C8AEF0);
  FIELD_U8(a1, 280) = 1;
  FIELD_U32(a1, 1100) = FIELD_U32(a1, 1096);
  FIELD_U32(a1, 1096) = FIELD_U32(v2, 1100);
  FIELD_U32(a1, 1108) &= 0xFFFFFFFC;
  FIELD_U32(a1, 1024) = FIELD_U32(v2, 180);
  FIELD_U32(a1, 1020) = FIELD_U32(v2, 180);
  v3 = sub_601CF9C0(dword_60C8AEF0);
  v4 = FIELD_U32(a1, 1096);
  if ( v4 - 2 >= 4 )
  {
    if ( v4 > 1 )
      goto LABEL_6;
    FIELD_F32(a1, 200) = 8.0 * sub_601C6030(a1);
    v5 = 0;
    FIELD_U32(a1, 204) = 0;
    FIELD_U32(a1, 120) = 0;
  }
  else
  {
    FIELD_U32(a1, 200) = 1090519040;
    FIELD_U32(a1, 204) = FIELD_U32(v3, 204);
    FIELD_U32(a1, 120) = 0;
    v5 = FIELD_U32(v3, 208);
  }
  FIELD_U32(a1, 208) = v5;
LABEL_6:
  if ( sub_601C676C(a1, FIELD_U32(a1, 1056), -1) == 238 )
  {
    v6 = 3;
    v7 = 1;
    do
    {
      v8 = sub_601E1330(a1 + 1084, v7 - 1);
      v9 = sub_601C676C(a1, v8, -1);
      if ( v9 != 238 )
        v6 = v8;
      if ( v7 > 5 )
        break;
      ++v7;
    }
    while ( v9 == 238 );
    FIELD_U32(a1, 1056) = v6;
  }
  sub_601BA0F8(a1, 3, 0.0, 0.0);
  v10 = FIELD_F32(v2, 84);
  v11 = FIELD_F32(v2, 88);
  v20 = FIELD_F32(v2, 80);
  v21 = v10;
  v22 = v11;
  v12 = FIELD_U32(a1, 84);
  v13 = FIELD_U32(a1, 88);
  v19[0] = FIELD_U32(a1, 80);
  v19[1] = v12;
  v19[2] = v13;
  v18[0] = v20;
  v18[1] = v21;
  v18[2] = v22;
  v16 = sub_601BA56C(a1, &v20, FIELD_U32(v2, 1000)).n64_u64[0];
  v17 = v14;
  ((void (__fastcall *)(int, _DWORD *, float *, unsigned __int64 *))loc_601BAC64)(a1, v19, v18, &v16);
  FIELD_U8(a1, 1104) = 0;
  result = FIELD_U32(a1, 1108) & 0xFFFDFFFF;
  FIELD_U32(a1, 1108) = result;
  return result;
}
