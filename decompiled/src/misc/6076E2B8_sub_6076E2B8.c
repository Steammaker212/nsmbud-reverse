/* sub_6076E2B8
 * address: 0x6076E2B8   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6076E2B8(int a1)
{
  StateMethodExecuter *result; // r0

  if ( sub_60778128(dword_60CBFA90) == 1 )
    return StateMgr__changeState((StateMgr *)(a1 + 11332), &stru_60CBF738);
  result = (StateMethodExecuter *)FIELD_U8(a1, 6900);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( FIELD_U8(dword_60C9A1F0, 6526) )
      return (StateMethodExecuter *)sub_60777C78(dword_60CBFA90);
    else
      return StateMgr__changeState((StateMgr *)(a1 + 11332), &stru_60CBF780);
  }
  return result;
}
