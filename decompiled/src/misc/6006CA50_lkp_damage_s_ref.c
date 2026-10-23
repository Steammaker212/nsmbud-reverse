/* lkp_damage_s_ref
 * address: 0x6006CA50   size: 472   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall lkp_damage_s_ref(int a1)
{
  int v2; // r0
  int v3; // r5
  int v4; // r1
  unsigned int v5; // r0
  int v6; // r1
  unsigned int v7; // r0
  int v8; // r0
  _DWORD v10[2]; // [sp+0h] [bp-38h] BYREF
  _DWORD v11[2]; // [sp+8h] [bp-30h] BYREF
  int (**v12)(); // [sp+10h] [bp-28h] BYREF
  const char *v13; // [sp+14h] [bp-24h]

  v12 = &sead__SafeStringBase__vtable;
  v13 = "koopa";
  v11[0] = &sead__SafeStringBase__vtable;
  v11[1] = "lkp_damage_s";
  v2 = LoadResource(ResourceMgrRelated_instance, &v12);
  v3 = a1 + 7112;
  sub_60421938(*(_DWORD **)(a1 + 7112), v2, (int)v11);
  v4 = *(_DWORD *)(FIELD_U32(a1, 7112) + 12);
  v5 = *(_DWORD *)(FIELD_U32(a1, 7112) + 68);
  if ( *(_DWORD *)(FIELD_U32(a1, 7112) + 8) > v5 )
    v4 += 4 * v5;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v4 + 4), 1);
  v6 = *(_DWORD *)(*(_DWORD *)v3 + 12);
  v7 = *(_DWORD *)(*(_DWORD *)v3 + 68);
  if ( *(_DWORD *)(*(_DWORD *)v3 + 8) > v7 )
    v6 += 4 * v7;
  *(_DWORD *)(*(_DWORD *)v6 + 24) = 1065353216;
  v10[0] = &sead__SafeStringBase__vtable;
  v10[1] = "lkp_damage_s";
  v12 = &sead__SafeStringBase__vtable;
  v13 = "koopa_model";
  v8 = LoadResource(ResourceMgrRelated_instance, &v12);
  TexAnim_play(**(_DWORD **)(*(_DWORD *)v3 + 20), v8, v10);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v3 + 20) + 4), 1);
  *(_DWORD *)(**(_DWORD **)(*(_DWORD *)v3 + 20) + 24) = 1065353216;
  FIELD_U32(a1, 6308) = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 788))(a1);
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 768))(a1);
  FIELD_U32(a1, 144) = 1085276160;
  FIELD_U32(a1, 148) = 1083179008;
  FIELD_U32(a1, 152) = 1084227584;
  FIELD_U32(a1, 26116) = -1107296256;
  FIELD_U32(a1, 26120) = 1040187392;
  FIELD_U32(a1, 26124) = 0;
  FIELD_U32(a1, 120) = 0;
  FIELD_U32(a1, 124) = 0;
  FIELD_U32(a1, 128) = 0;
  FIELD_U32(a1, 100) = -1110651699;
  AreaRumbleMgr_rumble2(AreaRumbleMgr_instance, 0, 1, 0);
  sub_60075CE0(a1);
  FIELD_U32(a1, 25380) = 0;
  FIELD_U16(a1, 6276) = 60;
  return 6276;
}
