/* sub_60353644
 * address: 0x60353644   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60353644(int a1)
{
  int v1; // r1

  if ( (FIELD_U8(a1, 23) & 0x10) == 0 )
  {
    v1 = FIELD_U32(EnemyCounterMaybe_instance, 960);
    if ( v1 )
      FIELD_U32(EnemyCounterMaybe_instance, 960) = v1 - 1;
  }
  return 1;
}
