/* sub_607DEC64
 * address: 0x607DEC64   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607DEC64(_DWORD *a1)
{
  void *v2; // r0

  *a1 = off_60C264D0;
  sead__CriticalSection__dtor(a1 + 18);
  v2 = (void *)nullsub_2157(a1);
  operator_delete(v2);
}
