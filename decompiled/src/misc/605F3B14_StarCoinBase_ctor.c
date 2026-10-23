/* StarCoinBase_ctor
 * address: 0x605F3B14   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StarCoinBase *__fastcall StarCoinBase_ctor(StarCoinBase *a1, ActorBuildInfo *a2)
{
  MultiStateActor__ctor(&FIELD_U32(a1, 0x0), a2);
  FIELD_U32(a1, 0x0)._._._.vtable = (int)StarCoinBase_vtable;
  memset(&FIELD_U32(a1, 0x17DC), 0, 0x38);
  FIELD_U8(a1, 0x1814) = -1;
  FIELD_U8(a1, 0x1815) = 0;
  FIELD_U32(a1, 0x1818) = 0;
  FIELD_U32(a1, 0x181C) = 0;
  FIELD_U8(a1, 0x1820) = 0;
  FIELD_U32(a1, 0x1824) = 0;
  FIELD_U8(a1, 0x1828) = 0;
  return a1;
}
