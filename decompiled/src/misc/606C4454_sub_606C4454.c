/* sub_606C4454
 * address: 0x606C4454   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606C4454(StateMethodExecuter *result)
{
  int v1; // r1

  *(float *)&FIELD_U32(result + (5) * 12, 0x8) = *(float *)&FIELD_U32(result + (6) * 12, 0x0) + *(float *)&FIELD_U32(result + (5) * 12, 0x8);
  v1 = FIELD_U32(result + (6) * 12, 0x8) - 1;
  FIELD_U32(result + (6) * 12, 0x8) = v1;
  if ( !v1 )
  {
    FIELD_U32(result + (6) * 12, 0x8) = (int)FIELD_U32(result + (7) * 12, 0x4);
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (1) * 12, 0x8), (StateBase *)&dword_60CBAB60);
  }
  return result;
}
