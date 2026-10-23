/* BoomBoomBase__vf41C
 * address: 0x60052F4C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall BoomBoomBase__vf41C(int a1)
{
  int result; // r0

  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1116))(a1);
  CollisionActor__handleGravity((CollisionActor *)a1);
  CollisionActor__handleSpeed((CollisionActor *)a1);
  CollisionMgr_process((_BYTE *)(a1 + 648));
  if ( (FIELD_U8(a1, 2872) & 1) != 0 )
    FIELD_U32(a1, 124) = 0;
  result = FIELD_U16(a1, 6276);
  if ( !FIELD_U16(a1, 6276) )
  {
    result = FIELD_U32(EnemyCounterMaybe_instance, 24);
    if ( result )
      FIELD_U8(result, 6100) = 1;
  }
  return result;
}
