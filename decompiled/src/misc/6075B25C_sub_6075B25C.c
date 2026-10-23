/* sub_6075B25C
 * address: 0x6075B25C   size: 324   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6075B25C(_DWORD *a1)
{
  int v2; // r0
  unsigned int v3; // r1
  int *v4; // r0
  bool v5; // cc
  int v6; // r1
  int v7; // r5
  const char *v8; // r0
  int v9; // r0
  int v10; // r2
  int v11; // r1
  unsigned int v12; // r3
  int *v13; // r0
  int v14; // r4
  const char *v15; // r0
  int (**v17)(); // [sp+0h] [bp-18h] BYREF
  const char *v18; // [sp+4h] [bp-14h]

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
    if ( a1[41] == 1 )
    {
      v17 = &sead__SafeStringBase__vtable;
      v8 = "MLH_PtoNml";
    }
    else
    {
      v17 = &sead__SafeStringBase__vtable;
      v8 = "MMH_PtoNml";
    }
    v18 = v8;
    ShuAnim_play((_DWORD *)v7, v6, &v17);
    AnimationCtrl_setRepeat((ModelAnimation *)(v7 + 4), 0);
    FIELD_U32(v7, 20) = 0;
    FIELD_U32(v7, 28) |= 2u;
    FIELD_U32(v7, 24) = 1065353216;
  }
  v9 = a1[6];
  v10 = a1[41];
  v11 = a1[4];
  v12 = FIELD_U32(v9, 24);
  v13 = *(int **)(v9 + 28);
  if ( v12 > 2 )
    v13 += 2;
  v14 = *v13;
  v17 = &sead__SafeStringBase__vtable;
  if ( v10 == 1 )
    v15 = "MLB_PtoNml";
  else
    v15 = "MMB_PtoNml";
  v18 = v15;
  ShuAnim_play((_DWORD *)v14, v11, &v17);
  AnimationCtrl_setRepeat((ModelAnimation *)(v14 + 4), 0);
  FIELD_U32(v14, 20) = 0;
  FIELD_U32(v14, 28) |= 2u;
  FIELD_U32(v14, 24) = 1065353216;
  return 1065353216;
}
