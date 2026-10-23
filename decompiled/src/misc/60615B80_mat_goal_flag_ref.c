/* mat_goal_flag_ref
 * address: 0x60615B80   size: 276   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall mat_goal_flag_ref(int a1)
{
  int result; // r0
  int *v3; // r5
  int v4; // r1
  int v5; // r1
  int v6; // r0
  int *v7; // t1
  int v8; // r0
  int (__fastcall *v9)(int, _DWORD *); // r2
  int v10; // r0
  _DWORD v11[6]; // [sp+0h] [bp-18h] BYREF

  v3 = (int *)(a1 + 7616);
  result = FIELD_U32(a1, 7616);
  if ( result == 1 )
  {
    result = a1 + 7620;
    v4 = FIELD_U32(a1, 7620);
    if ( !v4 || (v5 = v4 - 1, (*(_DWORD *)result = v5) == 0) )
    {
      sub_604081A0(dword_60C9A1E8);
      if ( FIELD_U32(a1, 20) >= 0x10000000u )
        v6 = 945;
      else
        v6 = 595;
      EffectData_create(v6, (Vec3 *)(a1 + 7448), 0, a1 + 144);
      v7 = *(int **)(a1 + 6764);
      v8 = *v7;
      v9 = *(int (__fastcall **)(int, _DWORD *))(*(_DWORD *)*v7 + 124);
      v11[0] = &sead__SafeStringBase__vtable;
      v11[1] = "mat_goal_flag";
      v10 = v9(v8, v11);
      (*(void (__fastcall **)(_DWORD, int, _DWORD))(***(_DWORD ***)(a1 + 6764) + 136))(**(_DWORD **)(a1 + 6764), v10, 0);
      result = 2;
      goto LABEL_11;
    }
  }
  else if ( !result )
  {
    result = a1 + 7576;
    if ( FIELD_F32(a1, 7552) >= FIELD_F32(a1, 7576) )
    {
      FIELD_U32(a1, 7620) = 15;
      result = 1;
LABEL_11:
      *v3 = result;
    }
  }
  return result;
}
