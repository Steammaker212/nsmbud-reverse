/* sub_605516C8
 * address: 0x605516C8   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_605516C8(int a1)
{
  StateMethodExecuter *result; // r0
  int v3; // r1
  StateBase *v4; // r1

  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(a1 + 44, 1u) + 51);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    v3 = 2;
    if ( FIELD_U32(a1, 27552) == 1 )
      v3 = 0;
    FIELD_U32(a1, 70248) = v3;
    sub_60553BD4(a1, 1);
    if ( sub_60553F20(a1) == 1 )
    {
      v4 = (StateBase *)&unk_60CAD118;
    }
    else
    {
      FIELD_U8(a1, 70260) = 0;
      v4 = (StateBase *)&unk_60CAD0B8;
    }
    return StateMgr__changeState((StateMgr *)(a1 + 24), v4);
  }
  return result;
}
