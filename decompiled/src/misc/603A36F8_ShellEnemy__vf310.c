/* ShellEnemy__vf310
 * address: 0x603A36F8   size: 508   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
void __fastcall ShellEnemy__vf310(int a1)
{
  int v2; // r1
  int v3; // r8
  int *v4; // r1
  int v5; // r6
  int *v6; // r2
  int v7; // r9
  int v8; // r5
  int v9; // lr
  int v10; // r3
  int v11; // r12
  int v12; // r6
  int *v13; // r8
  unsigned int v14; // r1
  int v15; // r1

  if ( FIELD_U8(a1, 84) <= 3u )
    sub_602724DC((_DWORD *)a1);
  FIELD_U32(a1, 6436) = 16;
  sub_602724B0(a1);
  v2 = FIELD_U32(a1, 6352);
  if ( v2 )
  {
    FIELD_U32(a1, 6356) = v2;
    FIELD_U32(a1, 6352) = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 696))(a1);
  }
  FIELD_U32(a1, 104) = 981467136;
  FIELD_U32(a1, 100) = -1103101952;
  FIELD_U32(a1, 132) = FIELD_U32(a1, 120);
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 140) = 0;
  v3 = FIELD_U32(a1, 3184);
  v4 = (int *)(a1 + 3176);
  v5 = FIELD_U32(a1, 3176);
  v6 = (int *)(a1 + 3192);
  v7 = FIELD_U32(a1, 3192);
  v8 = v3 | 0x660;
  v9 = v7 | 0x660;
  v10 = v5 | 0x660;
  FIELD_U32(a1, 3192) = v7 | 0x660;
  FIELD_U32(a1, 3176) = v5 | 0x660;
  FIELD_U32(a1, 3184) = v3 | 0x660;
  if ( FIELD_U32(a1, 6424) )
  {
    FIELD_U32(a1, 3196) |= 1u;
    FIELD_U32(a1, 3180) |= 1u;
    FIELD_U32(a1, 3188) |= 1u;
  }
  v11 = FIELD_U8(a1, 6392);
  if ( FIELD_U8(a1, 6392) )
  {
    v9 = v5 | 0x10006E0;
    v10 = v3 | 0x10006E0;
    v8 = v7 | 0x10006E0;
    v12 = 0x8000;
    v13 = (int *)(a1 + 3176);
    *v4 = v9;
    v4 = (int *)(a1 + 3184);
    FIELD_U32(a1, 3184) = v10;
    *v6 = v7 | 0x10006E0;
  }
  else
  {
    v13 = (int *)(a1 + 3192);
    v12 = 2048;
    v6 = (int *)(a1 + 3184);
  }
  *v13 = v9 | v12;
  *v4 = v10 | v12;
  *v6 = v8 | v12;
  FIELD_U32(a1, 6372) = 0;
  FIELD_U32(a1, 6368) = 0;
  FIELD_U32(a1, 6364) = 0;
  FIELD_U32(a1, 6360) = 0;
  v14 = FIELD_U8(a1, 6386);
  if ( FIELD_U8(a1, 6386) )
    v14 = 0x80000000;
  FIELD_U32(a1, 156) = v14;
  if ( !v11 )
  {
    if ( FIELD_U8(a1, 2992) )
    {
      if ( FIELD_U8(a1, 2996) )
        return;
      v15 = a1 + 3040;
    }
    else
    {
      if ( !FIELD_U8(a1, 3000) )
        return;
      v15 = a1 + 3088;
    }
    FIELD_U32(a1, 6560) = v15;
    CollisionMgr_setSensor((CollisionMgr *)(a1 + 648), &stru_60B009D8, 3);
  }
}
