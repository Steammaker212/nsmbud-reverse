/* sub_607BB7D8
 * address: 0x607BB7D8   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607BB7D8(int a1)
{
  int result; // r0
  int *v3; // r6
  float v4; // r1
  bool v5; // zf
  bool v6; // zf
  float v7; // r1
  unsigned int v8; // r5
  int v9; // r0
  bool v10; // zf
  int v11; // r0
  bool v12; // zf
  Vec3 v13; // [sp+8h] [bp-30h] BYREF
  Vec3 v14[3]; // [sp+14h] [bp-24h] BYREF

  v3 = (int *)(a1 + 14544);
  result = FIELD_U32(a1, 14544);
  if ( result == 2 )
  {
    v4 = FIELD_F32(a1, 112);
    v14[0].x = FIELD_F32(a1, 108);
    v14[0].y = v4;
    v14[0].z = 3300.0;
    v13.x = FIELD_F32(a1, 12028);
    v13.y = v13.x;
    v13.z = v13.x;
    if ( !sub_60237208(a1 + 14548, v14, 0, &v13) )
    {
      sub_60237560(a1 + 14548);
      *v3 = 0;
    }
    goto LABEL_7;
  }
  if ( result != 1 )
  {
    if ( result )
      return result;
LABEL_7:
    result = FIELD_U8(a1, 1226);
    v5 = (result & 0x10) == 0;
    if ( (result & 0x10) == 0 )
    {
      result = FIELD_U8(a1, 1220);
      v5 = (result & 0x40) == 0;
    }
    if ( v5 )
    {
      result = sub_607C70B0(a1);
      v6 = result == 0;
      if ( result )
      {
        result = FIELD_U8(result, 1220);
        v6 = (result & 0x40) == 0;
      }
      if ( v6 )
      {
        result = FIELD_U8(a1, 1220);
        if ( (result & 0x20) != 0 )
        {
          result = 1;
LABEL_21:
          *v3 = result;
          return result;
        }
      }
    }
    return result;
  }
  v7 = FIELD_F32(a1, 112);
  v14[0].x = FIELD_F32(a1, 108);
  v14[0].y = v7;
  v14[0].z = 3300.0;
  v13.x = FIELD_F32(a1, 12028);
  v13.y = v13.x;
  v13.z = v13.x;
  v8 = FIELD_S8(a1, 84);
  v9 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 156))(a1, FIELD_U32(a1, 1320));
  sub_60236EC4(v8, (EffectWrapper *)(a1 + 14548), dword_60B0CEE8[v9], v14, 0, &v13);
  v10 = (FIELD_U8(a1, 1226) & 0x10) == 0;
  if ( (FIELD_U8(a1, 1226) & 0x10) == 0 )
    v10 = (FIELD_U8(a1, 1220) & 0x40) == 0;
  if ( !v10 )
    goto LABEL_20;
  v11 = sub_607C70B0(a1);
  v12 = v11 == 0;
  if ( v11 )
    v12 = (FIELD_U8(v11, 1220) & 0x40) == 0;
  if ( !v12 || (result = FIELD_U8(a1, 1220), (result & 0x20) == 0) )
  {
LABEL_20:
    sub_60236074(a1 + 14564);
    result = 2;
    goto LABEL_21;
  }
  return result;
}
