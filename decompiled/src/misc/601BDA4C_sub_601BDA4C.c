/* sub_601BDA4C
 * address: 0x601BDA4C   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601BDA4C(int a1)
{
  float v2; // s0
  int result; // r0
  int v4; // r5
  int v5; // r1
  int v6; // r0
  int v7; // r1
  int v8; // r2
  bool v9; // vf
  int v10; // r1
  int *v11; // r1

  v2 = sub_608332CC(a1 + 80, a1 + 960, 0.1, 10.0, 1.0);
  result = v2 >= -0.00000011921;
  v4 = (v2 <= 0.00000011921) & (unsigned __int8)result;
  if ( ((v2 <= 0.00000011921) & (unsigned __int8)result) != 0 )
  {
    sub_6019EC34((_DWORD *)(a1 + 1084), (_DWORD *)(a1 + 1160));
    FIELD_U8(a1, 280) = 0;
    result = sub_601B69E0(a1);
  }
  v5 = FIELD_U32(a1, 1144);
  if ( v5 )
  {
    v6 = FIELD_U32(a1, 1132);
    if ( v5 >= 1 )
    {
      v7 = FIELD_U32(a1, 1136);
      v8 = FIELD_U32(a1, 1140);
      v9 = __OFSUB__(v8, v7);
      v10 = v8 - v7;
      if ( v10 < 0 != v9 )
        v10 = FIELD_U32(a1, 1140);
      v6 += 60 * v10;
    }
    result = FIELD_U32(v6, 48);
    if ( result == 2 )
    {
      if ( v4 != 1 )
        return result;
      v11 = &dword_60C8AD48;
    }
    else
    {
      v11 = &dword_60C8ABF8;
    }
    return (int)sub_601B69F4(a1, (StateBase *)v11);
  }
  return result;
}
