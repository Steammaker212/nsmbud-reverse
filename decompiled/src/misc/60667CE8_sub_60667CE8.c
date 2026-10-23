/* sub_60667CE8
 * address: 0x60667CE8   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60667CE8(int a1)
{
  unsigned int v2; // r6
  int v3; // r0
  int v4; // r2

  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = a1 + 6104;
  do
  {
    SolidOnTopCollider_execute((ColliderBase *)(v2 + 16));
    v3 = FIELD_U32(a1, 116);
    v4 = FIELD_U32(v2, 468);
    *(_DWORD *)v2 = FIELD_U32(v2, 464);
    FIELD_U32(v2, 4) = v4;
    FIELD_U32(v2, 8) = v3;
    v2 += 488;
  }
  while ( v2 < a1 + 8056 );
  return 1;
}
