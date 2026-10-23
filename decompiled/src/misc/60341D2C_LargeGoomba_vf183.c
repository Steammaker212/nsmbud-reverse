/* LargeGoomba_vf183
 * address: 0x60341D2C   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall LargeGoomba_vf183(int a1)
{
  _DWORD *v2; // r7
  int v3; // r5
  int v4; // r1
  unsigned int v5; // r0
  int *v6; // r1
  unsigned int v7; // r0
  int v8; // r0
  int v9; // r1
  unsigned int v10; // r0
  int v11; // r0
  unsigned int result; // r0
  int (**v13)(); // [sp+0h] [bp-28h] BYREF
  const char *v14; // [sp+4h] [bp-24h]

  v13 = &sead__SafeStringBase__vtable;
  v14 = "damage";
  v2 = (_DWORD *)(a1 + 6300);
  v3 = a1 + 6304;
  sub_60421938(*(_DWORD **)(a1 + 6304), FIELD_U32(a1, 6300), (int)&v13);
  v4 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v5 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v5 )
    v4 += 4 * v5;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 0);
  v6 = *(int **)(*(_DWORD *)v3 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
    v6 += v7;
  v8 = *v6;
  FIELD_U32(v8, 20) = 0;
  FIELD_U32(v8, 28) |= 2u;
  v9 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v10 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v10 )
    v9 += 4 * v10;
  *(_DWORD *)(*(_DWORD *)v9 + 24) = 1065353216;
  v13 = &sead__SafeStringBase__vtable;
  v14 = "damage";
  TexAnim_play(FIELD_U32(a1, 6308), *v2, &v13);
  AnimationCtrl_setRepeat((ModelAnimation *)(FIELD_U32(a1, 6308) + 4), 0);
  v11 = FIELD_U32(a1, 6308);
  FIELD_U32(v11, 20) = 0;
  FIELD_U32(v11, 28) |= 2u;
  *(_DWORD *)(FIELD_U32(a1, 6308) + 24) = 1065353216;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 72))(a1);
  result = FIELD_U32(a1, 568) & 0xFFFFFFEF;
  FIELD_U32(a1, 568) = result;
  return result;
}
