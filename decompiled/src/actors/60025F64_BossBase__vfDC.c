/* BossBase__vfDC
 * address: 0x60025F64   size: 236   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A93B4
// 
// Overridden by:
//   - 0x60030E24 : SumoBrosBoss
StateMethodExecuter *__fastcall BossBase__vfDC(BossBase *a1)
{
  StateMethodExecuter **p_currentMethodExecuter; // r5
  int v3; // r1
  StateMethodExecuter *result; // r0

  FIELD_U32(a1, 0x6C) = FIELD_U32(a1, 0x1B8C);
  FIELD_U32(a1, 0x78) = FIELD_U32(a1, 0x1B98);
  FIELD_F32(a1, 0x64) = FIELD_F32(a1, 0x1BA4);
  FIELD_F32(a1, 0x68) = FIELD_F32(a1, 0x1BA8);
  LOWORD(FIELD_U32(a1, 0x1884)) = FIELD_U32(a1, 0x1BAC);
  HIWORD(FIELD_U32(a1, 0x1884)) = FIELD_U32(a1, 0x1BB0);
  p_currentMethodExecuter = &FIELD_U32(a1, 0x17CC);
  FIELD_U32(a1, 0x17D0) = (StateBase *)(*((int (__fastcall **)(StateMethodExecuter *))FIELD_U32(a1, 0x17CC)
                                                   + 2))(FIELD_U32(a1, 0x17CC));
  (*((void (__fastcall **)(StateExecuter *, StateMethodExecuter **))FIELD_U32(a1, 0x17C4) + 3))(
    FIELD_U32(a1, 0x17C4),
    p_currentMethodExecuter);
  v3 = FIELD_U32(a1, 0x17D4);
  FIELD_U32(a1, 0x17D4) = 0;
  result = (StateMethodExecuter *)(*((int (__fastcall **)(StateExecuter *, int))FIELD_U32(a1, 0x17C4)
                                   + 4))(
                                    FIELD_U32(a1, 0x17C4),
                                    v3);
  *p_currentMethodExecuter = result;
  return result;
}
