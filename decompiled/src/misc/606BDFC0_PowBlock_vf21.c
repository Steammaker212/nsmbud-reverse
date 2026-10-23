/* PowBlock_vf21
 * address: 0x606BDFC0   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall PowBlock_vf21(int a1, int a2, unsigned __int16 a3)
{
  int v3; // r1

  v3 = FIELD_U32(a2, 80);
  FIELD_U32(a1, 6148) = a3;
  FIELD_U32(a1, 80) = v3 ^ 1;
  return StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&unk_60CBA6EC);
}
