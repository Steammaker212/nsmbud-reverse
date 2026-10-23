/* KoopalingBase__vf350
 * address: 0x600B260C   size: 236   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026880
// 
// Overridden by: None
int __fastcall KoopalingBase__vf350(int a1)
{
  int *v2; // r0
  int v3; // t1
  int *v4; // r1
  int v5; // r1
  int v6; // r0
  unsigned int v7; // r1
  int v8; // r0
  ActiveColliderMgr *v9; // r7

  v3 = FIELD_U32(a1, 7096);
  v2 = (int *)(a1 + 7096);
  v4 = *(int **)(v3 + 28);
  if ( FIELD_U32(v3, 24) > 1u )
    ++v4;
  v5 = *v4;
  if ( v5 )
  {
    FIELD_U32(v5, 20) = 0;
    FIELD_U32(v5, 28) |= 2u;
    v6 = *v2;
    v7 = FIELD_U32(v6, 24);
    v8 = FIELD_U32(v6, 28);
    if ( v7 > 1 )
      v8 += 4;
    *(_DWORD *)(*(_DWORD *)v8 + 24) = 0;
  }
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  v9 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 7184));
  ActiveColldierMgr_removeFromCreateList(v9, (ActiveCollider *)(a1 + 7184));
  ActiveColldierMgr_removeFromList3(v9, a1 + 7184);
  sub_600228F4(dword_60C7F52C, a1 + 108, 5);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1164))(a1);
  return (*(int (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8338C);
}
