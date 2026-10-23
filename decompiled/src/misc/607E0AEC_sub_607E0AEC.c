/* sub_607E0AEC
 * address: 0x607E0AEC   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_607E0AEC(StateMgr *a1)
{
  int *result; // r0
  int v3; // r5

  result = &dword_60C99DD0;
  v3 = dword_60C99DD0;
  if ( dword_60C99DD0 )
  {
    StateMgr__changeState(a1 + 187, (StateBase *)&dword_60CA92AC);
    a1[678].currentMethodExecuter = (StateMethodExecuter *)60;
    sub_6081699C(dword_60CC6B68);
    return sub_604B63E0((_DWORD *)(v3 + 16), 40, 0);
  }
  return result;
}
