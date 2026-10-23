/* sub_60063CC8
 * address: 0x60063CC8   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60063CC8(int a1, int a2)
{
  int result; // r0
  _DWORD *v5; // r5
  StateBase *CurrentState; // r0
  int v7; // r7
  StateBase *v8; // r0
  int v9; // r6

  v5 = (_DWORD *)(a1 + 7076);
  result = FIELD_U32(a1, 7076);
  if ( !result )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v7 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    result = (*((int (**)(void))stru_60C8E1CC._.vtable + 2))();
    if ( v7 != result )
    {
      FIELD_U32(a1, 80) = a2;
      FIELD_F32(a1, 120) = (float)byte_60AFE3F4[a2];
      FIELD_U32(a1, 124) = 1077936128;
      FIELD_U32(a1, 128) = 0;
      FIELD_U32(a1, 104) = 0;
      FIELD_U32(a1, 100) = -1103101952;
      FIELD_U32(a1, 132) = 0;
      v8 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
      v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v8, 0x0) + 2))(v8);
      if ( v9 != (*(int (**)(void))(dword_60C8E274 + 8))() )
        (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8E274);
      *v5 = 8;
      return 8;
    }
  }
  return result;
}
