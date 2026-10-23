/* CarryableEnemy__vf294
 * address: 0x60272D5C   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by:
//   - 0x603A3540 : ShellEnemy
int __fastcall CarryableEnemy__vf294(int a1)
{
  ActiveCollider *v2; // r5
  int v3; // r1
  int v4; // r0
  int v5; // r0

  v2 = (ActiveCollider *)(a1 + 188);
  FIELD_U32(a1, 6328) = FIELD_U32(a1, 116);
  v3 = FIELD_U32(a1, 308);
  v4 = FIELD_U32(a1, 304);
  FIELD_U32(a1, 6316) = v3;
  FIELD_U32(a1, 6312) = v4;
  v5 = FIELD_U32(a1, 312);
  FIELD_U32(a1, 6324) = FIELD_U32(a1, 316);
  FIELD_U32(a1, 6320) = v5;
  sub_6015907C((ActiveCollider *)(a1 + 188), 128);
  sub_6015913C(v2, 1024);
  FIELD_U32(a1, 328) = 9;
  FIELD_U32(a1, 568) &= ~2u;
  CollisionMgr_vf14(a1 + 648);
  FIELD_U8(a1, 6055) = 1;
  return 6055;
}
