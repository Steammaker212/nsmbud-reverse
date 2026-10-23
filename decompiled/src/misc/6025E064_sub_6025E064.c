/* sub_6025E064
 * address: 0x6025E064   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_6025E064(int a1)
{
  _DWORD *result; // r0
  int v3; // t1
  __int16 v4; // r2
  int v5; // r6

  v3 = FIELD_U32(a1, 6456);
  result = (_DWORD *)(a1 + 6456);
  if ( v3 <= 0 )
  {
    v4 = FIELD_U16(a1, 6364);
    if ( (v4 & 4) == 0 )
    {
      FIELD_U16(a1, 6364) = v4 | 4;
      *result = 240;
      v5 = **(_DWORD **)(FIELD_U32(a1, 6352) + 28);
      sub_6041838C((ModelAnimation *)(v5 + 4));
      AnimationCtrl_setRepeat((ModelAnimation *)(v5 + 4), 0);
      FIELD_U32(v5, 20) = 0;
      FIELD_U32(v5, 28) |= 2u;
      FIELD_U32(v5, 24) = 1065353216;
    }
    return (_DWORD *)(*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8E274);
  }
  return result;
}
