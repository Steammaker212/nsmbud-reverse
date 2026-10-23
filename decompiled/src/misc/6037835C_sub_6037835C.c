/* sub_6037835C
 * address: 0x6037835C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6037835C(int a1)
{
  if ( sub_60793184(*(_DWORD *)(FIELD_U32(a1, 6100) + 4)) >= 23.0 )
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60C9653C);
}
