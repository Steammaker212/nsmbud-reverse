/* KoopalingBase__vf360
 * address: 0x600B1FB4   size: 248   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BossBase : 0x600268B8
// 
// Overridden by: None
int __fastcall KoopalingBase__vf360(_DWORD *a1)
{
  int result; // r0
  int v3; // r1
  unsigned int v4; // r2
  int *v5; // r1
  int v6; // r1
  int v7; // r0
  unsigned int v8; // r1
  int v9; // r0
  ActiveColliderMgr *v10; // r6

  a1[1875] = 60;
  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 728))(a1);
  if ( result == 1 )
  {
    v3 = a1[1774];
    v4 = FIELD_U32(v3, 24);
    v5 = *(int **)(v3 + 28);
    if ( v4 > 1 )
      ++v5;
    v6 = *v5;
    if ( v6 )
    {
      FIELD_U32(v6, 20) = 0;
      FIELD_U32(v6, 28) |= 2u;
      v7 = a1[1774];
      v8 = FIELD_U32(v7, 24);
      v9 = FIELD_U32(v7, 28);
      if ( v8 > 1 )
        v9 += 4;
      *(_DWORD *)(*(_DWORD *)v9 + 24) = 0;
    }
    (*(void (__fastcall **)(_DWORD *))(*a1 + 72))(a1);
    v10 = ActiveColliderMgr_instance;
    ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 1796));
    ActiveColldierMgr_removeFromCreateList(v10, (ActiveCollider *)(a1 + 1796));
    ActiveColldierMgr_removeFromList3(v10, (int)(a1 + 1796));
    (*(void (__fastcall **)(_DWORD *))(*a1 + 1164))(a1);
    return (*(int (__fastcall **)(_DWORD *, int *))(*a1 + 192))(a1, &dword_60C83320);
  }
  return result;
}
