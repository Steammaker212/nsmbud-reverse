/* sub_60273514
 * address: 0x60273514   size: 220   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_60273514(int a1)
{
  int v2; // r4
  StateBase *CurrentState; // r0
  int v4; // r6
  unsigned int v5; // r0
  _BYTE *v6; // r0

  v2 = 0;
  if ( !sub_602A588C(a1) )
  {
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    if ( v4 != (*((int (**)(void))Enemy_StateId_Frozen._._.vtable + 2))()
      && !sub_600025B8(a1)
      && !sub_60777B9C(dword_60CBFA90) )
    {
      v5 = FIELD_S8(a1, 6340);
      if ( v5 <= 3 && (v6 = *(_BYTE **)(PlayerMgr_instance + 4 * v5 + 32)) != 0 )
      {
        if ( (v6[1220] & 4) == 0 )
          return (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)v6 + 640))(v6, 3) == 0;
      }
      else
      {
        return 1;
      }
    }
  }
  return v2;
}
