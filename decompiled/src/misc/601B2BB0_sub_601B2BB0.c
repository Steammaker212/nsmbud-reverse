/* sub_601B2BB0
 * address: 0x601B2BB0   size: 240   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601B2BB0(int a1)
{
  int result; // r0
  int v3; // r0
  float v4; // s4
  float v5; // [sp+0h] [bp-28h] BYREF
  float v6; // [sp+4h] [bp-24h]
  int v7; // [sp+8h] [bp-20h]
  _DWORD v8[2]; // [sp+Ch] [bp-1Ch] BYREF
  _DWORD v9[5]; // [sp+14h] [bp-14h] BYREF

  result = FIELD_U8(dword_60C89E18, 240460);
  if ( FIELD_U8(dword_60C89E18, 240460) )
  {
    v3 = sub_601E0040(a1 + 1032);
    v5 = *(float *)v3;
    v6 = FIELD_F32(v3, 4);
    v7 = FIELD_U32(v3, 8);
    if ( FIELD_U32(a1, 1032) == 1 )
    {
      v5 = v5 + (float)(*(float *)&dword_60C8AB4C + 0.0);
      v4 = *(float *)&dword_60C8AB50 + 0.0;
    }
    else
    {
      v4 = 40.0;
      v5 = v5 + 60.0;
    }
    v6 = v4 + v6;
    ((void (__fastcall *)(int, _DWORD *, float *))sub_601C4708)(a1, v8, &v5);
    v9[0] = v8[0];
    v9[1] = v8[1];
    v9[2] = 0;
    return sub_604812F0(dword_60C89E18 + 227624, v9);
  }
  return result;
}
