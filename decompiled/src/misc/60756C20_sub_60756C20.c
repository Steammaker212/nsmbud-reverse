/* sub_60756C20
 * address: 0x60756C20   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60756C20(_DWORD *a1)
{
  int v2; // r0
  unsigned int v3; // r1
  int *v4; // r0
  bool v5; // cc
  int v6; // r1
  int v7; // r5
  int v8; // r0
  unsigned int v9; // r2
  int *v10; // r0
  int v11; // r5
  int v12; // r1
  const char *v13; // r0
  int (**v15)(); // [sp+0h] [bp-18h] BYREF
  const char *v16; // [sp+4h] [bp-14h]

  v2 = a1[73];
  if ( v2 )
  {
    v3 = FIELD_U32(v2, 24);
    v4 = *(int **)(v2 + 28);
    v5 = v3 > 3;
    v6 = a1[4];
    if ( v5 )
      v4 += 3;
    v7 = *v4;
    v15 = &sead__SafeStringBase__vtable;
    v16 = "CH_metamorphose";
    ShuAnim_play((_DWORD *)v7, v6, &v15);
    AnimationCtrl_setRepeat((ModelAnimation *)(v7 + 4), 1);
    FIELD_U32(v7, 20) = 0;
    FIELD_U32(v7, 28) |= 2u;
    FIELD_U32(v7, 24) = 1065353216;
  }
  v8 = a1[6];
  v9 = FIELD_U32(v8, 24);
  v10 = *(int **)(v8 + 28);
  if ( v9 > 3 )
    v10 += 3;
  v11 = *v10;
  if ( a1[75] == 5 )
  {
    v12 = a1[263];
    v15 = &sead__SafeStringBase__vtable;
    v13 = "PB_metamorphose";
  }
  else
  {
    v12 = a1[4];
    v15 = &sead__SafeStringBase__vtable;
    v13 = "CB_metamorphose";
  }
  v16 = v13;
  ShuAnim_play((_DWORD *)v11, v12, &v15);
  AnimationCtrl_setRepeat((ModelAnimation *)(v11 + 4), 1);
  FIELD_U32(v11, 20) = 0;
  FIELD_U32(v11, 28) |= 2u;
  FIELD_U32(v11, 24) = 1065353216;
  return 1065353216;
}
