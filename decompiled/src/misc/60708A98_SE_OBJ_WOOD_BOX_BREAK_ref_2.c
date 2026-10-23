/* SE_OBJ_WOOD_BOX_BREAK_ref_2
 * address: 0x60708A98   size: 1048   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

ColliderListNode *__fastcall SE_OBJ_WOOD_BOX_BREAK_ref_2(int a1, int a2)
{
  float v4; // r0
  float *v5; // r7
  int v6; // r1
  int *v7; // r4
  int v8; // r0
  int v9; // r6
  int v10; // r1
  unsigned int v11; // r1
  bool v12; // zf
  ColliderListNode *result; // r0
  float v14; // r1
  float v15; // r2
  int v16; // r0
  __int16 *v17; // r6
  int v18; // r0
  unsigned int v19; // r2
  float v20; // s0
  char v21; // r1
  float v22; // r1
  float v23; // r2
  int v24; // r2
  float v25; // r1
  int v26; // r6
  int v27; // r5
  Vec3 v28; // [sp+8h] [bp-80h] BYREF
  int v29; // [sp+14h] [bp-74h]
  char v30; // [sp+18h] [bp-70h]
  char v31; // [sp+19h] [bp-6Fh]
  __int16 v32; // [sp+1Ah] [bp-6Eh]
  int v33; // [sp+1Ch] [bp-6Ch]
  int v34; // [sp+20h] [bp-68h]
  int v35; // [sp+24h] [bp-64h]
  int v36; // [sp+28h] [bp-60h]
  int v37; // [sp+2Ch] [bp-5Ch]
  int v38; // [sp+38h] [bp-50h]
  int v39; // [sp+40h] [bp-48h]
  int v40; // [sp+44h] [bp-44h]
  Vec3 v41; // [sp+50h] [bp-38h] BYREF
  Vec2 out; // [sp+60h] [bp-28h] BYREF
  Vec3 position; // [sp+68h] [bp-20h] BYREF

  v4 = FIELD_F32(a1, 112);
  v41.z = FIELD_F32(a1, 116);
  v41.y = v4;
  v5 = (float *)(a1 + 108);
  v41.x = FIELD_F32(a1, 108);
  v7 = (int *)(a1 + 6996);
  v6 = FIELD_U32(a1, 6996);
  v8 = 0;
  if ( v6 == 9 )
  {
    if ( sub_607890A8(PlayerMgr_instance) )
      ((void (__fastcall *)(int))loc_607892B4)(PlayerMgr_instance);
    if ( a2 )
      v9 = FIELD_U32(a2, 80);
    else
      v9 = 2;
    if ( sub_607890A8(PlayerMgr_instance) )
      v10 = 2;
    else
      v10 = 0;
    SE_PLY_YOSHI_EGG_APPEAR_ref((float *)a1, v10, v9);
    v6 = *v7;
    v8 = 1;
  }
  if ( v6 == 14 )
  {
    if ( a2 )
    {
      v11 = FIELD_S8(a2, 84);
      if ( v11 != -1 )
      {
LABEL_17:
        v12 = sub_60465D70(dword_60C9D3E4, v11) == 0;
        v6 = 2;
        v8 = 1;
        if ( !v12 )
          v6 = 1;
        *v7 = v6;
        goto LABEL_20;
      }
    }
    else
    {
      v11 = -1;
    }
    *v7 = 2;
    goto LABEL_17;
  }
LABEL_20:
  v12 = v6 == 10;
  if ( v6 != 10 )
    v12 = v6 == 1;
  if ( v12 )
  {
    v28 = v41;
    v29 = 0;
    v30 = 1;
    v31 = FIELD_U8(a1, 86);
    LOWORD(v33) = 0;
    v32 = 0;
    BYTE2(v33) = 0;
    if ( v6 == 10 )
      v30 = 5;
    SE_OBJ_WOOD_BOX_BREAK_ref_2_helper(dword_60CAF15C, (int)&v28);
  }
  else if ( v8 || !v6 )
  {
    if ( !v8 )
      goto LABEL_29;
  }
  else
  {
    v19 = dword_60B09BB0[v6];
    FIELD_U32(a1, 6856) = v19;
    v20 = flt_60B09BF4[v6];
    LODWORD(v28.x) = &v41;
    v41.y = v20 + v41.y;
    LOBYTE(v29) = FIELD_U8(a1, 86);
    LODWORD(v28.z) = 1;
    BYTE1(v29) = 1;
    if ( a2 )
      v21 = FIELD_U8(a2, 84);
    else
      v21 = -1;
    v33 = FIELD_U32(a1, 6864);
    v36 = v21;
    v37 = v33;
    v39 = FIELD_U8(a1, 6851);
    v40 = FIELD_U32(a1, 80);
    v38 = 3;
    v34 = 1;
    v35 = FIELD_U8(a1, 87);
    sub_60466328(dword_60C9D3E4, (int)&v28, v19, 0);
  }
  result = *(ColliderListNode **)(a1 + 632);
  if ( !result )
    return result;
  LOBYTE(FIELD_U32(result, 0x0)) |= 4u;
LABEL_29:
  v14 = FIELD_F32(a1, 112);
  v15 = FIELD_F32(a1, 116);
  v28.x = *v5;
  v28.y = v14;
  v28.z = v15;
  v28.y = v14 + (float)(FIELD_F32(a1, 6976) * 16.0);
  v17 = (__int16 *)(a1 + 7000);
  v16 = FIELD_U32(a1, 7000);
  if ( FIELD_U32(a1, 7004) == 2 )
  {
    switch ( v16 )
    {
      case 0:
        v18 = 953;
        goto LABEL_46;
      case 1:
        v18 = 954;
        goto LABEL_46;
      case 2:
        v18 = 955;
        goto LABEL_46;
      case 3:
        v18 = 956;
        goto LABEL_46;
      default:
        break;
    }
  }
  else
  {
    switch ( v16 )
    {
      case 0:
        v18 = 949;
        goto LABEL_46;
      case 1:
        v18 = 950;
        goto LABEL_46;
      case 2:
        v18 = 951;
        goto LABEL_46;
      case 3:
        v18 = 952;
LABEL_46:
        EffectData_create(v18, &v28, 0, 0);
        break;
      default:
        break;
    }
  }
  v22 = FIELD_F32(a1, 112);
  v23 = FIELD_F32(a1, 116);
  v28.x = *v5;
  v28.y = v22;
  v28.z = v23;
  v24 = 1;
  if ( !*(_DWORD *)v17 )
  {
    v24 = 2;
    v28.y = v28.y + -16.0;
  }
  if ( FIELD_U32(a1, 7004) == 2 )
    v24 |= 0x100u;
  BigBlockFragmentHeap_ref((sead_ListNode *)dword_60C99CDC, &v28, v24);
  v25 = FIELD_F32(a1, 112);
  v26 = *v17;
  v27 = Global_BasicSoundActor2;
  position.x = FIELD_F32(a1, 108);
  position.y = v25;
  mapPositionToScreen(&out, &position);
  sub_60813BDC(v27, "SE_OBJ_WOOD_BOX_BREAK", &out, v26, 0);
  result = ColliderMgr_removeRelated1(ColliderMgr_instance, (ColliderBase *)(a1 + 6120));
  FIELD_U8(a1, 19) = 1;
  return result;
}
