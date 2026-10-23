/* sub_60557E0C
 * address: 0x60557E0C   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_60557E0C(int a1)
{
  StateMgr *v1; // r0
  int *v2; // r1
  int v3; // r1

  if ( FIELD_U8(a1, 3686) )
  {
    v1 = (StateMgr *)(a1 + 24);
    v2 = &dword_60CAD6D8;
  }
  else
  {
    v3 = FIELD_U8(a1, 3688);
    v1 = (StateMgr *)(a1 + 24);
    if ( v3 )
      v2 = &dword_60CAD718;
    else
      v2 = &dword_60CAD6F8;
  }
  return StateMgr__changeState(v1, (StateBase *)v2);
}
