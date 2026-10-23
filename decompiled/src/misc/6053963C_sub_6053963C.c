/* sub_6053963C
 * address: 0x6053963C   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6053963C(int a1)
{
  StateMgr *v1; // r0
  int *v2; // r1

  v1 = (StateMgr *)(a1 + 36);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
    v2 = &dword_60CAB4B4;
  else
    v2 = &dword_60CAB534;
  return StateMgr__changeState(v1, (StateBase *)v2);
}
