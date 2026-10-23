/* sub_60497778
 * address: 0x60497778   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60497778(int a1)
{
  int v2; // r5
  StateBase *v4; // r1

  v2 = a1 + 98748;
  if ( sub_60515B24(a1 + 98748) == 1 )
    return (StateMethodExecuter *)sub_60515A14(v2);
  if ( sub_60515B04(v2) )
  {
    FIELD_U8(a1, 146852) = 1;
    FIELD_U8(a1, 56) = 1;
    v4 = (StateBase *)&dword_60CA05A0;
  }
  else
  {
    FIELD_U8(a1, 56) = 1;
    v4 = (StateBase *)&unk_60CA0600;
  }
  return StateMgr__changeState((StateMgr *)(a1 + 40), v4);
}
