/* StarCoin_ctor
 * address: 0x605F357C   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StarCoin *__fastcall StarCoin_ctor(ActorBuildInfo *a1)
{
  StarCoin *v2; // r0
  StarCoin *this; // r0

  v2 = (StarCoin *)operator_new(0x1838u);
  this = (StarCoin *)StarCoinBase_ctor(&FIELD_U32(v2, 0x0), a1);
  FIELD_U32(this, 0x0)._._._._.vtable = (int)StarCoin_vtable;
  FIELD_U32(this, 0x182C) = 0;
  FIELD_U32(this, 0x1830) = 0;
  FIELD_U32(this, 0x1834) = 0;
  return this;
}
