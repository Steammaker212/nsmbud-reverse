/* sub_60064894
 * address: 0x60064894   size: 1196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_60064894(int a1)
{
  const char **v2; // r5
  const char *v3; // r0
  signed int hasPlayer; // r0
  int v5; // r1
  const char *v6; // r3
  int v7; // r5
  int v8; // r7
  int v9; // r1
  unsigned int v10; // r0
  _DWORD *v11; // r0
  int v12; // r1
  unsigned int v13; // r2
  unsigned int v14; // r0
  int v15; // r0
  _DWORD v17[2]; // [sp+0h] [bp-30h] BYREF
  int (**v18)(); // [sp+8h] [bp-28h] BYREF
  const char *v19; // [sp+Ch] [bp-24h]

  FIELD_U32(a1, 6128) = "SE_VOC_PCH_WAVE_TO_PLAYER";
  v2 = (const char **)(a1 + 6128);
  if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 0) == 1 && !FIELD_U32(dword_60C99DD4, 304) )
  {
    v3 = "SE_VOC_PCH_WAVE_TO_M";
    goto LABEL_34;
  }
  if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 1u) && !FIELD_U32(dword_60C99DD4, 376) )
  {
    v3 = "SE_VOC_PCH_WAVE_TO_M";
    goto LABEL_34;
  }
  if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 2u) == 1 && !FIELD_U32(dword_60C99DD4, 448) )
  {
    v3 = "SE_VOC_PCH_WAVE_TO_M";
    goto LABEL_34;
  }
  if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 3u) == 1 && !FIELD_U32(dword_60C99DD4, 520) )
  {
    v3 = "SE_VOC_PCH_WAVE_TO_M";
    goto LABEL_34;
  }
  if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 0) && FIELD_U32(dword_60C99DD4, 304) == 1 )
  {
    v3 = "SE_VOC_PCH_WAVE_TO_L";
LABEL_34:
    *v2 = v3;
    v5 = 0;
    goto LABEL_35;
  }
  if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 1u) && FIELD_U32(dword_60C99DD4, 376) == 1 )
  {
    v3 = "SE_VOC_PCH_WAVE_TO_L";
    goto LABEL_34;
  }
  if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 2u) == 1 && FIELD_U32(dword_60C99DD4, 448) == 1 )
  {
    v3 = "SE_VOC_PCH_WAVE_TO_L";
    goto LABEL_34;
  }
  if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 3u) == 1 && FIELD_U32(dword_60C99DD4, 520) == 1 )
  {
    v3 = "SE_VOC_PCH_WAVE_TO_L";
    goto LABEL_34;
  }
  if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 0) && FIELD_U64(dword_60C99DD4, 300) == 0x400000009LL
    || PlayerMgr_hasPlayer(PlayerMgr_instance, 1u) && FIELD_U64(dword_60C99DD4, 372) == 0x400000009LL
    || PlayerMgr_hasPlayer(PlayerMgr_instance, 2u) == 1 && FIELD_U64(dword_60C99DD4, 444) == 0x400000009LL
    || (hasPlayer = PlayerMgr_hasPlayer(PlayerMgr_instance, 3u), v5 = 0, hasPlayer == 1)
    && FIELD_U64(dword_60C99DD4, 516) == 0x400000009LL )
  {
    v5 = 1;
    *v2 = "SE_VOC_PCH_WAVE_TO_KINOPEACH";
  }
LABEL_35:
  FIELD_U8(a1, 6132) = v5;
  v6 = "lkp_help_me1";
  v18 = &sead__SafeStringBase__vtable;
  v19 = "peach";
  v17[0] = &sead__SafeStringBase__vtable;
  if ( v5 )
    v6 = "lkp_oh_what1";
  v17[1] = v6;
  v7 = LoadResource(ResourceMgrRelated_instance, &v18);
  v8 = a1 + 6100;
  sub_60421938(*(_DWORD **)(a1 + 6100), v7, (int)v17);
  v9 = *(_DWORD *)(FIELD_U32(a1, 6100) + 12);
  v10 = *(_DWORD *)(FIELD_U32(a1, 6100) + 68);
  if ( *(_DWORD *)(FIELD_U32(a1, 6100) + 8) > v10 )
    v9 += 4 * v10;
  AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v9 + 4), 0);
  TexAnim_play(**(_DWORD **)(*(_DWORD *)v8 + 20), v7, v17);
  AnimationCtrl_setRepeat((ModelAnimation *)(**(_DWORD **)(*(_DWORD *)v8 + 20) + 4), 0);
  if ( FIELD_U8(a1, 6132) )
  {
    v18 = &sead__SafeStringBase__vtable;
    v19 = "obj_peach_question";
    LoadResource(ResourceMgrRelated_instance, &v18);
    v11 = *(_DWORD **)(a1 + 6104);
    v12 = v11[3];
    v13 = v11[2];
    v14 = v11[17];
    if ( v13 > v14 )
      v12 += 4 * v14;
    AnimationCtrl_setRepeat((ModelAnimation *)(*(_DWORD *)v12 + 4), 0);
    FIELD_U8(a1, 6124) = 1;
  }
  v15 = FIELD_U32(dword_60CC6484, 128);
  FIELD_U32(a1, 6112) = FIELD_U32(dword_60CC6484, 116);
  FIELD_U32(a1, 6116) = v15;
  FIELD_U32(a1, 6120) = 0;
  return 6120;
}
