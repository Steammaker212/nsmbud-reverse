/* sub_606D6F64
 * address: 0x606D6F64   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_606D6F64(int a1, int a2, unsigned __int16 a3)
{
  int v3; // r1
  float v4; // s2

  FIELD_U32(a1, 6148) = a3;
  v3 = FIELD_U32(a2, 80) ^ 1;
  v4 = (float)byte_60B057DC[v3];
  FIELD_U32(a1, 80) = v3;
  FIELD_F32(a1, 120) = v4 * 1.1;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 100) = -1102263091;
  return StateMgr__changeState((StateMgr *)(a1 + 6084), &stru_60CBB738);
}
