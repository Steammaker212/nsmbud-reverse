/* sub_601A1A68
 * address: 0x601A1A68   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601A1A68(StateMgr *a1)
{
  int v2; // r5
  StateMethodExecuter *result; // r0

  v2 = dword_60C99DD0 + 16;
  result = (StateMethodExecuter *)sub_604B82EC(dword_60C99DD0 + 16);
  if ( !result )
  {
    result = (StateMethodExecuter *)sub_604B80D0(v2);
    if ( !result )
      return StateMgr__changeState(a1 + 179, (StateBase *)&dword_60C89E5C);
  }
  return result;
}
