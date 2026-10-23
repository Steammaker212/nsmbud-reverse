/* CarryableEnemy__collisionIceball
 * address: 0x6027298C   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A6CF8
// 
// Overridden by: None
signed int __fastcall CarryableEnemy__collisionIceball(int a1, int a2, int a3)
{
  unsigned int v6; // r0
  _BYTE *v7; // r7
  _DWORD *v8; // r0

  v7 = (_BYTE *)(a1 + 6340);
  v6 = FIELD_S8(a1, 6340);
  if ( v6 <= 3 )
  {
    v8 = *(_DWORD **)(PlayerMgr_instance + 4 * v6 + 32);
    if ( v8 )
      Player_ReleaseCarryableEnemy(v8, a1);
  }
  *v7 = -1;
  FIELD_U32(a1, 6344) = 0;
  FIELD_U8(a1, 84) = -1;
  return Enemy__collisionIceball((Enemy *)a1, a2, a3);
}
