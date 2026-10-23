/* sub_601FD3B4
 * address: 0x601FD3B4   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601FD3B4(int a1)
{
  int v2; // r6
  int v3; // r5
  int v4; // r0
  int result; // r0
  int v6; // [sp+4h] [bp-14h]

  v2 = **(_DWORD **)(FIELD_U32(a1, 268) + 12);
  v3 = dword_60C8996C;
  v6 = sub_6019112C(dword_60C8996C);
  if ( FIELD_U8(v3, 1384) && v6 == 83 )
  {
    AnimationCtrl_setRepeat((ModelAnimation *)(v2 + 4), 0);
    if ( FIELD_U8(a1, 288) )
    {
      FIELD_U32(v2, 24) = -1082130432;
      sub_6041838C((ModelAnimation *)(v2 + 4));
    }
    else
    {
      FIELD_U32(v2, 24) = 1065353216;
      sub_6041838C((ModelAnimation *)(v2 + 4));
      v4 = sub_601CF9C0(dword_60C8AEF0);
      if ( sqrtf(
             (float)((float)(FIELD_F32(v4, 88) - FIELD_F32(a1, 88))
                   * (float)(FIELD_F32(v4, 88) - FIELD_F32(a1, 88)))
           + (float)((float)(FIELD_F32(v4, 80) - FIELD_F32(a1, 80))
                   * (float)(FIELD_F32(v4, 80) - FIELD_F32(a1, 80)))) < 20.0 )
        sub_601E4C88((_DWORD *)dword_60C8B13C, 55, (_DWORD *)(a1 + 80));
    }
  }
  if ( v6 == 83 )
  {
    result = FIELD_U8(v2, 28);
    if ( (result & 0x10) == 0 )
      return result;
    FIELD_U8(a1, 288) ^= 1u;
  }
  return (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
}
