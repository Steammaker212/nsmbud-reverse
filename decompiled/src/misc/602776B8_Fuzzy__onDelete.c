/* Fuzzy__onDelete
 * address: 0x602776B8   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: CollisionActor : 0x60003444
// 
// Overridden by: None
int __fastcall Fuzzy__onDelete(_DWORD *a1)
{
  unsigned int v2; // r1
  int v3; // r0
  int v4; // r0
  int v5; // r1

  v2 = a1[1631];
  if ( v2 )
  {
    v3 = ActorMgrRelated_getById(ActorMgr__instance + 27168, v2);
    if ( v3 )
      FIELD_U8(v3, 10567) = 1;
    a1[1631] = 0;
  }
  v4 = a1[1626];
  if ( v4 >= 0 )
  {
    v5 = EnemyCounterMaybe_instance;
    if ( (unsigned int)v4 < 0xA )
      v5 = EnemyCounterMaybe_instance + v4;
    FIELD_U8(v5, 263) = 0;
  }
  if ( a1[1576] )
  {
    a1[1576] = 0;
    a1[1575] = 0;
  }
  return 1;
}
