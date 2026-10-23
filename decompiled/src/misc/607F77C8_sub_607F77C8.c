/* sub_607F77C8
 * address: 0x607F77C8   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_607F77C8(int a1)
{
  StateMethodExecuter *result; // r0
  int *v3; // r1

  result = (StateMethodExecuter *)sub_607F6ABC(dword_60CC62E4);
  if ( !result )
  {
    if ( FIELD_U8(dword_60CC6D78, 109050) )
      v3 = &dword_60CC63B4;
    else
      v3 = &dword_60CC6374;
    return StateMgr__changeState((StateMgr *)(a1 + 216), (StateBase *)v3);
  }
  return result;
}
