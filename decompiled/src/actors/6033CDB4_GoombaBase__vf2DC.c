/* GoombaBase__vf2DC
 * address: 0x6033CDB4   size: 356   group: actors
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overridden by: None
int __fastcall GoombaBase__vf2DC(int a1)
{
  int v2; // r1
  int *v3; // r5
  _DWORD *v4; // r0
  int v5; // r6
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r1
  unsigned int v9; // r0
  _BYTE *v10; // r4
  int v11; // t1
  _BYTE *v12; // r6
  int v13; // r1
  int v14; // r0
  int v15; // r5
  float v16; // s0
  int result; // r0
  int (**v18)(); // [sp+0h] [bp-18h] BYREF
  const char *v19; // [sp+4h] [bp-14h]

  v3 = (int *)(a1 + 6300);
  v2 = FIELD_U32(a1, 6300);
  v5 = a1 + 6304;
  v4 = *(_DWORD **)(a1 + 6304);
  v18 = &sead__SafeStringBase__vtable;
  v19 = "walk";
  sub_60421938(v4, v2, (int)&v18);
  v6 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v5 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v7 )
    v6 += 4 * v7;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6 + 4), 1);
  v8 = *(_DWORD *)(*(_DWORD *)v5 + 12);
  v9 = *(_DWORD *)(*(_DWORD *)v5 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v5 + 8) > v9 )
    v8 += 4 * v9;
  *(_DWORD *)(*(_DWORD *)v8 + 24) = 0x40000000;
  FIELD_U32(a1, 6684) = 0x40000000;
  v11 = FIELD_U8(a1, 6706);
  v10 = (_BYTE *)(a1 + 6706);
  v12 = v10 - 398;
  if ( !v11 )
  {
    v13 = *v3;
    v14 = *(_DWORD *)v12;
    v18 = &sead__SafeStringBase__vtable;
    v19 = "walk";
    TexAnim_play(v14, v13, &v18);
  }
  *(_DWORD *)(*(_DWORD *)v12 + 24) = 1065353216;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v12 + 4), 1);
  v15 = *(_DWORD *)v12;
  if ( *v10 )
  {
    v16 = 0.0;
    FIELD_U32(v15, 24) = 0x40000000;
    v15 = *(_DWORD *)v12;
  }
  else
  {
    v16 = (float)((180 * (unsigned __int64)sead__Random__getU32((void *)(dword_60C9CF0C + 1340))) >> 32);
  }
  FIELD_F32(v15, 20) = v16;
  result = FIELD_U32(v15, 28) | 2;
  FIELD_U32(v15, 28) = result;
  return result;
}
