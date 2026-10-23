/* sub_6050120C
 * address: 0x6050120C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6050120C(int a1, int a2)
{
  FIELD_U8(a1, 7748) = 1;
  FIELD_U32(a1, 7720) = a2;
  if ( !a2 && *(_DWORD *)(sub_60834644(7720) + 492) )
    FIELD_U32(a1, 7720) = 1;
  return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CA74C8);
}
