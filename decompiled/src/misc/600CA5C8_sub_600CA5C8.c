/* sub_600CA5C8
 * address: 0x600CA5C8   size: 1268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600CA5C8(int a1)
{
  int result; // r0
  int *v3; // r6
  int v4; // r4
  int ActorSlotChecked; // r0
  int v6; // r0
  int v7; // r0
  int v8; // r0
  int v9; // r0
  float v10; // s0
  int v11; // r0
  float v12; // s0
  int v13; // r0
  float v14; // s0
  int v15; // r0
  float v16; // s0
  int v17; // r5
  int v18; // r7
  bool v19; // zf
  int v20; // r0
  int v21; // r1
  int v22; // r2
  int v23; // r1
  int v24; // r2
  int v25; // r1
  int v26; // r2
  int v27; // r1
  int v28; // r2
  float v29; // [sp+4h] [bp-24h] BYREF
  int v30; // [sp+8h] [bp-20h]
  int v31; // [sp+Ch] [bp-1Ch]

  v3 = (int *)(a1 + 6216);
  result = FIELD_U32(a1, 6216);
  v4 = PlayerMgr_instance;
  switch ( result )
  {
    case 0:
      result = sub_6077A158(dword_60CBFA90);
      if ( result == 1 )
      {
        if ( (FIELD_U8(v4, 66) & 1) != 0 )
        {
          ActorSlotChecked = Player_getActorSlotChecked(v4, 0);
          if ( ActorSlotChecked )
            sub_60768D14(ActorSlotChecked, 0);
        }
        if ( (FIELD_U8(v4, 66) & 2) != 0 )
        {
          v6 = Player_getActorSlotChecked(v4, 1);
          if ( v6 )
            sub_60768D14(v6, 0);
        }
        if ( (FIELD_U8(v4, 66) & 4) != 0 )
        {
          v7 = Player_getActorSlotChecked(v4, 2);
          if ( v7 )
            sub_60768D14(v7, 0);
        }
        if ( (FIELD_U8(v4, 66) & 8) != 0 )
        {
          v8 = Player_getActorSlotChecked(v4, 3);
          if ( v8 )
            sub_60768D14(v8, 0);
        }
        FIELD_U32(a1, 6220) = 120;
        result = 1;
        goto LABEL_68;
      }
      return result;
    case 1:
      result = FIELD_U32(a1, 6220);
      if ( !result )
      {
        if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) != 0 )
        {
          v9 = Player_getActorSlotChecked(PlayerMgr_instance, 0);
          if ( v9 )
          {
            v10 = FIELD_F32(dword_60CC6484, 120);
            FIELD_U32(v9, 1236) |= 2u;
            ((void (__fastcall *)(float, float))loc_60768E4C)(v10 + 32.0, 1.0);
          }
        }
        if ( (FIELD_U8(v4, 66) & 2) != 0 )
        {
          v11 = Player_getActorSlotChecked(v4, 1);
          if ( v11 )
          {
            v12 = FIELD_F32(dword_60CC6484, 120);
            FIELD_U32(v11, 1236) |= 2u;
            ((void (__fastcall *)(float, float))loc_60768E4C)(v12 + 32.0, 1.0);
          }
        }
        if ( (FIELD_U8(v4, 66) & 4) != 0 )
        {
          v13 = Player_getActorSlotChecked(v4, 2);
          if ( v13 )
          {
            v14 = FIELD_F32(dword_60CC6484, 120);
            FIELD_U32(v13, 1236) |= 2u;
            ((void (__fastcall *)(float, float))loc_60768E4C)(v14 + 32.0, 1.0);
          }
        }
        if ( (FIELD_U8(v4, 66) & 8) != 0 )
        {
          v15 = Player_getActorSlotChecked(v4, 3);
          if ( v15 )
          {
            v16 = FIELD_F32(dword_60CC6484, 120);
            FIELD_U32(v15, 1236) |= 2u;
            ((void (__fastcall *)(float, float))loc_60768E4C)(v16 + 32.0, 1.0);
          }
        }
        result = 2;
        goto LABEL_68;
      }
      return result;
    case 2:
      v17 = 0;
      v18 = 0;
      if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) != 0 )
      {
        v17 = 0;
        v18 = 1;
        if ( Player_getActorSlotChecked(PlayerMgr_instance, 0) )
          v17 = sub_60768E24();
      }
      if ( (FIELD_U8(v4, 66) & 2) != 0 )
      {
        ++v18;
        if ( Player_getActorSlotChecked(v4, 1) )
        {
          if ( sub_60768E24() )
            ++v17;
        }
      }
      if ( (FIELD_U8(v4, 66) & 4) != 0 )
      {
        ++v18;
        if ( Player_getActorSlotChecked(v4, 2) )
        {
          if ( sub_60768E24() )
            ++v17;
        }
      }
      result = FIELD_U8(v4, 66);
      if ( (result & 8) != 0 )
      {
        result = Player_getActorSlotChecked(v4, 3);
        ++v18;
        if ( result )
        {
          result = sub_60768E24();
          if ( result )
            ++v17;
        }
      }
      if ( v18 == v17 )
      {
        v19 = v17 == 0;
        if ( v17 )
          v19 = v18 == 0;
        if ( !v19 )
          goto LABEL_67;
      }
      return result;
    case 4:
      if ( (FIELD_U8(PlayerMgr_instance, 66) & 1) == 0 )
        goto LABEL_55;
      v20 = Player_getActorSlotChecked(PlayerMgr_instance, 0);
      if ( !v20 )
        goto LABEL_55;
      if ( (FIELD_U8(dword_60C99DD4, 848) & 2) != 0 )
        return sub_60767234(v20);
      v21 = FIELD_U32(v20, 112);
      v22 = FIELD_U32(v20, 116);
      v29 = FIELD_F32(v20, 108) + 32.0;
      v30 = v21;
      v31 = v22;
      sub_60768C20(v20, &v29);
LABEL_55:
      if ( (FIELD_U8(v4, 66) & 2) == 0 )
        goto LABEL_59;
      v20 = Player_getActorSlotChecked(v4, 1);
      if ( !v20 )
        goto LABEL_59;
      if ( (FIELD_U8(dword_60C99DD4, 848) & 2) != 0 )
        return sub_60767234(v20);
      v23 = FIELD_U32(v20, 112);
      v24 = FIELD_U32(v20, 116);
      v29 = FIELD_F32(v20, 108) + 32.0;
      v30 = v23;
      v31 = v24;
      sub_60768C20(v20, &v29);
LABEL_59:
      if ( (FIELD_U8(v4, 66) & 4) == 0 )
        goto LABEL_63;
      v20 = Player_getActorSlotChecked(v4, 2);
      if ( !v20 )
        goto LABEL_63;
      if ( (FIELD_U8(dword_60C99DD4, 848) & 2) != 0 )
        return sub_60767234(v20);
      v25 = FIELD_U32(v20, 112);
      v26 = FIELD_U32(v20, 116);
      v29 = FIELD_F32(v20, 108) + 32.0;
      v30 = v25;
      v31 = v26;
      sub_60768C20(v20, &v29);
LABEL_63:
      if ( (FIELD_U8(v4, 66) & 8) != 0 )
      {
        v20 = Player_getActorSlotChecked(v4, 3);
        if ( v20 )
        {
          if ( (FIELD_U8(dword_60C99DD4, 848) & 2) != 0 )
            return sub_60767234(v20);
          v27 = FIELD_U32(v20, 112);
          v28 = FIELD_U32(v20, 116);
          v29 = FIELD_F32(v20, 108) + 32.0;
          v30 = v27;
          v31 = v28;
          sub_60768C20(v20, &v29);
        }
      }
LABEL_67:
      result = 3;
LABEL_68:
      *v3 = result;
      return result;
    default:
      return result;
  }
}
