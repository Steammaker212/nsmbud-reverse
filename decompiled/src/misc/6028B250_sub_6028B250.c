/* sub_6028B250
 * address: 0x6028B250   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6028B250(int a1)
{
  StateBase *CurrentState; // r0
  int v3; // r6
  StateBase *v4; // r0
  int v5; // r5

  sub_602A3EFC(a1 + 6352, 24);
  if ( !FIELD_U8(a1, 6609) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v3 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v3 == (*(int (**)(void))(dword_60C8F30C + 8))() && !FIELD_U8(a1, 6605)
      || (v4 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
          v5 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v4, 0x0) + 2))(v4),
          v5 == (*(int (**)(void))(dword_60C8F2CC + 8))())
      && FIELD_U8(a1, 6605) != 2 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F2CC);
    }
    else
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8F2AC);
    }
  }
  return 1;
}
