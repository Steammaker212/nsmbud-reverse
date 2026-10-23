/* sub_6039F5FC
 * address: 0x6039F5FC   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6039F5FC(int a1)
{
  int v2; // r4
  char v3; // r0
  bool v4; // zf
  bool v5; // zf
  float v6; // s16
  float v7; // s0
  float v8; // s2
  int v9; // r4
  int v11[4]; // [sp+0h] [bp-30h] BYREF
  _DWORD v12[8]; // [sp+10h] [bp-20h] BYREF

  v2 = 0;
  v3 = FIELD_U8(a1, 3203);
  v4 = (v3 & 0x40) == 0;
  if ( (v3 & 0x40) == 0 )
    v4 = (FIELD_U8(a1, 3195) & 0x40) == 0;
  if ( v4 )
  {
    v5 = (FIELD_U8(a1, 3204) & 0x20) == 0;
    if ( (FIELD_U8(a1, 3204) & 0x20) == 0 )
      v5 = (FIELD_U8(a1, 3196) & 0x20) == 0;
    if ( v5 && (FIELD_U32(a1, 2872) & 0x10401) == 0x401 )
    {
      v6 = *(float *)((*(int (__fastcall **)(int))(*(_DWORD *)a1 + 744))(a1) + 8);
      v7 = *(float *)((*(int (__fastcall **)(int))(*(_DWORD *)a1 + 744))(a1) + 20);
      v8 = FIELD_F32(a1, 112);
      v12[0] = FIELD_U32(a1, 108);
      *(float *)&v12[1] = v8 + (float)((float)(v6 + v7) * 0.5);
      sub_6014F61C(a1 + 648);
      if ( sub_6015DF58(a1 + 652, v11, (int)v12) == 1 )
      {
        v9 = v11[0] & 0xFFFFFF ^ 0x4000D;
        return v9 != 0;
      }
    }
  }
  return v2;
}
