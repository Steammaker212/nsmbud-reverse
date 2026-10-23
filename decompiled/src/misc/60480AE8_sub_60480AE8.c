/* sub_60480AE8
 * address: 0x60480AE8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60480AE8(StateMethodExecuter *result)
{
  if ( BYTE2(result[1069].currentState) )
    return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&unk_60C9ED80);
  if ( AreaTask_intance )
  {
    if ( FIELD_U32(AreaTask_intance, 1832) == 1 )
      return StateMgr__changeState((StateMgr *)&result[2], (StateBase *)&unk_60C9EDA0);
  }
  return result;
}
