/* sub_600BB354
 * address: 0x600BB354   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_600BB354(int a1)
{
  _DWORD *v1; // r1
  int v2; // r2

  v1 = (_DWORD *)(a1 + 6192);
  v2 = FIELD_U32(a1, 6192);
  if ( !v2 )
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C836DC);
  *v1 = v2 - 1;
  return (StateMethodExecuter *)(v2 - 1);
}
