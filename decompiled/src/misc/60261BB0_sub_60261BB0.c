/* sub_60261BB0
 * address: 0x60261BB0   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_60261BB0(int a1, int a2, int a3)
{
  int ProfileId; // r0
  bool v7; // zf
  StateBase *CurrentState; // r0
  int v9; // r7

  ProfileId = Actor__getProfileId(*(Actor **)(a3 + 64));
  v7 = ProfileId == 769;
  if ( ProfileId != 769 )
    v7 = ProfileId == 770;
  if ( (v7 || ProfileId == 771)
    && (CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084)),
        v9 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState),
        v9 == (*(int (**)(void))(dword_60C8E44C + 8))()) )
  {
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8E48C);
  }
  else
  {
    BobOmb_vf65(a1, a2, a3);
  }
}
