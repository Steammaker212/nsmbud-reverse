/* sub_60063B8C
 * address: 0x60063B8C   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60063B8C(int a1, int a2)
{
  int result; // r0
  _DWORD *v4; // r6
  StateBase *CurrentState; // r0
  int v6; // r5

  v4 = (_DWORD *)(a1 + 7072);
  result = FIELD_U32(a1, 7072);
  if ( !result )
  {
    result = FIELD_U8(a1, 2872);
    if ( (result & 1) != 0 )
    {
      FIELD_F32(a1, 120) = (float)byte_60AFE3F4[a2] * 3.5;
      FIELD_U32(a1, 124) = 0x40000000;
      FIELD_U32(a1, 128) = 0;
      FIELD_U32(a1, 104) = 0;
      FIELD_U32(a1, 100) = -1103101952;
      FIELD_U32(a1, 132) = 0;
      FIELD_U32(a1, 80) = a2;
      CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
      if ( v6 != (*((int (**)(void))stru_60C8E1CC._.vtable + 2))() )
        sub_6025E064(a1);
      *v4 = 32;
      return 32;
    }
  }
  return result;
}
