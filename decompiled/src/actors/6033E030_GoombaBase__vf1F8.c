/* GoombaBase__vf1F8
 * address: 0x6033E030   size: 452   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Enemy : 0x602A8240
// 
// Overridden by: None
_DWORD *__fastcall GoombaBase__vf1F8(int a1)
{
  int v2; // r0
  _DWORD *v3; // r0
  int v4; // r5
  int *v5; // r1
  unsigned int v6; // r2
  unsigned int v7; // r0
  int v8; // r0
  int v9; // r1
  _DWORD *v10; // r0
  int v11; // r1
  int v12; // r1
  unsigned int v13; // r0
  int v14; // r1
  unsigned int v15; // r0
  ActiveColliderMgr *v16; // r6
  _DWORD *result; // r0
  int v18; // t1
  int (**v19)(); // [sp+0h] [bp-20h] BYREF
  const char *v20; // [sp+4h] [bp-1Ch]

  v2 = FIELD_U8(a1, 6706);
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      sub_6040EB10(a1 + 6312);
      v4 = a1 + 6304;
      v3 = *(_DWORD **)(a1 + 6304);
      v5 = (int *)v3[3];
      v6 = v3[2];
      v7 = v3[17];
      if ( v6 > v7 )
        v5 += v7;
      v8 = *v5;
      v9 = FIELD_U32(a1, 6300);
      v19 = &sead__SafeStringBase__vtable;
      v20 = "damage";
      SkeletalAnim_play(v8, v9, (int)&v19);
    }
    else
    {
      v4 = a1 + 6304;
    }
  }
  else
  {
    v4 = a1 + 6304;
    v10 = *(_DWORD **)(a1 + 6304);
    v11 = FIELD_U32(a1, 6300);
    v19 = &sead__SafeStringBase__vtable;
    v20 = "damage";
    sub_60421938(v10, v11, (int)&v19);
  }
  v12 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  v13 = *(_DWORD *)(*(_DWORD *)v4 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v13 )
    v12 += 4 * v13;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v12 + 4), 0);
  v14 = *(_DWORD *)(*(_DWORD *)v4 + 12);
  v15 = *(_DWORD *)(*(_DWORD *)v4 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v4 + 8) > v15 )
    v14 += 4 * v15;
  *(_DWORD *)(*(_DWORD *)v14 + 24) = 1065353216;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 100) = -1103101952;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  v16 = ActiveColliderMgr_instance;
  ActiveColldierMgr_removeFromActiveList(ActiveColliderMgr_instance, (ActiveCollider *)(a1 + 6380));
  ActiveColldierMgr_removeFromCreateList(v16, (ActiveCollider *)(a1 + 6380));
  ActiveColldierMgr_removeFromList3(v16, a1 + 6380);
  FIELD_U32(a1, 160) = 0;
  FIELD_U16(a1, 6276) = 30;
  FIELD_U32(a1, 6692) = 1065353216;
  FIELD_U32(a1, 6696) = 0;
  result = *(_DWORD **)(a1 + 6376);
  if ( result )
  {
    v18 = result[1740];
    result += 1740;
    *result = v18 + 1;
  }
  return result;
}
