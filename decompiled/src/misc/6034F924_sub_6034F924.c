/* sub_6034F924
 * address: 0x6034F924   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6034F924(int a1)
{
  _DWORD *v2; // r0
  int v3; // r5
  _DWORD *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  _DWORD *v7; // r1
  unsigned int v8; // r0
  float *v9; // r0
  _DWORD *v10; // r1
  unsigned int v11; // r0
  _DWORD *v12; // r1
  unsigned int v13; // r0
  float v14; // s0
  int result; // r0
  Vec3 v16[2]; // [sp+4h] [bp-1Ch] BYREF

  memset(v16, 0, 12);
  v3 = a1 + 6304;
  v2 = *(_DWORD **)(a1 + 6304);
  v4 = (_DWORD *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += v6;
  if ( sub_60418548(*v4 + 4) )
    goto LABEL_7;
  v7 = *(_DWORD **)(*(_DWORD *)v3 + 12);
  v8 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v8 )
    v7 += v8;
  if ( sub_60418548(*v7 + 4) )
  {
LABEL_7:
    v9 = (float *)(a1 + 6324);
  }
  else
  {
    v10 = *(_DWORD **)(*(_DWORD *)v3 + 12);
    v11 = *(_DWORD *)(*(_DWORD *)v3 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v11 )
      v10 += v11;
    if ( !sub_60418548(*v10 + 4) )
    {
      v12 = *(_DWORD **)(*(_DWORD *)v3 + 12);
      v13 = *(_DWORD *)(*(_DWORD *)v3 + 68);
      if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v13 )
        v12 += v13;
      if ( !sub_60418548(*v12 + 4) )
        return ((int (__fastcall *)(int, Vec3 *))loc_6034180C)(a1, v16);
    }
    v9 = (float *)(a1 + 6336);
  }
  v16[0].x = *v9;
  v14 = v9[1];
  v16[0].z = v9[2];
  v16[0].y = v14 + -4.0;
  result = ((int (__fastcall *)(int, Vec3 *))loc_6034180C)(a1, v16);
  if ( result == 1 )
  {
    v16[0].z = sub_600024C4(a1);
    return EffectData_create(279, v16, 0, 0);
  }
  return result;
}
