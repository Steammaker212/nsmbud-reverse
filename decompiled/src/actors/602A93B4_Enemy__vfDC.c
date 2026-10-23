/* Enemy__vfDC
 * address: 0x602A93B4   size: 108   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x602789DC : Fuzzy
//   - 0x602D6B00 : SledgeBro
//   - 0x6033B0CC : Goomba
//   - 0x60363D00 : ParaGoomba
//   - 0x603DF400 : RiverPiranha
//   - 0x602649D0 : BrosBase
//   - 0x60025F64 : BossBase
//   - 0x603A1C9C : ShellEnemy
//   - 0x6030FE98 : Kanibo
StateMethodExecuter *__fastcall Enemy__vfDC(Enemy *this)
{
  StateMethodExecuter **p_currentMethodExecuter; // r4
  int v3; // r1
  StateMethodExecuter *result; // r0

  p_currentMethodExecuter = &FIELD_U32(this, 0x17CC);
  FIELD_U32(this, 0x17D0) = (StateBase *)(*((int (__fastcall **)(StateMethodExecuter *))FIELD_U32(this, 0x17CC)
                                                   + 2))(FIELD_U32(this, 0x17CC));
  (*((void (__fastcall **)(StateExecuter *, StateMethodExecuter **))FIELD_U32(this, 0x17C4) + 3))(
    FIELD_U32(this, 0x17C4),
    p_currentMethodExecuter);
  v3 = FIELD_U32(this, 0x17D4);
  FIELD_U32(this, 0x17D4) = 0;
  result = (StateMethodExecuter *)(*((int (__fastcall **)(StateExecuter *, int))FIELD_U32(this, 0x17C4)
                                   + 4))(
                                    FIELD_U32(this, 0x17C4),
                                    v3);
  *p_currentMethodExecuter = result;
  return result;
}
