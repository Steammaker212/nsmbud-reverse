/* sub_606C43D8
 * address: 0x606C43D8   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606C43D8(StateMethodExecuter *result)
{
  float v1; // s0
  int v2; // r1
  void *vtable; // r1

  v1 = *(float *)&FIELD_U32(result + (6) * 12, 0x0) + *((float *)&FIELD_U32(result + (3) * 12, 0x4) + 4 * LOBYTE(FIELD_U32(result + (8) * 12, 0x0)));
  *(float *)&FIELD_U32(result + (6) * 12, 0x0) = v1;
  *(float *)&FIELD_U32(result + (5) * 12, 0x8) = v1 + *(float *)&FIELD_U32(result + (5) * 12, 0x8);
  v2 = FIELD_U32(result + (6) * 12, 0x8) - 1;
  FIELD_U32(result + (6) * 12, 0x8) = v2;
  if ( !v2 )
  {
    vtable = FIELD_U32(result + (7) * 12, 0x0);
    if ( vtable )
    {
      FIELD_U32(result + (6) * 12, 0x8) = (int)vtable;
      return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (1) * 12, 0x8), (StateBase *)&dword_60CBAB40);
    }
    else
    {
      FIELD_U32(result + (6) * 12, 0x8) = (int)FIELD_U32(result + (7) * 12, 0x4);
      return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (1) * 12, 0x8), (StateBase *)&dword_60CBAB60);
    }
  }
  return result;
}
