/* sub_604F4D20
 * address: 0x604F4D20   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604F4D20(int a1)
{
  unsigned int v2; // r0
  unsigned int v3; // r0
  StateMethodExecuter *result; // r0

  v2 = FIELD_U32(a1, 7136);
  if ( v2 < 0xA )
  {
    result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(*(_DWORD *)(FIELD_U32(a1, 9628) + 4 * v2), 1u)
                                                       + 51);
    if ( ((unsigned __int8)result & 1) == 0 )
      return result;
    return StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CA697C);
  }
  v3 = v2 - 10;
  if ( v3 >= 5 )
    v3 = 0;
  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_6047482C(*(_DWORD *)(FIELD_U32(a1, 9632) + 4 * v3), 1u)
                                                     + 51);
  if ( ((unsigned __int8)result & 1) != 0 )
    return StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CA697C);
  return result;
}
