/* sub_601E2420
 * address: 0x601E2420   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601E2420(int a1)
{
  StateMethodExecuter *result; // r0
  StateBase *v3; // r1

  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_601FEE28(dword_60C8C188) + 1371);
  if ( !result )
  {
    result = *(StateMethodExecuter **)(a1 + 332);
    if ( result == (StateMethodExecuter *)1 )
    {
      ++FIELD_U32(a1, 324);
      ++FIELD_U32(a1, 340);
      v3 = (StateBase *)&unk_60C895B8;
    }
    else
    {
      if ( result )
        return result;
      ++FIELD_U32(a1, 328);
      v3 = (StateBase *)&dword_60C894E0;
    }
    return StateMgr__changeState((StateMgr *)(a1 + 284), v3);
  }
  return result;
}
