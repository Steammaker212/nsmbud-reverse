/* sub_60749028
 * address: 0x60749028   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60749028(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)sub_605EB988(**(_DWORD **)(*(_DWORD *)(FIELD_U32(a1, 644) + 12) + 12));
  if ( result == (StateMethodExecuter *)1 )
    return StateMgr__changeState((StateMgr *)(a1 + 712), (StateBase *)&dword_60CBE760);
  return result;
}
