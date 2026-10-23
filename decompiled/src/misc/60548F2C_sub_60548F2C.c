/* sub_60548F2C
 * address: 0x60548F2C   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60548F2C(int a1, unsigned int a2)
{
  int v4; // r0

  FIELD_U16(a1, 16440) = 257;
  v4 = sub_60473B4C(a1 + 40);
  sub_6098F1D4(v4);
  if ( a2 >= 4 )
    a2 = 0;
  FIELD_U32(a1, 16436) = a2;
  return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)&dword_60CAC440);
}
