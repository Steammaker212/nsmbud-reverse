/* sub_6024313C
 * address: 0x6024313C   size: 1204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_6024313C(int a1)
{
  char v1; // r12
  int v3; // r0
  unsigned int v4; // r2
  int v5; // r1
  int v6; // r2
  _BYTE *v7; // r6
  int v8; // r7
  int v9; // r5
  int v10; // r5
  int v11; // s2
  char v12; // r12
  int v13; // r0
  float v14; // s0
  float v15; // s2
  float v16; // s6
  float v17; // s10
  unsigned int v18; // r0
  int v19; // r0
  float v20; // s0
  float v21; // s2
  int (__fastcall ***v22)(_DWORD, int *); // r5
  float v24; // [sp+8h] [bp-50h] BYREF
  float v25; // [sp+Ch] [bp-4Ch]
  float v26; // [sp+10h] [bp-48h]
  int v27; // [sp+14h] [bp-44h]
  float v28; // [sp+18h] [bp-40h]
  float v29; // [sp+1Ch] [bp-3Ch]
  float v30; // [sp+20h] [bp-38h]
  float v31; // [sp+24h] [bp-34h]
  float v32; // [sp+28h] [bp-30h]
  float v33; // [sp+2Ch] [bp-2Ch]
  float v34; // [sp+30h] [bp-28h]
  float v35; // [sp+34h] [bp-24h]

  v3 = FIELD_U32(dword_60C99DD4, 764);
  if ( v3 != 1 )
    LOBYTE(v3) = 0;
  FIELD_U8(a1, 6313) = v3;
  FIELD_U32(a1, 76) |= 4u;
  FIELD_U8(a1, 6423) = 1;
  v4 = FIELD_U32(a1, 20);
  v5 = v4 & 0xF;
  FIELD_U8(a1, 6314) = v4 & 0xF;
  FIELD_U32(a1, 6316) = (unsigned __int8)v4 >> 4;
  v6 = (v4 >> 8) & 0xF;
  FIELD_U32(a1, 6320) = v6;
  if ( v6 )
  {
    FIELD_U32(a1, 6340) = 1065353216;
    FIELD_U32(a1, 6344) = 1065353216;
    FIELD_U32(a1, 6348) = 1065353216;
    FIELD_U32(a1, 116) = 1174216704;
    FIELD_U8(a1, 6422) = 1;
    v7 = (_BYTE *)(a1 + 6422);
  }
  else
  {
    if ( (unsigned __int8)v5 >= 4u )
      v5 = 0;
    v8 = *(_DWORD *)(PlayerMgr_instance + 4 * v5 + 32);
    if ( v8 )
    {
      FIELD_U32(a1, 116) = 1174011904;
      FIELD_U8(a1, 6422) = 1;
      v7 = (_BYTE *)(a1 + 6422);
      if ( ((unsigned int)&dword_60C7B364 & ~(1612984896 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
      {
        StageActor_RTTI = (int)&off_60BC0098;
        _cxa_guard_release(&dword_60C7B364);
      }
      v9 = v8 + 86;
      if ( !(**(int (__fastcall ***)(int, int *))v8)(v8, &StageActor_RTTI) )
        v9 = 86;
      if ( !*(_BYTE *)v9 && FIELD_F32(v8, 116) < 0.0 )
        *v7 = 2;
      if ( FIELD_U32(a1, 6316) == 1 )
        FIELD_U32(a1, 6408) = 40;
    }
    else
    {
      Actor__onDelete();
      v7 = (_BYTE *)(a1 + 6422);
    }
  }
  FIELD_U32(a1, 144) = 1065353216;
  FIELD_U32(a1, 148) = 1065353216;
  FIELD_U32(a1, 152) = 1065353216;
  balloon_back_ref(a1);
  v10 = 0;
  LightMask__init((RevealMaskRelated *)(a1 + 6436), 0, 2);
  FIELD_U32(a1, 100) = -1113336054;
  FIELD_U32(a1, 132) = 1082130432;
  FIELD_U32(a1, 136) = -1065353216;
  FIELD_U32(a1, 140) = 0;
  FIELD_U32(a1, 620) = 0;
  CollisionMgr_init((CollisionMgr *)(a1 + 648), (StateActor *)a1, &stru_60AFD6DC, &stru_60AFD6E8, &stru_60AFD6F4);
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BD9BEC, a1 + 6652);
  FIELD_U8(a1, 297) = 0;
  FIELD_U8(a1, 296) = *v7;
  FIELD_U8(a1, 6272) = 4;
  FIELD_U32(a1, 6480) = 0;
  FIELD_U8(a1, 6484) = 0;
  (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C8DB44);
  FIELD_F64(a1, 6624) = ((double (__fastcall *)(int))**(_DWORD **)(a1 + 6620))(a1 + 6620);
  FIELD_U32(a1, 6632) = v11;
  sub_60243B98(a1);
  if ( FIELD_U32(a1, 6320) == 1 )
  {
    v13 = FIELD_U32(a1, 108);
    v14 = FIELD_F32(a1, 112);
    v15 = FIELD_F32(a1, 116);
    v16 = (float)(0.024541 * 0.0) + 0.0;
    v17 = (float)(-0.00030118 * 0.0) + 1.0;
    v24 = v17 * v17;
    v28 = v16 * v17;
    v32 = -v16;
    v25 = (float)((float)(v16 * v16) * v17) - (float)(v16 * v17);
    v29 = (float)(v17 * v17) + (float)(v16 * (float)(v16 * v16));
    v33 = v16 * v17;
    v26 = (float)(v16 * v16) + (float)(v16 * (float)(v17 * v17));
    v30 = (float)(v16 * v33) - v33;
    v34 = v17 * v17;
    v27 = v13;
    v31 = v14 + 8.0;
    v35 = v15 + -64.0;
    (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 6308) + 68))(**(_DWORD **)(a1 + 6308), a1 + 6340);
    (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6308) + 60))(**(_DWORD **)(a1 + 6308), &v24);
    ModelWrapper_updateModel(*(ModelWrapper **)(a1 + 6308));
  }
  else
  {
    v18 = FIELD_U8(a1, 6314);
    if ( v18 < 4 )
      v10 = (char)v18;
    v19 = *(_DWORD *)(PlayerMgr_instance + 4 * v10 + 32);
    if ( v19 )
    {
      v20 = FIELD_F32(a1, 112);
      v21 = FIELD_F32(a1, 116);
      v24 = FIELD_F32(a1, 108);
      v25 = v20 + 6.0;
      v26 = v21 + -64.0;
      ((void (__fastcall *)(int, float *))loc_60798204)(v19, &v24);
    }
  }
  v22 = *(int (__fastcall ****)(_DWORD, int *))(EnemyCounterMaybe_instance + 24);
  if ( ((unsigned int)&dword_60C81200 & ~(1612985720 << v12) & 1) == 0 && _cxa_guard_acquire(&dword_60C81200) )
  {
    dword_60C811FC = (int)&off_60BC210C;
    _cxa_guard_release(&dword_60C81200);
  }
  if ( v22 && (**v22)(v22, &dword_60C811FC) == 1 )
    FIELD_U8(a1, 6485) = 1;
  return 1;
}
