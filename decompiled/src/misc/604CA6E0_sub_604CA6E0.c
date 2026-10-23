/* sub_604CA6E0
 * address: 0x604CA6E0   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604CA6E0(int a1)
{
  int v2; // r0
  int v3; // r6
  _BOOL4 v4; // r0
  StateMethodExecuter *result; // r0
  _BOOL4 v6; // r0

  v2 = FIELD_U32(a1, 615724);
  if ( v2 == 2 )
  {
    v4 = sub_6047F178(a1 + 3840, dword_60CA4D70);
  }
  else
  {
    v3 = 1;
    if ( v2 != 1 )
      goto LABEL_6;
    v4 = sub_6047EF78(a1 + 3840, dword_60CA4D70);
  }
  v3 = !v4;
LABEL_6:
  result = *(StateMethodExecuter **)(a1 + 615728);
  if ( result == (StateMethodExecuter *)1 )
  {
    v6 = sub_6047EF78(a1 + 3840, dword_60CA4D74);
  }
  else
  {
    if ( result != (StateMethodExecuter *)2 )
    {
      if ( !v3 )
        return result;
      return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA34F8);
    }
    v6 = sub_6047F178(a1 + 3840, dword_60CA4D74);
  }
  result = (StateMethodExecuter *)!v6;
  if ( (v3 & (unsigned int)result) != 0 )
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA34F8);
  return result;
}
