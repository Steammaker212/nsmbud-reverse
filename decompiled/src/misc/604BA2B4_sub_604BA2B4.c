/* sub_604BA2B4
 * address: 0x604BA2B4   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604BA2B4(int a1)
{
  StateMethodExecuter *result; // r0

  if ( FIELD_S32(a1, 3664) <= 0 )
  {
    FIELD_U32(a1, 3684) = 0;
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA2580);
  }
  else
  {
    sub_60473DE4((_DWORD *)(a1 + 40), 1u, &dword_60CA2570, 0);
    result = *(StateMethodExecuter **)(a1 + 3692);
    if ( !result )
      result = (StateMethodExecuter *)sub_60473DE4((_DWORD *)(a1 + 40), 2u, &dword_60CA2578, 0);
    FIELD_U32(a1, 3684) = 1;
    FIELD_U8(a1, 3696) = 0;
  }
  return result;
}
