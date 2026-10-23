/* sub_6066F7B4
 * address: 0x6066F7B4   size: 716   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6066F7B4(int a1, unsigned int a2, int a3, int a4)
{
  int v4; // r1

  v4 = (a2 >> 8) & 7;
  if ( v4 != 7 )
    __asm { ADD             PC, R1, LR }
  FIELD_U32(a1, 8248) = 0;
  if ( a4 )
  {
    FIELD_U32(a1, 8244) = FIELD_U32(a3, 24);
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB71E8);
  }
  else
  {
    FIELD_U32(a1, 8244) = FIELD_U32(a3, 28);
    return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB7148);
  }
}
