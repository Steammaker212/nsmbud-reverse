/* KoopaTroopa_onDelete
 * address: 0x6035B18C   size: 108   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall KoopaTroopa_onDelete(int a1)
{
  int v2; // r0
  _DWORD *v3; // r0

  v2 = FIELD_U32(a1, 6848);
  if ( v2 == 1 )
  {
    v3 = (_DWORD *)(EnemyCounterMaybe_instance + 196);
    goto LABEL_5;
  }
  if ( !v2 )
  {
    v3 = (_DWORD *)(EnemyCounterMaybe_instance + 192);
LABEL_5:
    --*v3;
  }
  KoopaTroopa_onDelete_helper(dword_60C9A1F0);
  return CarryableEnemy__onDelete((CarryableEnemy *)a1);
}
