/* ShuAnim_play
 * address: 0x60445F80   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ShuAnim_play(_DWORD *a1, int a2, _DWORD *a3)
{
  int result; // r0
  int v6; // r6
  int v7; // r1

  result = sub_6043AE64(a2, a3);
  if ( result >= 0 )
  {
    v6 = *(_DWORD *)sub_6043AFA0(a2, 1, result);
    sub_6086AF38(a1 + 8, v6);
    a1[34] = v6;
    a1[1] = 0;
    *((float *)a1 + 2) = (float)FIELD_S32(v6, 104);
    *((float *)a1 + 4) = (float)FIELD_S32(v6, 104);
    a1[6] = 1065353216;
    AnimationCtrl_setRepeat((ModelAnimation *)(a1 + 1), 1);
    a1[5] = 0;
    a1[7] |= 2u;
    sub_6041838C((ModelAnimation *)(a1 + 1));
    result = a1[35];
    if ( result )
    {
      v7 = a1[36];
      a1[35] = result;
      a1[36] = v7;
      if ( a1[34] )
        return sub_6086B060(a1 + 8, FIELD_U32(result, 40));
    }
  }
  return result;
}
