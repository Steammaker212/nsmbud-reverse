/* ChallengeResCacheHeap_ref
 * address: 0x6081AA0C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall ChallengeResCacheHeap_ref(int a1)
{
  _DWORD v3[4]; // [sp+8h] [bp-10h] BYREF

  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = "ChallengeResCacheHeap";
  FIELD_U32(a1, 196) = sub_608F8808(125829120, v3, 0, 4, 1, 0);
  return sub_608EF6A8(a1);
}
