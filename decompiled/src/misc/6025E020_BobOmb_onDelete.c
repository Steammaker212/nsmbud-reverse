/* BobOmb_onDelete
 * address: 0x6025E020   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BobOmb_onDelete(int a1)
{
  int v1; // r2

  if ( FIELD_U32(a1, 6440) != 2 )
  {
    v1 = FIELD_U32(EnemyCounterMaybe_instance, 224) - 1;
    if ( v1 <= 0 )
      v1 = 0;
    FIELD_U32(EnemyCounterMaybe_instance, 224) = v1;
  }
  BobOmb_onDelete_helper();
  return 1;
}
