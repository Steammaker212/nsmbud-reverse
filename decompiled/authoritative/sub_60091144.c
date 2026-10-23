void __fastcall sub_60091144(ActiveCollider *a1, ActiveCollider *a2)
{
  char v2; // r12
  StageActor *owner; // r6
  StageActor *v6; // r4
  int v7; // r5
  char v8; // r12
  bool v9; // zf
  int type; // r0
  unsigned int v11; // r0
  unsigned int *v12; // r7
  StateBase *CurrentState; // r0
  int v14; // r6
  int v15; // r2
  unsigned int v16; // r0
  float v17; // s0
  float v18; // s16
  float v19; // s0
  float v20; // s18
  float v21; // s0
  float v22; // s20
  float v23; // s0
  float v24; // s20
  float v25; // s22
  float v26; // s18
  float v27; // s16
  StateBase *v28; // r0
  int v29; // r5
  StateBase *v30; // r0
  int v31; // r5
  StateBase *v32; // r0
  int v33; // r5
  StateBase *v34; // r0
  int v35; // r5
  float v36; // s0
  float v37; // s0
  float v38; // s0
  float v39; // s0
  StateBase *v40; // r0
  int v41; // r5
  float x; // s0
  int v43; // r1
  unsigned int playerId; // r0
  StateBase *v45; // r0
  int v46; // r5
  StateBase *v47; // r0
  int v48; // r5
  StateBase *v49; // r0
  int v50; // r5
  float v51; // s0
  float v52; // s16
  float v53; // s0
  unsigned int v54; // r0
  int v55; // r0
  int v56; // r5
  char v57; // r12
  StateBase *v58; // r0
  int v59; // r10
  StateBase *v60; // r0
  int v61; // r5
  StateBase *v62; // r0
  int v63; // r6
  StateBase *v64; // r0
  int v65; // r6
  StateBase *v66; // r0
  int v67; // r10
  StateBase *v68; // r0
  int v69; // r9
  unsigned int v70; // r9
  int v71; // r11
  int v72; // r10
  float v73; // s0
  int (__fastcall ***v74)(_DWORD, int *); // r3
  char v75; // r12
  int v76; // r0
  StateBase *v77; // r0
  int v78; // r5
  StateBase *v79; // r0
  int v80; // r5
  StateBase *v81; // r0
  int v82; // r5
  int v83; // r0
  bool v84; // zf
  StateBase *v85; // r0
  int v86; // r10
  StateBase *v87; // r0
  int v88; // r10
  StateBase *v89; // r0
  int v90; // r6
  StateBase *v91; // r0
  int v92; // r6
  StateBase *v93; // r0
  int v94; // r6
  float v95; // s0
  unsigned int v96; // r11
  unsigned int v97; // r6
  int v98; // r10
  int v99; // r9
  char v100; // r12
  int v101; // r0
  int v102; // r0
  int v103; // r0
  float v104; // s0
  float y; // r1
  int v106; // r5
  int (__fastcall ***v107)(_DWORD, int *); // [sp+4h] [bp-5Ch]
  Vec2 out; // [sp+8h] [bp-58h] BYREF
  Vec3 position; // [sp+10h] [bp-50h] BYREF

  owner = a1->owner;
  v6 = a2->owner;
  if ( ((unsigned int)&dword_60C81104 & ~(1611207028 << v2) & 1) == 0 && _cxa_guard_acquire(&dword_60C81104) )
  {
    dword_60C81100 = (int)&off_60BC66E8;
    _cxa_guard_release(&dword_60C81104);
  }
  if ( !owner )
    return;
  v7 = (*(int (__fastcall **)(StageActor *, int *))owner->_.vtable)(owner, &dword_60C81100);
  if ( v7 )
    v7 = (int)owner;
  v9 = v6 == 0;
  if ( v6 )
    v9 = v7 == 0;
  if ( v9 )
    return;
  type = (unsigned __int8)v6->type;
  if ( !v6->type )
  {
    if ( Actor__getProfileId(&v6->_) != 392 )
    {
      Enemy__collisionCallback(a1, a2);
      return;
    }
    if ( Actor__getProfileId(v6->_.parent) == 726 )
      return;
    sub_602EE7B8(v6, v6->direction, v6->playerId);
LABEL_31:
    a2->field_6E |= 2u;
    return;
  }
  if ( type != 3 )
  {
    if ( type == 1 )
    {
      if ( ((unsigned int)&dword_60C7B374 & ~(1611207188 << v8) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B374) )
      {
        dword_60C7B370 = (int)&off_60BC00B0;
        _cxa_guard_release(&dword_60C7B374);
      }
      if ( (*(int (__fastcall **)(StageActor *, int *))v6->_.vtable)(v6, &dword_60C7B370) == 1 )
      {
        v12 = (unsigned int *)(v7 + 15240);
        v11 = *(_DWORD *)(v7 + 15240);
        if ( v11 > 3 || v6->playerId != v11 )
        {
          if ( (BYTE1(v6[1].effectOffset.x) & 1) != 0 )
          {
            v43 = 0;
            a2->field_6E |= 2u;
            playerId = (unsigned __int8)v6->playerId;
            if ( playerId < 4 )
              v43 = (char)playerId;
            *(_WORD *)(v7 + 2 * v43 + 6140) = 32;
          }
          else
          {
            if ( a2->info.category == 7 )
            {
              CurrentState = StateMgr__getCurrentState((StateMgr *)(v7 + 6084));
              v14 = (*((int (__fastcall **)(StateBase *))CurrentState->vtable + 2))(CurrentState);
              if ( v14 == (*(int (**)(void))(dword_60C82220 + 8))() )
              {
                if ( *(_BYTE *)(v7 + 15261) )
                {
                  *(_BYTE *)(v7 + 15261) = 0;
                  *(_DWORD *)(v7 + 80) = v6->position.x >= *(float *)(v7 + 108);
                  (*(void (__fastcall **)(int, void *))(*(_DWORD *)v7 + 192))(v7, &unk_60C82240);
                }
              }
            }
            if ( (LOBYTE(v6[1].effectOffset.x) & 0x30) != 0 )
            {
              (*(void (__fastcall **)(StageActor *, int, int))(v6->_.vtable + 1168))(v6, v7, 4);
              v15 = 0;
              a2->field_6E |= 2u;
              v6[14].field_230 = 32;
              v16 = (unsigned __int8)v6->playerId;
              if ( v16 < 4 )
                v15 = (char)v16;
              *(_WORD *)(v7 + 2 * v15 + 6140) = 32;
            }
            else if ( v6->position.y > (float)(*(float *)(v7 + 112) + 12.0) )
            {
              if ( *v12 >= 4
                && ((v62 = StateMgr__getCurrentState((StateMgr *)(v7 + 6084)),
                     v63 = (*((int (__fastcall **)(StateBase *))v62->vtable + 2))(v62),
                     v63 == (*(int (**)(void))(dword_60C82060 + 8))())
                 || (v64 = StateMgr__getCurrentState((StateMgr *)(v7 + 6084)),
                     v65 = (*((int (__fastcall **)(StateBase *))v64->vtable + 2))(v64),
                     v65 == (*(int (**)(void))(dword_60C82080 + 8))())) )
              {
                *v12 = v6->playerId;
                (*(void (__fastcall **)(int, int *))(*(_DWORD *)v7 + 192))(v7, &dword_60C820A0);
              }
              else
              {
                v89 = StateMgr__getCurrentState((StateMgr *)(v7 + 6084));
                v90 = (*((int (__fastcall **)(StateBase *))v89->vtable + 2))(v89);
                if ( v90 == (*(int (**)(void))(dword_60C820E0 + 8))()
                  || (v91 = StateMgr__getCurrentState((StateMgr *)(v7 + 6084)),
                      v92 = (*((int (__fastcall **)(StateBase *))v91->vtable + 2))(v91),
                      v92 == (*(int (**)(void))(dword_60C82200 + 8))())
                  || (v93 = StateMgr__getCurrentState((StateMgr *)(v7 + 6084)),
                      v94 = (*((int (__fastcall **)(StateBase *))v93->vtable + 2))(v93),
                      v94 == (*(int (**)(void))(dword_60C820C0 + 8))()) )
                {
                  v95 = *(float *)(v7 + 108);
                  v96 = *v12;
                  v97 = 0;
                  v98 = 0;
                  if ( v95 >= (float)(*(float *)(dword_60CC6484 + 112) + 80.0) )
                  {
                    v98 = 1;
                    if ( v95 <= (float)(*(float *)(dword_60CC6484 + 120) + -80.0) )
                    {
                      v99 = *(_DWORD *)sub_60008598(ActorMgr::instance, 374, *(_DWORD *)(ActorMgr::instance + 27172));
                      if ( ((unsigned int)&dword_60C81738 & ~(1611210248 << v100) & 1) == 0
                        && _cxa_guard_acquire(&dword_60C81738) )
                      {
                        dword_60C81734 = (int)&off_60BC1FA8;
                        _cxa_guard_release(&dword_60C81738);
                      }
                      if ( v99 && (**(int (__fastcall ***)(int, int *))v99)(v99, &dword_60C81734) == 1 )
                      {
                        if ( *(float *)(v99 + 108) <= *(float *)(v7 + 108) )
                          v98 = 0;
                      }
                      else
                      {
                        v98 = 0;
                      }
                    }
                  }
                  sub_60090FE8(v7, v98);
                  if ( v96 < 4 )
                    v97 = v96;
                  v101 = *(_DWORD *)(PlayerMgr_instance + 4 * v97 + 48);
                  *(_DWORD *)(v7 + 8420) = v101;
                  *(_DWORD *)(v7 + 9076) = v101;
                  *(_DWORD *)(v7 + 256) = v101;
                  sub_6010005C(v7, v96);
                  a2->field_6E |= 2u;
                  *v12 = v6->playerId;
                  (*(void (__fastcall **)(int, int *))(*(_DWORD *)v7 + 192))(v7, &dword_60C820A0);
                }
                else
                {
                  v103 = v6->playerId;
                  if ( *v12 != v103 )
                  {
                    if ( (unsigned __int8)v103 >= 4u )
                      v103 = 0;
                    if ( *(int *)(v7 + 4 * v103 + 9460) < 1 )
                    {
                      sub_602A3178(v6, &dword_60CC4B7C);
                      y = v6->position.y;
                      v106 = Global_BasicSoundActor1;
                      position.x = v6->position.x;
                      position.y = y;
                      mapPositionToScreen(&out, &position);
                      BasicSoundActor1_playSound(v106, "SE_OBJ_NO_DAMAGE_BOUND", (int)&out, 0);
                    }
                    else
                    {
                      v104 = v6->speed.y;
                      *(float *)&v6->field_B4 = v6->speed.x + *(float *)&v6->field_B4;
                      *(float *)&v6->field_B8 = v104 + *(float *)&v6->field_B8;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    return;
  }
  if ( Actor__getProfileId(&v6->_) != 726 )
  {
    owner = (StageActor *)v7;
    goto LABEL_58;
  }
  ActiveCollider_getCenterX(a2);
  v18 = v17;
  ActiveCollider_getCenterX(a1);
  v20 = v19;
  ActiveCollider_getCenterY(a2);
  v22 = v21;
  ActiveCollider_getCenterY(a1);
  v24 = v22 - v23;
  v25 = v18 - v20;
  v26 = (float)(v24 * v24) + (float)(v25 * v25);
  v27 = sqrtf(v26);
  if ( sub_6009219C(v6) != 1 || v27 >= 24.0 )
  {
    owner = (StageActor *)v7;
    goto LABEL_40;
  }
  if ( v6->speed.y > 0.0 )
  {
    owner = (StageActor *)v7;
    goto LABEL_40;
  }
  v58 = StateMgr__getCurrentState((StateMgr *)(v7 + 6084));
  v59 = (*((int (__fastcall **)(StateBase *))v58->vtable + 2))(v58);
  if ( v59 == (*(int (**)(void))(dword_60C82260 + 8))() )
  {
    owner = (StageActor *)v7;
    goto LABEL_40;
  }
  if ( *(_DWORD *)(v7 + 15240) >= 4u
    && ((v85 = StateMgr__getCurrentState((StateMgr *)(v7 + 6084)),
         v86 = (*((int (__fastcall **)(StateBase *))v85->vtable + 2))(v85),
         v86 == (*(int (**)(void))(dword_60C82220 + 8))())
     || (v87 = StateMgr__getCurrentState((StateMgr *)(v7 + 6084)),
         v88 = (*((int (__fastcall **)(StateBase *))v87->vtable + 2))(v87),
         v88 == (*(int (**)(void))(dword_60C82080 + 8))())) )
  {
    sub_60088B8C(v6);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)v7 + 192))(v7, &dword_60C82260);
  }
  else
  {
    v66 = StateMgr__getCurrentState((StateMgr *)(v7 + 6084));
    v67 = (*((int (__fastcall **)(StateBase *))v66->vtable + 2))(v66);
    if ( v67 != (*(int (**)(void))(dword_60C820E0 + 8))() )
    {
      v68 = StateMgr__getCurrentState((StateMgr *)(v7 + 6084));
      v69 = (*((int (__fastcall **)(StateBase *))v68->vtable + 2))(v68);
      if ( v69 != (*(int (**)(void))(dword_60C82200 + 8))() )
      {
        owner = (StageActor *)v7;
        goto LABEL_40;
      }
    }
    sub_60088B8C(v6);
    (*(void (__fastcall **)(int, int *))(*(_DWORD *)v7 + 192))(v7, &dword_60C82260);
    v70 = *(_DWORD *)(v7 + 15240);
    v71 = 0;
    v72 = 0;
    if ( v70 < 4 )
      v71 = *(_DWORD *)(v7 + 15240);
    if ( *(_DWORD *)(PlayerMgr_instance + 4 * v71 + 32) )
    {
      v73 = *(float *)(v7 + 108);
      if ( v73 >= (float)(*(float *)(dword_60CC6484 + 112) + 80.0) )
      {
        v72 = 1;
        if ( v73 <= (float)(*(float *)(dword_60CC6484 + 120) + -80.0) )
        {
          v74 = *(int (__fastcall ****)(_DWORD, int *))sub_60008598(
                                                         ActorMgr::instance,
                                                         374,
                                                         *(_DWORD *)(ActorMgr::instance + 27172));
          v107 = v74;
          if ( ((unsigned int)&dword_60C81738 & ~(1611209492 << v75) & 1) == 0 )
          {
            v76 = _cxa_guard_acquire(&dword_60C81738);
            v74 = v107;
            if ( v76 )
            {
              dword_60C81734 = (int)&off_60BC1FA8;
              _cxa_guard_release(&dword_60C81738);
              v74 = v107;
            }
          }
          if ( v74 && (**v74)(v74, &dword_60C81734) == 1 )
          {
            if ( *((float *)v107 + 27) <= *(float *)(v7 + 108) )
              v72 = 0;
          }
          else
          {
            v72 = 0;
          }
        }
      }
      sub_60090FE8(v7, v72);
      v102 = *(_DWORD *)(PlayerMgr_instance + 4 * v71 + 48);
      *(_DWORD *)(v7 + 8420) = v102;
      *(_DWORD *)(v7 + 9076) = v102;
      *(_DWORD *)(v7 + 256) = v102;
      sub_6010005C(v7, v70);
      *(_DWORD *)(v7 + 9436) = v70;
      *(_DWORD *)(v7 + 9440) = 60;
    }
  }
  a2->field_6E |= 2u;
LABEL_40:
  if ( !sub_6009219C(v6) && !LOBYTE(v6[11].rotation.z) )
  {
    v28 = StateMgr__getCurrentState((StateMgr *)&v6[9].aCollider.field_64);
    v29 = (*((int (__fastcall **)(StateBase *))v28->vtable + 2))(v28);
    if ( v29 != (*(int (**)(void))(dword_60C81D0C + 8))() )
    {
      if ( owner[23].aCollider.field_F0 < 4u )
        goto LABEL_47;
      v30 = StateMgr__getCurrentState((StateMgr *)&owner[9].aCollider.field_64);
      v31 = (*((int (__fastcall **)(StateBase *))v30->vtable + 2))(v30);
      if ( v31 != (*(int (**)(void))(dword_60C82220 + 8))() )
      {
        v32 = StateMgr__getCurrentState((StateMgr *)&owner[9].aCollider.field_64);
        v33 = (*((int (__fastcall **)(StateBase *))v32->vtable + 2))(v32);
        if ( v33 != (*(int (**)(void))(dword_60C82080 + 8))() )
          goto LABEL_47;
      }
    }
  }
  v34 = StateMgr__getCurrentState((StateMgr *)&v6[9].aCollider.field_64);
  v35 = (*((int (__fastcall **)(StateBase *))v34->vtable + 2))(v34);
  if ( v35 == (*(int (**)(void))(dword_60C81D8C + 8))() )
  {
LABEL_47:
    v36 = sqrtf(v26);
    if ( v36 > 0.0 )
    {
      v37 = 1.0 / v36;
      v24 = v24 * v37;
      v25 = v25 * v37;
    }
    v38 = (*(float (__fastcall **)(StageActor *))(owner->_.vtable + 668))(owner) + (float)(a1->info.distToEdge.x * 0.5);
    if ( v27 < v38 )
    {
      v39 = v38 - v27;
      *(float *)&v6->field_B4 = *(float *)&v6->field_B4 + (float)(v25 * v39);
      *(float *)&v6->field_B8 = *(float *)&v6->field_B8 + (float)(v24 * v39);
    }
    v40 = StateMgr__getCurrentState((StateMgr *)&v6[9].aCollider.field_64);
    v41 = (*((int (__fastcall **)(StateBase *))v40->vtable + 2))(v40);
    if ( v41 == (*(int (**)(void))(dword_60C81D8C + 8))() )
      x = v6->speed.x;
    else
      x = v6->maxSpeed.x;
    v6->speed.x = -x;
  }
LABEL_58:
  if ( Actor__getProfileId(&v6->_) != 728 )
    goto LABEL_65;
  v45 = StateMgr__getCurrentState((StateMgr *)&v6[9].aCollider.field_64);
  v46 = (*((int (__fastcall **)(StateBase *))v45->vtable + 2))(v45);
  if ( v46 == (*((int (**)(void))BobOmb_StateID_Kicked._._.vtable + 2))()
    || (v47 = StateMgr__getCurrentState((StateMgr *)&v6[9].aCollider.field_64),
        v48 = (*((int (__fastcall **)(StateBase *))v47->vtable + 2))(v47),
        v48 == (*(int (**)(void))(dword_60C8E2E0 + 8))()) )
  {
    v49 = StateMgr__getCurrentState((StateMgr *)&v6[9].aCollider.field_64);
    v50 = (*((int (__fastcall **)(StateBase *))v49->vtable + 2))(v49);
    if ( v50 != (*((int (**)(void))stru_60C8E1CC._.vtable + 2))() )
LABEL_62:
      sub_6025E064(v6);
  }
  else
  {
    v60 = StateMgr__getCurrentState((StateMgr *)&v6[9].aCollider.field_64);
    v61 = (*((int (__fastcall **)(StateBase *))v60->vtable + 2))(v60);
    if ( v61 == (*((int (**)(void))stru_60C8EA70._.vtable + 2))() )
    {
      sub_602A58B4(v6, a1->owner);
      goto LABEL_64;
    }
    v77 = StateMgr__getCurrentState((StateMgr *)&v6[9].aCollider.field_64);
    v78 = (*((int (__fastcall **)(StateBase *))v77->vtable + 2))(v77);
    if ( v78 == (*(int (**)(void))(dword_60C810B8 + 8))() )
      goto LABEL_64;
    v79 = StateMgr__getCurrentState((StateMgr *)&v6[9].aCollider.field_64);
    v80 = (*((int (__fastcall **)(StateBase *))v79->vtable + 2))(v79);
    if ( v80 == (*(int (**)(void))(dword_60C810D8 + 8))() || owner->speed.y >= 0.0 )
      goto LABEL_64;
    v81 = StateMgr__getCurrentState((StateMgr *)&v6[9].aCollider.field_64);
    v82 = (*((int (__fastcall **)(StateBase *))v81->vtable + 2))(v81);
    v83 = (*((int (**)(void))stru_60C8E1CC._.vtable + 2))();
    v84 = v82 == v83;
    if ( v82 != v83 )
      v84 = (v6[4].aCollider.field_6C & 1) == 0;
    if ( !v84 )
      goto LABEL_62;
  }
  ActiveCollider_getCenterX(a1);
  v52 = v51;
  ActiveCollider_getCenterX(a2);
  sub_60063CC8(v6, v52 > v53);
LABEL_64:
  a2->field_6E |= 2u;
LABEL_65:
  if ( Actor__getProfileId(&v6->_) == 441 )
  {
    v54 = owner[23].aCollider.field_F0;
    if ( v54 <= 3 )
    {
      v55 = PlayerMgr_instance + 4 * v54;
      v56 = *(_DWORD *)(v55 + 32);
      if ( v56 )
      {
        if ( sub_607B8A50(*(_DWORD *)(v55 + 32), owner) == 1 )
        {
          if ( ((unsigned int)dword_60C7B430 & ~(1611208740 << v57) & 1) == 0 && _cxa_guard_acquire(dword_60C7B430) )
          {
            Enemy_RTTI = (int)&off_60BC00C8;
            _cxa_guard_release(dword_60C7B430);
          }
          if ( (*(int (__fastcall **)(StageActor *, int *))v6->_.vtable)(v6, &Enemy_RTTI) == 1 )
          {
            Enemy__collisionCallback(a2, (ActiveCollider *)(v56 + 188));
            goto LABEL_31;
          }
        }
      }
    }
  }
}
