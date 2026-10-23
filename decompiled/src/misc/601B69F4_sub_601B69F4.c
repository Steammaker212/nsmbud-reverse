/* sub_601B69F4
 * address: 0x601B69F4   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601B69F4(int a1, StateBase *a2)
{
  int v4; // r6

  v4 = (*((int (__fastcall **)(StateBase *))FIELD_U32(a2, 0x0) + 2))(a2);
  if ( v4 != (*(int (**)(void))(dword_60C8AC40 + 8))() )
    FIELD_U16(a1, 440) &= ~4u;
  return StateMgr__changeState((StateMgr *)(a1 + 904), a2);
}
