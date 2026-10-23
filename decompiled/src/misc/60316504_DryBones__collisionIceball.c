/* DryBones__collisionIceball
 * address: 0x60316504   size: 188   group: misc
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
signed int __fastcall DryBones__collisionIceball(int a1)
{
  _DWORD *v1; // r1
  int *v2; // r2
  unsigned int v3; // r1
  bool v4; // cc
  unsigned int v5; // r3
  int v6; // r1

  v1 = *(_DWORD **)(a1 + 6300);
  v2 = (int *)v1[3];
  v5 = v1[2];
  v3 = v1[17];
  v4 = v5 > v3;
  LOWORD(v5) = -1;
  if ( v4 )
    v2 += v3;
  HIWORD(v5) = 10921;
  v6 = *v2;
  FIELD_U32(v6, 20) = 1110441984;
  FIELD_U32(v6, 28) |= 2u;
  FIELD_U32(a1, 7632) = 0;
  FIELD_U32(a1, 7628) = 0;
  FIELD_U8(a1, 7660) = 0;
  FIELD_U32(a1, 160) = *(&DryBones_rotations + (FIELD_U32(a1, 160) > v5 && FIELD_U32(a1, 160) < 1));
  if ( !FIELD_U8(a1, 6220) )
    StateMgrExt_changeState((StateMgr *)(a1 + 0x17C4), &Enemy_StateId_Frozen._._);
  return 1;
}
