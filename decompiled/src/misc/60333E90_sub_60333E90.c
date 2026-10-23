/* sub_60333E90
 * address: 0x60333E90   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60333E90(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  StateBase *v4; // r0
  int v5; // r5

  sub_602A3EFC(a1 + 6304, 8, 0.06);
  CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
  v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
  if ( v3 == (*(int (**)(void))(dword_60C94008 + 8))() )
  {
    if ( FIELD_U8(a1, 7004) )
    {
LABEL_3:
      FIELD_U32(a1, 6964) = 47721858;
      FIELD_U32(a1, 6968) = 265121;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94028);
    }
  }
  else
  {
    v4 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v4, 0x0) + 2))(v4);
    if ( v5 == (*(int (**)(void))(dword_60C94028 + 8))() )
    {
      if ( !FIELD_U8(a1, 7004) )
        return 1;
      goto LABEL_3;
    }
    if ( !FIELD_U8(a1, 7004) )
    {
      FIELD_U32(a1, 6964) = 47721858;
      FIELD_U32(a1, 6968) = 265121;
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C94008);
    }
  }
  return 1;
}
