/* sub_60446088
 * address: 0x60446088   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60446088(int a1, int a2, _DWORD *a3)
{
  int result; // r0
  int v6; // r6
  int v7; // r1

  result = sub_6043AED0(a2, a3);
  if ( result >= 0 )
  {
    v6 = *(_DWORD *)sub_6043AFA0(a2, 2, result);
    sub_6086AF38(a1 + 32, v6);
    FIELD_U32(a1, 136) = v6;
    FIELD_U32(a1, 4) = 0;
    FIELD_F32(a1, 8) = (float)FIELD_S32(v6, 104);
    FIELD_F32(a1, 16) = (float)FIELD_S32(v6, 104);
    FIELD_U32(a1, 24) = 1065353216;
    AnimationCtrl_setRepeat((ModelAnimation *)(a1 + 4), 1);
    FIELD_U32(a1, 20) = 0;
    FIELD_U32(a1, 28) |= 2u;
    sub_6041838C((ModelAnimation *)(a1 + 4));
    result = FIELD_U32(a1, 140);
    if ( result )
    {
      v7 = FIELD_U32(a1, 144);
      FIELD_U32(a1, 140) = result;
      FIELD_U32(a1, 144) = v7;
      if ( FIELD_U32(a1, 136) )
        return sub_6086B060(a1 + 32, FIELD_U32(result, 40));
    }
  }
  return result;
}
