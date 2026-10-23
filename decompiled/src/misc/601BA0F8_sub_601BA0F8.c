/* sub_601BA0F8
 * address: 0x601BA0F8   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601BA0F8(int a1, int a2, float a3, float a4)
{
  float v5; // s16
  float v6; // s18
  int result; // r0
  int v9; // r5
  float v10; // s20
  int v11; // r0
  void *v12; // r6
  float v13; // s18
  int v14; // r0

  v5 = a4;
  v6 = a3;
  if ( (FIELD_U32(a1, 264) | 1) == 7 )
    return sub_601C3334(a1, a2, -1.0, a3, a4);
  v9 = *(_DWORD *)sub_601C6BC0(a1, a2);
  result = FIELD_U32(a1, 1060);
  if ( v9 != result )
  {
    if ( v9 == 184 )
    {
      v9 = 184;
      if ( (FIELD_U8(a1, 1109) & 8) != 0 )
        v9 = 0;
    }
    if ( v5 <= 0.00000011921 && v5 >= -0.00000011921 )
      v5 = *(float *)(sub_601C6BC0(a1, a2) + 4);
    v10 = *(float *)(sub_601C6BC0(a1, a2) + 8);
    if ( (a2 | 1) == 1 )
    {
      v11 = *(_DWORD *)(*(_DWORD *)(a1 + 920 + 4 * FIELD_U32(a1, 1472)) + 4);
      (*(void (__fastcall **)(int, int, float, float, float))(*(_DWORD *)v11 + 84))(v11, v9, v5, v10, 0.0);
      v12 = (void *)sead__GlobalRandom__sInstance;
      v13 = sub_60793E10(*(_DWORD *)(*(_DWORD *)(a1 + 920 + 4 * FIELD_U32(a1, 1472)) + 4));
      v6 = (float)(v13 + -1.0) * (float)(COERCE_FLOAT((sead__Random__getU32(v12) >> 9) | 0x3F800000) + -1.0);
    }
    FIELD_U32(a1, 1060) = v9;
    v14 = *(_DWORD *)(*(_DWORD *)(a1 + 4 * FIELD_U32(a1, 1472) + 920) + 4);
    return (*(int (__fastcall **)(int, int, float, float, float))(*(_DWORD *)v14 + 84))(v14, v9, v5, v10, v6);
  }
  return result;
}
