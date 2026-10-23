/* sub_605E1DAC
 * address: 0x605E1DAC   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E1DAC(int a1)
{
  if ( !FIELD_U8(dword_60CC6D78, 109032) )
    return 0;
  FIELD_U32(a1, 8020) = 0;
  StateMgr__changeState((StateMgr *)(a1 + 6740), (StateBase *)&dword_60CB1A44);
  return 1;
}
