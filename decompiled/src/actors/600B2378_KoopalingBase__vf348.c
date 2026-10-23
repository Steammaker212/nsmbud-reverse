/* KoopalingBase__vf348
 * address: 0x600B2378   size: 244   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026864
// 
// Overridden by: None
int __fastcall KoopalingBase__vf348(int a1, int a2)
{
  int *v4; // r0
  int v5; // t1
  int *v6; // r1
  int v7; // r1
  int v8; // r0
  unsigned int v9; // r1
  int v10; // r0
  ActiveColliderMgr *v11; // r7

  v5 = FIELD_U32(a1, 7096);
  v4 = (int *)(a1 + 7096);
  v6 = *(int **)(v5 + 28);
  if ( FIELD_U32(v5, 24) > 1u )
    ++v6;
  v7 = *v6;
  if ( v7 )
  {
    FIELD_U32(v7, 20) = 0;
    FIELD_U32(v7, 28) |= 2u;
    v8 = *v4;
    v9 = FIELD_U32(v8, 24);
    v10 = FIELD_U32(v8, 28);
    if ( v9 > 1 )
      v10 += 4;
    *(_DWORD *)(*(_DWORD *)v10 + 24) = 0;
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  v11 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7184));
  ActiveColldierMgr_removeFromCreateList(v11, (ActiveCollider *)(a1 + 7184));
  ActiveColldierMgr_removeFromList3(v11, a1 + 7184);
  if ( FIELD_U8(a2, 84) <= 3u )
    sub_60025AF4(a1, a2, a1 + 108, 5u);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1164))(a1);
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C83344);
}
