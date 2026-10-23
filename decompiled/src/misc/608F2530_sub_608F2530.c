/* sub_608F2530
 * address: 0x608F2530   size: 212   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608F2530(int a1, int a2)
{
  sub_6090B274();
  *(_DWORD *)a1 = off_60C5C76C;
  FIELD_U32(a1, 24) = *(_DWORD *)a2;
  FIELD_U32(a1, 208) = 0;
  FIELD_U32(a1, 212) = 0;
  FIELD_U32(a1, 40) = 0;
  FIELD_U32(a1, 36) = 0;
  FIELD_U32(a1, 32) = 0;
  FIELD_U32(a1, 28) = 0;
  FIELD_U32(a1, 220) = 0;
  FIELD_U32(a1, 224) = 0;
  FIELD_U32(a1, 228) = FIELD_U32(a2, 4);
  FIELD_U32(a1, 232) = 4096;
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 236));
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 272));
  sead__CriticalSection__ctor((sead_IDisposer *)(a1 + 308));
  FIELD_U32(a1, 348) = a1;
  FIELD_U32(a1, 352) = nullsub_5635;
  FIELD_U32(a1, 356) = 0;
  FIELD_U32(a1, 344) = off_60C5C7E4;
  FIELD_U32(a1, 360) = a1 + 344;
  FIELD_U8(a1, 364) = 0;
  FIELD_U8(a1, 365) = FIELD_U8(a2, 8);
  FIELD_U8(a1, 366) = FIELD_U8(a2, 9);
  dword_60CC72DC(FIELD_U32(a1, 24), 1);
  return a1;
}
