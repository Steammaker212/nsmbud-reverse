/* sub_60667D70
 * address: 0x60667D70   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60667D70(int a1)
{
  unsigned int v1; // r4
  unsigned int v2; // r5

  v1 = a1 + 8056;
  v2 = a1 + 6104;
  do
  {
    ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(v2 + 16));
    v2 += 488;
  }
  while ( v2 < v1 );
  return 1;
}
