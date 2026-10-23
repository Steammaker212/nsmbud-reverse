/* sub_60543DE0
 * address: 0x60543DE0   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60543DE0(int a1)
{
  int *v2; // r5
  int *v3; // r1

  v2 = (int *)(a1 + 33480);
  if ( sub_6045A444(dword_60C9CFB8, FIELD_U32(a1, 33480)) == 1 )
  {
    sub_6045BE8C(dword_60C9CFB8, *v2);
    FIELD_U32(a1, 33476) = 5;
    v3 = &dword_60CAC2FC;
  }
  else
  {
    v3 = &dword_60CAC21C;
  }
  return StateMgr__changeState((StateMgr *)(a1 + 24), (StateBase *)v3);
}
