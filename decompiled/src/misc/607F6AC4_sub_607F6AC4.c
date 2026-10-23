/* sub_607F6AC4
 * address: 0x607F6AC4   size: 44   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F6AC4(int a1)
{
  int v2; // r0

  v2 = operator_new_8DE25C(0xCCu, *(void **)(*(_DWORD *)a1 + 4 * *(_DWORD *)(*(_DWORD *)a1 + 20)), 4);
  return ChallengeResCacheMgr_ref(v2, a1);
}
