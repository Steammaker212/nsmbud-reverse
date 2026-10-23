/* sub_602F6758
 * address: 0x602F6758   size: 52   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602F6758(int a1)
{
  int v1; // r0
  int v2; // r1

  v1 = FIELD_U32(a1, 6328);
  if ( v1 >= 0 )
  {
    v2 = EnemyCounterMaybe_instance;
    if ( (unsigned int)v1 < 0xA )
      v2 = EnemyCounterMaybe_instance + v1;
    FIELD_U8(v2, 180) = 0;
  }
  return 1;
}
