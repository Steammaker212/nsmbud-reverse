/* sub_6055A978
 * address: 0x6055A978   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6055A978(int a1)
{
  int v1; // r1
  StateMgr *v2; // r0
  int *v3; // r1

  v1 = FIELD_U8(a1, 4042);
  v2 = (StateMgr *)(a1 + 24);
  if ( v1 )
    v3 = &dword_60CADB4C;
  else
    v3 = &dword_60CADB2C;
  return StateMgr__changeState(v2, (StateBase *)v3);
}
