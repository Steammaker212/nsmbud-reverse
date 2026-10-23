/* sub_6078EBF4
 * address: 0x6078EBF4   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6078EBF4(int a1)
{
  int *v2; // r1
  int v3; // r0
  int v4; // r1
  int v5; // r5
  int result; // r0
  int v7; // r1
  int v8; // r4
  _DWORD v9[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v10[6]; // [sp+8h] [bp-18h] BYREF

  FIELD_U32(a1, 536) |= 2u;
  sub_6078E940(a1, *(int **)(a1 + 24));
  v2 = *(int **)(a1 + 292);
  if ( v2 )
    sub_6078E940(a1, v2);
  v3 = FIELD_U32(a1, 24);
  v4 = FIELD_U32(a1, 20);
  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = "PB_star_color";
  if ( v3 )
  {
    v5 = **(_DWORD **)(v3 + 28);
    ShuAnim_play((_DWORD *)v5, v4, v10);
    AnimationCtrl_setRepeat((ModelAnimation *)(v5 + 4), 1);
    FIELD_U32(v5, 20) = 0;
    FIELD_U32(v5, 28) |= 2u;
  }
  result = FIELD_U32(a1, 292);
  if ( result )
  {
    v7 = FIELD_U32(a1, 20);
    v9[0] = &sead__SafeStringBase__vtable;
    v9[1] = "PH_star_color";
    v8 = **(_DWORD **)(result + 28);
    ShuAnim_play((_DWORD *)v8, v7, v9);
    AnimationCtrl_setRepeat((ModelAnimation *)(v8 + 4), 1);
    FIELD_U32(v8, 20) = 0;
    result = FIELD_U32(v8, 28) | 2;
    FIELD_U32(v8, 28) = result;
  }
  return result;
}
