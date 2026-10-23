/* sub_6048912C
 * address: 0x6048912C   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6048912C(int a1)
{
  unsigned int v1; // r1

  v1 = FIELD_U32(a1, 14228);
  if ( v1 >= 4 )
    v1 = 0;
  return StateMgr__changeState((StateMgr *)(*(_DWORD *)(a1 + 4 * v1 + 47800) + 20), (StateBase *)&dword_60C9F7E0);
}
