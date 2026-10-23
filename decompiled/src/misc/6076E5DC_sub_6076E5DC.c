/* sub_6076E5DC
 * address: 0x6076E5DC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6076E5DC(int a1)
{
  StateMethodExecuter *result; // r0

  if ( sub_60778128(dword_60CBFA90) == 1 )
    return StateMgr__changeState((StateMgr *)(a1 + 11332), &stru_60CBF738);
  result = *(StateMethodExecuter **)(a1 + 11348);
  if ( !result )
    return (StateMethodExecuter *)sub_60777C78(dword_60CBFA90);
  return result;
}
