/* sub_6053B160
 * address: 0x6053B160   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6053B160(int a1)
{
  StateMethodExecuter *result; // r0
  int *v3; // r1

  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(a1 + 12092, 0) + 51);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    if ( FIELD_U8(a1, 83572) && !FIELD_U8(a1, 83574) )
      v3 = &dword_60CAB4F4;
    else
      v3 = &dword_60CAB4D4;
    return StateMgr__changeState((StateMgr *)(a1 + 36), (StateBase *)v3);
  }
  return result;
}
