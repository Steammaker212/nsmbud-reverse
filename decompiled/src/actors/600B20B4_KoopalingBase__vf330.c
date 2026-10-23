/* KoopalingBase__vf330
 * address: 0x600B20B4   size: 284   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x60026814
// 
// Overridden by: None
int __fastcall KoopalingBase__vf330(_DWORD *a1, int a2)
{
  int result; // r0
  int v5; // r1
  unsigned int v6; // r2
  int *v7; // r1
  int v8; // r1
  int v9; // r0
  unsigned int v10; // r1
  int v11; // r0
  ActiveColliderMgr *v12; // r7

  a1[1875] = 60;
  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 728))(a1);
  if ( result == 1 )
  {
    v5 = a1[1774];
    v6 = FIELD_U32(v5, 24);
    v7 = *(int **)(v5 + 28);
    if ( v6 > 1 )
      ++v7;
    v8 = *v7;
    if ( v8 )
    {
      FIELD_U32(v8, 20) = 0;
      FIELD_U32(v8, 28) |= 2u;
      v9 = a1[1774];
      v10 = FIELD_U32(v9, 24);
      v11 = FIELD_U32(v9, 28);
      if ( v10 > 1 )
        v11 += 4;
      *(_DWORD *)(*(_DWORD *)v11 + 24) = 0;
    }
    (*(void (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
    v12 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 1796));
    ActiveColldierMgr_removeFromCreateList(v12, (ActiveCollider *)(a1 + 1796));
    ActiveColldierMgr_removeFromList3(v12, (int)(a1 + 1796));
    if ( FIELD_U8(a2, 84) <= 3u )
      sub_60025AF4((int)a1, a2, (int)(a1 + 27), 5u);
    (*(void (__fastcall **)(_DWORD *))(*a1 + 1164))(a1);
    return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C83320);
  }
  return result;
}
