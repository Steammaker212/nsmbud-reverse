/* sub_60756A94
 * address: 0x60756A94   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60756A94(_DWORD *a1)
{
  int v2; // r0
  unsigned int v3; // r1
  int *v4; // r0
  bool v5; // cc
  int v6; // r1
  int v7; // r5
  int v8; // r0
  int v9; // r1
  unsigned int v10; // r2
  int *v11; // r0
  int v12; // r4
  int (**v14)(); // [sp+0h] [bp-18h] BYREF
  const char *v15; // [sp+4h] [bp-14h]

  v2 = a1[73];
  if ( v2 )
  {
    v3 = FIELD_U32(v2, 24);
    v4 = *(int **)(v2 + 28);
    v5 = v3 > 2;
    v6 = a1[4];
    if ( v5 )
      v4 += 2;
    v7 = *v4;
    v14 = &sead__SafeStringBase__vtable;
    v15 = "MCH_PtoNml";
    ShuAnim_play((_DWORD *)v7, v6, &v14);
    AnimationCtrl_setRepeat((ModelAnimation *)(v7 + 4), 0);
    FIELD_U32(v7, 20) = 0;
    FIELD_U32(v7, 28) |= 2u;
    FIELD_U32(v7, 24) = 1065353216;
  }
  v8 = a1[6];
  v9 = a1[4];
  v10 = FIELD_U32(v8, 24);
  v11 = *(int **)(v8 + 28);
  if ( v10 > 2 )
    v11 += 2;
  v12 = *v11;
  v14 = &sead__SafeStringBase__vtable;
  v15 = "MCB_PtoNml";
  ShuAnim_play((_DWORD *)v12, v9, &v14);
  AnimationCtrl_setRepeat((ModelAnimation *)(v12 + 4), 0);
  FIELD_U32(v12, 20) = 0;
  FIELD_U32(v12, 28) |= 2u;
  FIELD_U32(v12, 24) = 1065353216;
  return 1065353216;
}
