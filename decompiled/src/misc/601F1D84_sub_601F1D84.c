/* sub_601F1D84
 * address: 0x601F1D84   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_601F1D84(StateMgr *a1)
{
  float v2; // s0

  v2 = sub_608332CC(&a1[5], &FIELD_U32(a1 + (37) * 16, 0xC), 0.2, 3.0, 2.0);
  if ( v2 <= 0.00000011921 && v2 >= -0.00000011921 )
  {
    ((void (__fastcall *)(StateMgr *))FIELD_U32(a1, 0x0)[4].methodExecuter.owner)(a1);
    StateMgr__changeState(a1 + 18, (StateBase *)&unk_60C8B654);
  }
}
