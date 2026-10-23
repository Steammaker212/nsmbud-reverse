/* sub_6051EC4C
 * address: 0x6051EC4C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6051EC4C(int a1)
{
  StateMethodExecuter *result; // r0

  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(a1 + 40, 0) + 51);
  if ( ((unsigned __int8)result & 1) != 0 )
  {
    *(_BYTE *)(FIELD_U32(a1, 15040) + 64) |= 1u;
    FIELD_U8(a1, 15044) = 0;
    FIELD_U8(a1, 15028) = 1;
    return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA9054);
  }
  return result;
}
