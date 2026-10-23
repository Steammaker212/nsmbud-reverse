/* sub_608C402C
 * address: 0x608C402C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608C402C(int a1)
{
  sub_608C3C60();
  nn__os__LockMutex(&unk_60CC927C);
  FIELD_U32(a1, 532) = 0;
  FIELD_U32(a1, 536) = 0;
  sub_608C3C60();
  return nn__os__UnlockMutex(&unk_60CC927C);
}
