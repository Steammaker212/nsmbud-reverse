/* sub_604AEFFC
 * address: 0x604AEFFC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_604AEFFC(int a1)
{
  StateMethodExecuter *result; // r0
  int *v3; // r2

  result = (StateMethodExecuter *)FIELD_U8(a1, 3666);
  if ( !result )
  {
    v3 = &dword_60CA1870;
    if ( FIELD_U8(a1, 3667) )
      v3 = &dword_60CA1868;
    sub_60473DE4((_DWORD *)(a1 + 36), 2u, v3, 0);
    return StateMgr__changeState((StateMgr *)(a1 + 20), (StateBase *)&dword_60CA1808);
  }
  return result;
}
