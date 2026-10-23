/* sub_607598A8
 * address: 0x607598A8   size: 216   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607598A8(_DWORD *a1)
{
  int v2; // r0
  int v3; // r1
  unsigned int v4; // r2
  int *v5; // r0
  int v6; // r5
  int v7; // r0
  int v8; // r1
  unsigned int v9; // r2
  int *v10; // r0
  int v11; // r4
  int result; // r0
  int (**v13)(); // [sp+0h] [bp-20h] BYREF
  const char *v14; // [sp+4h] [bp-1Ch]

  v2 = a1[73];
  v3 = a1[4];
  v4 = FIELD_U32(v2, 24);
  v5 = *(int **)(v2 + 28);
  if ( v4 > 2 )
    v5 += 2;
  v6 = *v5;
  v13 = &sead__SafeStringBase__vtable;
  v14 = "MKH_PtoNml";
  ShuAnim_play((_DWORD *)v6, v3, &v13);
  AnimationCtrl_setRepeat((ModelAnimation *)(v6 + 4), 0);
  FIELD_U32(v6, 20) = 0;
  FIELD_U32(v6, 28) |= 2u;
  FIELD_U32(v6, 24) = 1065353216;
  v7 = a1[6];
  v8 = a1[4];
  v9 = FIELD_U32(v7, 24);
  v10 = *(int **)(v7 + 28);
  if ( v9 > 2 )
    v10 += 2;
  v11 = *v10;
  v13 = &sead__SafeStringBase__vtable;
  v14 = "MKB_PtoNml";
  ShuAnim_play((_DWORD *)v11, v8, &v13);
  AnimationCtrl_setRepeat((ModelAnimation *)(v11 + 4), 0);
  FIELD_U32(v11, 20) = 0;
  result = FIELD_U32(v11, 28) | 2;
  FIELD_U32(v11, 28) = result;
  FIELD_U32(v11, 24) = 1065353216;
  return result;
}
