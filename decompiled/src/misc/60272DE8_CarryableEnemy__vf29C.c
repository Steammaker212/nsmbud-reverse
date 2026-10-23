/* CarryableEnemy__vf29C
 * address: 0x60272DE8   size: 228   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x603A35FC : ShellEnemy
int __fastcall CarryableEnemy__vf29C(int a1)
{
  ActiveCollider *v2; // r5
  int v3; // r0
  int v4; // r0
  unsigned int v5; // r0
  _DWORD *v6; // r0

  v2 = (ActiveCollider *)(a1 + 188);
  FIELD_U32(a1, 6328) = FIELD_U32(a1, 116);
  v3 = FIELD_U32(a1, 6312);
  FIELD_U32(a1, 308) = FIELD_U32(a1, 6316);
  FIELD_U32(a1, 304) = v3;
  v4 = FIELD_U32(a1, 6320);
  FIELD_U32(a1, 316) = FIELD_U32(a1, 6324);
  FIELD_U32(a1, 312) = v4;
  FIELD_U8(a1, 6349) = 0;
  sub_6015913C((ActiveCollider *)(a1 + 188), 128);
  sub_6015907C(v2, 1024);
  FIELD_U32(a1, 328) = 0;
  v5 = FIELD_S8(a1, 6340);
  if ( v5 <= 3 )
  {
    v6 = *(_DWORD **)(PlayerMgr_instance + 4 * v5 + 32);
    if ( v6 )
      Player_ReleaseCarryableEnemy(v6, a1);
  }
  FIELD_U8(a1, 6340) = -1;
  FIELD_U32(a1, 6344) = 0;
  CollisionMgr_vf14(a1 + 648);
  FIELD_U32(a1, 568) |= 2u;
  FIELD_U8(a1, 538) &= 0xF8u;
  FIELD_U8(a1, 6055) = 0;
  return 6055;
}
