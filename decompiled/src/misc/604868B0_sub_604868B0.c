/* sub_604868B0
 * address: 0x604868B0   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604868B0(int a1)
{
  StateMethodExecuter *result; // r0
  StateBase *v3; // r1
  StateMgr *v4; // r0

  result = (StateMethodExecuter *)sub_607F6ABC(dword_60CC62E4);
  if ( !result )
  {
    if ( *(_BYTE *)(FIELD_U32(dword_60CC6E04, 40) + 6256) )
    {
      v3 = (StateBase *)&unk_60C9F580;
    }
    else
    {
      if ( FIELD_U32(a1, 47784) == 2 )
      {
        v4 = (StateMgr *)(a1 + 20);
        if ( FIELD_U8(a1, 47792) )
          v3 = (StateBase *)&unk_60C9F720;
        else
          v3 = (StateBase *)&stru_60C9F4C0;
        return StateMgr__changeState(v4, v3);
      }
      v3 = (StateBase *)&unk_60C9F6E0;
    }
    v4 = (StateMgr *)(a1 + 20);
    return StateMgr__changeState(v4, v3);
  }
  return result;
}
