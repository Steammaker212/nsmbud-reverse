/* sub_606C4498
 * address: 0x606C4498   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606C4498(StateMethodExecuter *result)
{
  char *v1; // r1
  float v2; // s0
  int v3; // r2

  v1 = (char *)result + 16 * LOBYTE(FIELD_U32(result + (8) * 12, 0x0));
  v2 = *(float *)&FIELD_U32(result + (6) * 12, 0x0) - *((float *)v1 + 10);
  *(float *)&FIELD_U32(result + (6) * 12, 0x0) = v2;
  *(float *)&FIELD_U32(result + (5) * 12, 0x8) = v2 + *(float *)&FIELD_U32(result + (5) * 12, 0x8);
  v3 = FIELD_U32(result + (6) * 12, 0x8) - 1;
  FIELD_U32(result + (6) * 12, 0x8) = v3;
  if ( !v3 )
  {
    FIELD_U32(result + (6) * 12, 0x8) = *((_DWORD *)v1 + 12);
    return StateMgr__changeState((StateMgr *)&FIELD_U32(result + (1) * 12, 0x8), (StateBase *)&dword_60CBAB80);
  }
  return result;
}
