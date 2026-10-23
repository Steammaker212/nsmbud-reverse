/* sub_6079B128
 * address: 0x6079B128   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079B128(int a1)
{
  float v2; // s16
  float v3; // s18
  float v4; // s18
  int result; // r0
  float v6; // s0
  float v7; // s16
  int v8; // r0
  int v9; // r1
  int v10; // r0
  float v11; // [sp+0h] [bp-38h] BYREF
  float v12; // [sp+4h] [bp-34h]
  int v13; // [sp+8h] [bp-30h]
  _BYTE v14[4]; // [sp+Ch] [bp-2Ch] BYREF
  float v15; // [sp+10h] [bp-28h]

  v2 = FIELD_F32(a1, 112);
  v3 = *(float *)((*(int (__fastcall **)(int))(*(_DWORD *)a1 + 172))(a1) + 20);
  sub_6079D4B0(a1, v14);
  v4 = v2 + v3;
  result = 0;
  v6 = v15 + 24.0;
  if ( (float)(v15 + 24.0) > v4 )
  {
    v7 = v6 - v4;
    v8 = FIELD_U32(a1, 116);
    v11 = FIELD_F32(a1, 108) + 3.0;
    v12 = v4;
    v13 = v8;
    v9 = sub_60155C38(a1 + 1328, &v11, 0, 0, v6 - v4);
    result = 1;
    if ( !v9 )
    {
      v10 = FIELD_U32(a1, 116);
      v11 = FIELD_F32(a1, 108) + -4.0;
      v12 = v4;
      v13 = v10;
      return sub_60155C38(a1 + 1328, &v11, 0, 0, v7);
    }
  }
  return result;
}
