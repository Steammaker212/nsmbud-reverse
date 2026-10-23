/* kanban_yajirushi_ref
 * address: 0x6062B900   size: 1976   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall kanban_yajirushi_ref(int a1)
{
  unsigned int v2; // r9
  int result; // r0
  int v4; // r0
  int *v5; // r0
  _DWORD *v6; // r8
  void *ResArchiveById; // r10
  char *v8; // r0
  void *Model2; // r7
  ModelWrapper *v10; // r6
  ModelWrapper *v11; // r0
  ModelWrapper **v12; // r7
  int *animations; // r0
  int v14; // r6
  int v15; // r5
  int v16; // r1
  char *v17; // r0
  float *v18; // r0
  float v19; // s2
  float v20; // s6
  _DWORD *v21; // r6
  CollisionMgr *v22; // r0
  unsigned int v23; // r0
  unsigned int v24; // r1
  int *v25; // r9
  int v26; // r0
  int v27; // r5
  int v28; // r8
  int v29; // r0
  char v30; // r12
  int (__fastcall ***v31)(_DWORD, int *); // r10
  int v32; // r1
  float *v33; // r5
  int v34; // r6
  bool v35; // zf
  int v36; // r0
  float v37; // s0
  float v38; // s0
  int v39; // r0
  StateBase *v40; // r1
  int *v41; // r1
  unsigned int *v42; // r0
  unsigned int v43; // r1
  int v44; // r2
  int v45; // r2
  int v46; // r1
  sead__SafeString a2; // [sp+1Ch] [bp-54h] BYREF
  float v48; // [sp+24h] [bp-4Ch]
  int v49; // [sp+28h] [bp-48h]
  float v50; // [sp+2Ch] [bp-44h]
  float v51; // [sp+30h] [bp-40h]
  float v52; // [sp+34h] [bp-3Ch]
  int v53; // [sp+38h] [bp-38h]
  float v54; // [sp+3Ch] [bp-34h]
  float v55; // [sp+40h] [bp-30h]
  float v56; // [sp+44h] [bp-2Ch]
  int v57; // [sp+48h] [bp-28h]

  v2 = FIELD_U32(a1, 20);
  if ( FIELD_U32(dword_60C99DD4, 764) == 4 )
  {
    result = 2;
    if ( (v2 & 0x10000000) != 0 )
      return result;
  }
  v4 = HIBYTE(v2) & 0xF;
  if ( v4 == 1 )
  {
    FIELD_U32(a1, 116) = -1010302976;
  }
  else if ( v4 == 2 )
  {
    FIELD_U32(a1, 116) = -987594752;
  }
  else
  {
    v5 = &dword_6062BCE8;
    if ( (v2 & 0x10) != 0 )
      v5 = &dword_6062BCEC;
    FIELD_U32(a1, 116) = *v5;
  }
  FIELD_U32(a1, 6080) = (v2 >> 5) & 1;
  v6 = (_DWORD *)(a1 + 6080);
  ResArchiveById = (void *)Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  if ( sub_6040E314(LevelInfo_instance) )
  {
    a2.vtable = &sead__SafeStringBase__vtable;
    v8 = "kanban_yajirushi_obake";
  }
  else
  {
    switch ( (FIELD_U32(a1, 20) >> 20) & 0xF )
    {
      case 1:
        a2.vtable = &sead__SafeStringBase__vtable;
        v8 = "kanban_yajirushi_snow";
        break;
      case 2:
        a2.vtable = &sead__SafeStringBase__vtable;
        v8 = "kanban_yajirushi_big";
        break;
      case 3:
        a2.vtable = &sead__SafeStringBase__vtable;
        v8 = "kanban_yajirushi_rock";
        break;
      case 4:
        a2.vtable = &sead__SafeStringBase__vtable;
        v8 = "kanban_yajirushi_obake";
        break;
      default:
        a2.vtable = &sead__SafeStringBase__vtable;
        v8 = "kanban_yajirushi";
        break;
    }
  }
  a2.cstr = v8;
  Model2 = (void *)Resource_getModel2(ResArchiveById, &a2, 1, 0, 0, 0, 0, 0, 0);
  v10 = (ModelWrapper *)operator_new_8DE25C(0x30u, 0, 4);
  v11 = ModelWrapper_ctor(v10, Model2, 1, 0, 0, 0, 0);
  ModelWrapper_setup(v11, ResArchiveById, 0, 0);
  FIELD_U32(a1, 6076) = v10;
  v12 = (ModelWrapper **)(a1 + 6076);
  animations = (int *)FIELD_U32(v10, 0xC);
  v14 = FIELD_U32(a1, 20);
  v15 = *animations;
  v16 = Profile__getResArchiveById(*(Profile **)(a1 + 12), 0);
  a2.vtable = &sead__SafeStringBase__vtable;
  if ( (v14 & 0xF00000) == 0x300000 )
    v17 = "kanban_yajirushi_rock";
  else
    v17 = "kanban_yajirushi";
  a2.cstr = v17;
  SkeletalAnim_play(v15, v16, (const char **)&a2);
  FIELD_U32(a1, 6064) = (int)(float)(v2 & 7);
  AnimationCtrl_setRepeat((ModelAnimation *)((char *)*(*v12)->sklAnims.animations + 4), 0);
  v18 = (float *)*(*v12)->sklAnims.animations;
  v18[5] = (float)FIELD_S32(a1, 6064);
  *((_DWORD *)v18 + 7) |= 2u;
  *((_DWORD *)*(*v12)->sklAnims.animations + 6) = 0;
  FIELD_U32(a1, 156) = 0;
  FIELD_U32(a1, 160) = 0;
  FIELD_U32(a1, 164) = 0;
  v19 = (float)(0.024541 * 0.0) + 0.0;
  v20 = (float)(-0.00030118 * 0.0) + 1.0;
  *(float *)&a2.vtable = v20 * v20;
  v50 = v20 * v19;
  v54 = -v19;
  *(float *)&a2.cstr = (float)((float)(v19 * v19) * v20) - (float)(v20 * v19);
  v51 = (float)(v20 * v20) + (float)((float)(v19 * v19) * v19);
  v55 = v20 * v19;
  v48 = (float)(v19 * v19) + (float)(v19 * (float)(v20 * v20));
  v52 = (float)(v19 * v55) - v55;
  v56 = v20 * v20;
  v21 = (_DWORD *)(a1 + 108);
  v49 = FIELD_U32(a1, 108);
  v53 = FIELD_U32(a1, 112);
  v57 = FIELD_U32(a1, 116);
  (*(void (__fastcall **)(void *, sead__SafeString *))(*(_DWORD *)(*v12)->model + 60))((*v12)->model, &a2);
  ModelWrapper_updateModel(*v12);
  if ( *v6 )
  {
    v22 = (CollisionMgr *)(a1 + 648);
    if ( (FIELD_U8(a1, 27) & 0x10) != 0 )
      CollisionMgr_init(v22, (StateActor *)a1, &stru_60B06AB4, &stru_60B06AC0, 0);
    else
      CollisionMgr_init(v22, (StateActor *)a1, &stru_60B06AB4, 0, &stru_60B06ACC);
  }
  v23 = FIELD_U32(a1, 20);
  if ( (v23 & 0x40) != 0 )
  {
    v24 = (v23 >> 8) & 3;
    FIELD_U32(a1, 6128) = v24;
    v25 = (int *)(a1 + 6128);
    v26 = (v23 >> 12) & 7;
    if ( v24 >= 2 )
      v21 = (_DWORD *)(a1 + 112);
    FIELD_U32(a1, 6120) = dword_60AF4D10[v26];
    FIELD_U32(a1, 6132) = *v21;
    v27 = FIELD_U8(a1, 28);
    v28 = *(_DWORD *)(ActorMgr__instance + 27180);
    v29 = sub_60008598(ActorMgr__instance, 51, *(_DWORD *)(ActorMgr__instance + 27172));
    v31 = 0;
    if ( v29 == v28 )
    {
      v6 = (_DWORD *)(a1 + 6080);
    }
    else
    {
      while ( 1 )
      {
        v32 = *(_DWORD *)v29;
        if ( *(unsigned __int8 *)(*(_DWORD *)v29 + 28) == v27 )
          break;
        v29 = sub_60008598(ActorMgr__instance, 51, v29 + 4);
        if ( v29 == v28 )
        {
          v6 = (_DWORD *)(a1 + 6080);
          v25 = (int *)(a1 + 6128);
          goto LABEL_35;
        }
      }
      v6 = (_DWORD *)(a1 + 6080);
      v25 = (int *)(a1 + 6128);
      if ( v32 )
      {
        v31 = *(int (__fastcall ****)(_DWORD, int *))v29;
        FIELD_U32(a1, 6124) = FIELD_U32(v32, 8);
      }
    }
LABEL_35:
    if ( ((unsigned int)dword_60CB3EF4 & ~(1617083936 << v30) & 1) == 0 && _cxa_guard_acquire(dword_60CB3EF4) )
    {
      dword_60CB3EF0 = (int)&off_60BC00BC;
      _cxa_guard_release(dword_60CB3EF4);
    }
    v33 = (float *)(a1 + 6132);
    v34 = (int)(v31 + 462);
    v35 = (**v31)(v31, &dword_60CB3EF0) == 0;
    v36 = *v25;
    if ( v35 )
      v34 = 1848;
    v37 = *(float *)v34 * FIELD_F32(a1, 6120);
    switch ( v36 )
    {
      case 2:
        v38 = v37 + *v33;
        break;
      case 1:
        FIELD_F32(a1, 108) = *v33 - v37;
        goto LABEL_48;
      case 0:
        FIELD_F32(a1, 108) = v37 + *v33;
        goto LABEL_48;
      default:
        v38 = *v33 - v37;
        break;
    }
    FIELD_F32(a1, 112) = v38;
  }
LABEL_48:
  v39 = FIELD_U32(a1, 20);
  FIELD_U8(a1, 6136) = BYTE2(v39) & 1;
  if ( (v39 & 0x10000) != 0 )
  {
    FIELD_U8(a1, 6138) = FIELD_U8(a1, 28);
    *v6 = 0;
    FIELD_U8(a1, 6137) = 0;
    if ( sub_6062C150(a1) )
      v40 = (StateBase *)&stru_60CB3E60;
    else
      v40 = (StateBase *)&dword_60CB3E84;
    StateMgr__changeState((StateMgr *)(a1 + 6104), v40);
  }
  FIELD_U32(a1, 6256) = 0;
  FIELD_U32(a1, 6252) = 0;
  FIELD_U32(a1, 6248) = 0;
  FIELD_U32(a1, 6244) = 0;
  FIELD_U32(a1, 6240) = 0;
  FIELD_U32(a1, 6236) = 0;
  FIELD_U32(a1, 6232) = 0;
  FIELD_U32(a1, 6228) = 0;
  if ( (FIELD_U32(a1, 20) & 0xF00000) == 0x300000 )
    v41 = &dword_60CB3F4C;
  else
    v41 = &dword_60CB3F2C;
  sub_608337BC(a1 + 6192, v41);
  FIELD_U32(a1, 6192) = FIELD_U32(a1, 6220);
  v42 = (unsigned int *)(a1 + 3200);
  v43 = FIELD_U32(a1, 3200) | 0x80000000;
  FIELD_U32(a1, 3200) = v43;
  if ( (FIELD_U8(a1, 27) & 0x10) != 0 )
  {
    v45 = FIELD_U32(a1, 3180);
  }
  else
  {
    FIELD_U32(a1, 3176) |= 0x80000000;
    FIELD_U32(a1, 3184) |= 0x80000000;
    v42 = (unsigned int *)(a1 + 3188);
    v43 = FIELD_U32(a1, 3188) | 0x200;
    v44 = FIELD_U32(a1, 3180) | 0x200;
    FIELD_U32(a1, 3188) = v43;
    v45 = v44 | 0x20000;
    FIELD_U32(a1, 3180) = v45;
  }
  *v42 = v43 | 0x20000;
  FIELD_U32(a1, 3204) |= 0x200u;
  FIELD_U32(a1, 3196) |= 0x200u;
  FIELD_U32(a1, 3180) = v45 | 0x200;
  FIELD_U32(a1, 3188) |= 0x200u;
  if ( FIELD_U8(a1, 2992) )
  {
    v46 = 0;
    if ( !FIELD_U8(a1, 2996) )
      v46 = a1 + 3040;
  }
  else
  {
    v46 = FIELD_U8(a1, 3000);
    if ( FIELD_U8(a1, 3000) )
      v46 = a1 + 3088;
  }
  sub_60003C60(a1, v46, 256.0);
  sub_6062C244(a1);
  return 1;
}
