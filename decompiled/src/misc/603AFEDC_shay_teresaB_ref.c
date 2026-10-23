/* shay_teresaB_ref
 * address: 0x603AFEDC   size: 312   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall shay_teresaB_ref(int a1)
{
  int v1; // r4
  int v2; // r1
  int v3; // r0
  int v4; // r0
  int v5; // r1
  int v6; // r0
  int v7; // r0
  int (**v9)(); // [sp+0h] [bp-20h] BYREF
  const char *v10; // [sp+4h] [bp-1Ch]

  v1 = a1 + 6312;
  v2 = FIELD_U32(a1, 6300);
  v3 = **(_DWORD **)(FIELD_U32(a1, 6312) + 12);
  v9 = &sead__SafeStringBase__vtable;
  v10 = "shay_teresaB";
  SkeletalAnim_play(v3, v2, (int)&v9);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v1 + 12) + 4), 0);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v1 + 12) + 24) = 1065353216;
  v4 = **(_DWORD **)(*(_DWORD *)v1 + 12);
  FIELD_U32(v4, 20) = 0;
  FIELD_U32(v4, 28) |= 2u;
  v5 = *(_DWORD *)(v1 - 12);
  v6 = **(_DWORD **)(*(_DWORD *)v1 + 20);
  v9 = &sead__SafeStringBase__vtable;
  v10 = "shay_teresaB";
  TexAnim_play(v6, v5, &v9);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v1 + 20) + 4), 0);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v1 + 20) + 24) = 1065353216;
  v7 = **(_DWORD **)(*(_DWORD *)v1 + 20);
  FIELD_U32(v7, 20) = 0;
  FIELD_U32(v7, 28) |= 2u;
  FIELD_U16(v1, 148) = 0;
  FIELD_U32(v1, 164) = 0;
  FIELD_U16(v1, 180) = 0;
  FIELD_U16(v1, 182) = 30;
  FIELD_U32(v1, 168) = 1056964608;
  FIELD_U32(v1, 172) = 1050253722;
  FIELD_U32(v1, 176) = 1036831949;
  FIELD_U8(v1, 184) = 1;
  FIELD_U32(v1, 300) = 0;
  return 1;
}
