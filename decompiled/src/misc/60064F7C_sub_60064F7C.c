/* sub_60064F7C
 * address: 0x60064F7C   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60064F7C(int a1)
{
  const char *v2; // r3
  int Resource; // r5
  _DWORD *v4; // r4
  _DWORD *v5; // t1
  int v6; // r1
  unsigned int v7; // r0
  _DWORD v9[2]; // [sp+0h] [bp-20h] BYREF
  _DWORD v10[6]; // [sp+8h] [bp-18h] BYREF

  v2 = "lkp_help_me_wait2";
  if ( FIELD_U8(a1, 6132) )
    v2 = "lkp_oh_what_wait2";
  v9[0] = &sead__SafeStringBase__vtable;
  v10[0] = &sead__SafeStringBase__vtable;
  v9[1] = v2;
  v10[1] = "peach";
  Resource = LoadResource(ResourceMgrRelated_instance, v10);
  v5 = *(_DWORD **)(a1 + 6100);
  v4 = (_DWORD *)(a1 + 6100);
  sub_60421938(v5, Resource, (int)v9);
  v6 = *(_DWORD *)(*v4 + 12);
  v7 = *(_DWORD *)(*v4 + 68);
  if ( *(_DWORD *)(*v4 + 8) > v7 )
    v6 += 4 * v7;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v6 + 4), 1);
  TexAnim_play(**(_DWORD **)(*v4 + 20), Resource, v9);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*v4 + 20) + 4), 1);
  v4[2] = 0;
  return 0;
}
