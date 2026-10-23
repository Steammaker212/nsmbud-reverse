/* sub_608DA828
 * address: 0x608DA828   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DA828(int a1)
{
  int v2; // r0

  *(_DWORD *)a1 = off_60C5D2B4;
  sub_608AA4D0(a1 + 8);
  *(_DWORD *)a1 = off_60C5BB60;
  FIELD_U32(a1, 8) = off_60C5BBA4;
  FIELD_U32(a1, 424) = &off_60C5BBC0;
  memset((void *)(a1 + 428), 0, 38);
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 468));
  FIELD_U8(a1, 504) = 0;
  v2 = operator_new(0x230u);
  FIELD_U32(a1, 456) = sub_608DC5F8(v2);
  return a1;
}
