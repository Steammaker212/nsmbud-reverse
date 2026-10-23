/* sub_6074D820
 * address: 0x6074D820   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_6074D820(int a1)
{
  float v2; // s0
  float v3; // s0
  StateMethodExecuter *result; // r0

  FIELD_U32(a1, 100) = -1067450368;
  v2 = FIELD_F32(a1, 124) + -3.5;
  FIELD_F32(a1, 124) = v2;
  v3 = v2 + FIELD_F32(a1, 712);
  FIELD_F32(a1, 712) = v3;
  if ( v3 <= 0.0 )
  {
    FIELD_U32(a1, 712) = 0;
    FIELD_U32(a1, 124) = 0;
  }
  result = (StateMethodExecuter *)*(unsigned __int8 *)(sub_60232E78(dword_60C8D904) + 24);
  if ( ((unsigned __int8)result & 0x20) != 0 )
    return StateMgr__changeState((StateMgr *)(a1 + 736), (StateBase *)&dword_60CBE9AC);
  return result;
}
