/* sub_601A21C8
 * address: 0x601A21C8   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601A21C8(StateMgr *a1)
{
  int v2; // r0
  StateMethodExecuter *result; // r0

  v2 = dword_60C99DD0;
  if ( !dword_60C99DD0 )
  {
    StateMgr__changeState(a1 + 179, (StateBase *)&dword_60C8A01C);
    v2 = dword_60C99DD0;
  }
  result = *(StateMethodExecuter **)(v2 + 3796);
  if ( result == (StateMethodExecuter *)3 )
    return StateMgr__changeState(a1 + 179, (StateBase *)&dword_60C8A01C);
  return result;
}
