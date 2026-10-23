/* sub_601C6044
 * address: 0x601C6044   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C6044(int a1, _DWORD *a2)
{
  int result; // r0
  int v5; // r0
  bool v6; // zf
  int v7; // r1
  int v8; // r0
  int v9; // r1
  int v10; // r0
  bool v11; // zf
  int v12; // r2
  int v13; // r3
  int v14; // r1
  int v15; // r0

  result = FIELD_U8(a1, 216);
  if ( (result & 0x10) == 0 )
  {
    if ( *a2 == -1 )
      goto LABEL_7;
    v5 = a2[1];
    v6 = v5 == -1;
    if ( v5 != -1 )
      v6 = a2[2] == -1;
    if ( v6 || (v7 = sub_601DA5B8(a2), v8 = -1, !v7) )
    {
LABEL_7:
      v8 = 891;
      if ( (FIELD_U32(a1, 264) | 1) != 7 )
      {
        v9 = FIELD_U32(a1, 268);
        v8 = 889;
        if ( !v9 )
          v8 = 890;
        if ( v9 == 3 )
          v8 = 891;
      }
    }
    EffectData_create(v8, (Vec3 *)(a1 + 80), 0, 0);
    FIELD_U8(a1, 216) |= 0x10u;
    if ( *a2 != -1 )
    {
      v10 = a2[1];
      v11 = v10 == -1;
      if ( v10 != -1 )
        v11 = a2[2] == -1;
      if ( !v11 && sub_601DA5B8(a2) == 1 )
      {
        v12 = FIELD_U32(a1, 264);
        v13 = FIELD_U32(a1, 268);
        v14 = 22;
        v15 = dword_60C8B13C;
        return SE_PLY_ref(v15, v14, v12, v13, 0.0);
      }
    }
    v12 = FIELD_U32(a1, 264);
    v15 = dword_60C8B13C;
    if ( (v12 | 1) != 7 )
    {
      v13 = FIELD_U32(a1, 268);
      v14 = 8;
      return SE_PLY_ref(v15, v14, v12, v13, 0.0);
    }
    return sub_601E4C88(dword_60C8B13C, 115, a1 + 80, 1);
  }
  return result;
}
