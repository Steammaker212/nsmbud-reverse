/* sub_607F9120
 * address: 0x607F9120   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607F9120(int a1, float a2)
{
  StateMethodExecuter *result; // r0

  if ( FIELD_U8(a1, 36865) )
    StateMgr__changeState((StateMgr *)(a1 + 744), (StateBase *)&dword_60CC6440);
  result = (StateMethodExecuter *)FIELD_U8(a1, 36866);
  if ( FIELD_U8(a1, 36866) )
  {
    sub_6054555C(a1 + 51544, FIELD_U32(a1, 85052), a2);
    sub_6054554C(a1 + 51544);
    return StateMgr__changeState((StateMgr *)(a1 + 744), (StateBase *)&dword_60CC6420);
  }
  return result;
}
