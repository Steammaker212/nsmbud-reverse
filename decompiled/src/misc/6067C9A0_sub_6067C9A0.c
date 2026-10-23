/* sub_6067C9A0
 * address: 0x6067C9A0   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6067C9A0(int a1)
{
  int v2; // r0

  if ( FIELD_U8(a1, 10189) )
  {
    FIELD_U8(a1, 10188) = FIELD_U32(a1, 24) & 1;
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB7EEC);
  }
  else
  {
    v2 = (*(int (__fastcall **)(int, _DWORD))(*(_DWORD *)a1 + 208))(a1, FIELD_U8(a1, 10194));
    if ( v2 )
    {
      FIELD_U32(a1, 10180) = FIELD_U32(v2, 8);
      return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB7F2C);
    }
    else
    {
      return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB7F0C);
    }
  }
}
