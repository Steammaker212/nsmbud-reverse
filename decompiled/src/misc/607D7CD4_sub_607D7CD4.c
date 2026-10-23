/* sub_607D7CD4
 * address: 0x607D7CD4   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607D7CD4(int a1)
{
  int result; // r0
  _BOOL4 v3; // r6
  _DWORD *v4; // r7
  float v5; // s0
  int v6; // r5
  float **v7; // r7
  float *v8; // r0
  float v9; // s0
  int v10; // [sp+4h] [bp-1Ch] BYREF

  result = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 972))(a1);
  if ( result )
    return result;
  sub_607D7BA4(a1);
  v3 = sub_607868D4(a1 + 688, 0) == 1 && FIELD_U32(a1, 1248) == FIELD_U32(a1, 80);
  v4 = (_DWORD *)(a1 + 9940);
  result = FIELD_U32(a1, 9940);
  switch ( result )
  {
    case 2:
      if ( sub_607868D4(a1 + 688, &v10) == 1 )
      {
        v6 = sub_607868A0(a1 + 688);
        v7 = (float **)(a1 + 1276);
        if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1204))(a1) )
          v7 = (float **)(a1 + 1280);
        v8 = *v7;
        if ( v6 )
          v8 += 2;
        v9 = *v8 * flt_60B0A898[v10];
      }
      else
      {
        v9 = 0.0;
      }
      FIELD_F32(a1, 92) = v9;
      if ( !v3 )
        return sub_607745DC(a1);
      result = sub_60793CA8(FIELD_U32(a1, 11368));
      if ( result == 1 )
        return sub_607745DC(a1);
      break;
    case 1:
      FIELD_U32(a1, 92) = 0;
      SE_PLY_BRAKE_ref(a1);
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 1280))(a1, 1);
      if ( !v3 )
        return sub_607745DC(a1);
      result = FIELD_U32(a1, 9944);
      if ( !result )
      {
        sub_6076EEFC(a1);
        *v4 = 2;
        return (*(int (__fastcall **)(_DWORD, int, float, float, float))(**(_DWORD **)(a1 + 11368) + 84))(
                 FIELD_U32(a1, 11368),
                 15,
                 1.0,
                 0.0,
                 0.0);
      }
      break;
    case 0:
      SE_PLY_BRAKE_ref(a1);
      result = (*(int (__fastcall **)(int, int))(*(_DWORD *)a1 + 1280))(a1, 1);
      v5 = FIELD_F32(a1, 88);
      if ( v5 == 0.0 )
      {
        result = 9944;
        FIELD_U32(a1, 9944) = 8;
        *v4 = 1;
      }
      if ( !v3 )
      {
        if ( v5 != 0.0 )
          FIELD_U32(a1, 80) = v5 < 0.0;
        return sub_607745DC(a1);
      }
      break;
  }
  return result;
}
