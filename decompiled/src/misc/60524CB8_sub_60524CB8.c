/* sub_60524CB8
 * address: 0x60524CB8   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60524CB8(int a1)
{
  _DWORD *v1; // r1
  int v2; // r2

  v1 = (_DWORD *)(a1 + 4660);
  v2 = FIELD_U32(a1, 4660);
  if ( !v2 )
    return StateMgr__changeState((StateMgr *)(a1 + 24), &stru_60CA9D24);
  *v1 = v2 - 1;
  return (StateMethodExecuter *)(v2 - 1);
}
