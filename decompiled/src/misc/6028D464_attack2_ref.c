/* attack2_ref
 * address: 0x6028D464   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall attack2_ref(int a1)
{
  _DWORD *v2; // r0
  _DWORD *v3; // r5
  int *v4; // r1
  unsigned int v5; // r2
  unsigned int v6; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r1
  unsigned int v10; // r0
  int v11; // r1
  unsigned int v12; // r0
  int v13; // r1
  unsigned int v14; // r0
  char v15; // r12
  float v16; // s0
  int *v17; // r1
  int *v18; // r1
  int result; // r0
  _DWORD v20[6]; // [sp+0h] [bp-18h] BYREF

  v3 = (_DWORD *)(a1 + 6300);
  v2 = *(_DWORD **)(a1 + 6300);
  v4 = (int *)v2[3];
  v5 = v2[2];
  v6 = v2[17];
  if ( v5 > v6 )
    v4 += v6;
  v7 = *v4;
  v8 = v3[1];
  v20[0] = &sead__SafeStringBase__vtable;
  v20[1] = "attack2";
  SkeletalAnim_play(v7, v8, (int)v20);
  v9 = *(_DWORD *)(*v3 + 12);
  v10 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v10 )
    v9 += 4 * v10;
  *(_DWORD *)(*(_DWORD *)v9 + 24) = 0;
  v11 = *(_DWORD *)(*v3 + 12);
  v12 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v12 )
    v11 += 4 * v12;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v11 + 4), 0);
  v13 = *(_DWORD *)(*v3 + 12);
  v14 = *(_DWORD *)(*v3 + 68);
  if ( *(_DWORD *)(*v3 + 8) > v14 )
    v13 += 4 * v14;
  sub_6041838C((ModelAnimation *)(*(_DWORD *)v13 + 4));
  *(v3 - 1536) = 0;
  if ( ((unsigned int)&dword_60C8F4C0 & ~(1613288776 << v15) & 1) == 0 && _cxa_guard_acquire(&dword_60C8F4C0) )
  {
    unk_60C8F4E0 = 0xE800000018000000LL;
    _cxa_guard_release(&dword_60C8F4C0);
  }
  v16 = FIELD_F32(a1, 120);
  v17 = &dword_60C8F4D8;
  if ( v16 < 0.0 )
    v17 = &dword_60C8F4DC;
  FIELD_U32(a1, 160) = *v17;
  v18 = (int *)&unk_60C8F4E0;
  if ( v16 < 0.0 )
    v18 = &dword_60C8F4E4;
  result = *v18;
  FIELD_U32(a1, 164) = *v18;
  return result;
}
