/* MovementHandler_findMovementController
 * address: 0x606AFCE8   size: 2944   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall MovementHandler_findMovementController(MovementHandler *this)
{
  int typeMask; // r0
  bool v3; // r9
  int v4; // r6
  int v5; // r4
  int v6; // r0
  char v7; // r12
  int v8; // r11
  char v9; // r12
  int movementId; // r4
  int v11; // r7
  int v12; // r0
  int v14; // r6
  int v15; // r4
  int v16; // r0
  char v17; // r12
  int v18; // r6
  int v19; // r4
  int v20; // r0
  char v21; // r12
  int v22; // r7
  char v23; // r12
  int v24; // s4
  int v25; // s2
  int v26; // r7
  char v27; // r12
  int v28; // r6
  int v29; // r4
  int v30; // r0
  char v31; // r12
  int v32; // r6
  int v33; // r4
  int v34; // r0
  char v35; // r12
  int v36; // r7
  char v37; // r12
  int v38; // r0
  int v39; // r4
  int v40; // r7
  int i; // r0
  char v42; // r12
  int MovementController_helper_6B37CC; // r0
  int v44; // r5
  int v45; // r0
  int v46; // r6
  int v47; // r4
  int v48; // r0
  char v49; // r12
  int v50; // r1
  int v51; // r7
  char v52; // r12
  float v53; // s18
  float v54; // s16

  typeMask = FIELD_U32(this, 0x48);
  if ( (typeMask & 1) != 0 )
  {
    v8 = sub_606D4384(&FIELD_U32(this, 0x5C), (unsigned __int8)FIELD_U8(this, 0x4C));
    if ( !v8 )
      return 0;
    if ( ((unsigned int)&dword_60C7B364 & ~(1617624568 << v9) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    v3 = 0;
    if ( (**(int (__fastcall ***)(int, int *))v8)(v8, &StageActor_RTTI) != 1 )
      goto LABEL_29;
    MovementHandler_findMovementController_helper(&FIELD_F32(this, 0x0), (float *)v8);
    goto LABEL_22;
  }
  if ( (typeMask & 2) != 0 )
  {
    movementId = (unsigned __int8)FIELD_U8(this, 0x4C);
    v11 = FIELD_U32(ActorMgr__instance, 27180);
    v12 = sub_60008598(ActorMgr__instance, 51, FIELD_U32(ActorMgr__instance, 27172));
    if ( v12 != v11 )
    {
      while ( 1 )
      {
        v8 = *(_DWORD *)v12;
        if ( *(unsigned __int8 *)(*(_DWORD *)v12 + 28) == movementId )
          goto LABEL_27;
        v12 = sub_60008598(ActorMgr__instance, 51, v12 + 4);
        if ( v12 == v11 )
          goto LABEL_26;
      }
    }
    goto LABEL_26;
  }
  if ( (typeMask & 4) != 0 )
  {
    v14 = (unsigned __int8)FIELD_U8(this, 0x4C);
    v15 = FIELD_U32(ActorMgr__instance, 27180);
    v16 = sub_60008598(ActorMgr__instance, 13, FIELD_U32(ActorMgr__instance, 27172));
    v3 = 0;
    if ( v16 != v15 )
    {
      while ( 1 )
      {
        v8 = *(_DWORD *)v16;
        if ( *(unsigned __int8 *)(*(_DWORD *)v16 + 28) == v14 )
          break;
        v16 = sub_60008598(ActorMgr__instance, 13, v16 + 4);
        if ( v16 == v15 )
          return v3;
      }
      if ( v8 )
      {
        if ( ((unsigned int)&dword_60C7B364 & ~(1617625132 << v17) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        v22 = (**(int (__fastcall ***)(int, int *))v8)(v8, &StageActor_RTTI);
        if ( v22 )
          v22 = v8;
        if ( ((unsigned int)&dword_60C8DECC & ~(1617625244 << v23) & 1) == 0 && _cxa_guard_acquire(&dword_60C8DECC) )
        {
          dword_60C8DEC8 = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60C8DECC);
        }
        v3 = 1;
        if ( v22 && (**(int (__fastcall ***)(int, int *))v22)(v22, &dword_60C8DEC8) == 1 )
        {
          *(float *)&v24 = FIELD_F32(this, 0x14) - FIELD_F32(v22, 6108);
          *(float *)&v25 = FIELD_F32(this, 0x10) - FIELD_F32(v22, 6104);
          *(float *)&FIELD_U32(this, 0x18) = FIELD_F32(this, 0xC) - FIELD_F32(v22, 6100);
          FIELD_U32(this, 0x1C) = v25;
          FIELD_U32(this, 0x20) = v24;
          goto LABEL_30;
        }
        goto LABEL_29;
      }
    }
    return v3;
  }
  if ( (typeMask & 8) != 0 )
  {
    v18 = (unsigned __int8)FIELD_U8(this, 0x4C);
    v19 = FIELD_U32(ActorMgr__instance, 27180);
    v20 = sub_60008598(ActorMgr__instance, 11, FIELD_U32(ActorMgr__instance, 27172));
    v3 = 0;
    if ( v20 != v19 )
    {
      while ( 1 )
      {
        v8 = *(_DWORD *)v20;
        if ( *(unsigned __int8 *)(*(_DWORD *)v20 + 28) == v18 )
          break;
        v20 = sub_60008598(ActorMgr__instance, 11, v20 + 4);
        if ( v20 == v19 )
          return v3;
      }
      if ( v8 )
      {
        if ( ((unsigned int)&dword_60C7B364 & ~(1617625456 << v21) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        v26 = (**(int (__fastcall ***)(int, int *))v8)(v8, &StageActor_RTTI);
        if ( v26 )
          v26 = v8;
        if ( ((unsigned int)&dword_60CB7458 & ~(1617625568 << v27) & 1) == 0 && _cxa_guard_acquire(&dword_60CB7458) )
        {
          dword_60CB7454 = (int)&off_60BC00E0;
          _cxa_guard_release(&dword_60CB7458);
        }
        v3 = 1;
        if ( v26 && (**(int (__fastcall ***)(int, int *))v26)(v26, &dword_60CB7454) == 1 )
        {
          FIELD_U32(this, 0x40) = FIELD_U8(v26, 6321);
          goto LABEL_30;
        }
        goto LABEL_29;
      }
    }
    return v3;
  }
  v3 = 0;
  if ( (typeMask & 0x10) != 0 )
    return v3;
  if ( (typeMask & 0x20) != 0 )
  {
    v28 = (unsigned __int8)FIELD_U8(this, 0x4C);
    v29 = FIELD_U32(ActorMgr__instance, 27180);
    v30 = sub_60008598(ActorMgr__instance, 197, FIELD_U32(ActorMgr__instance, 27172));
    if ( v30 == v29 )
      return v3;
    while ( 1 )
    {
      v8 = *(_DWORD *)v30;
      if ( v28 == *(unsigned __int8 *)(*(_DWORD *)v30 + 7336) )
        break;
      v30 = sub_60008598(ActorMgr__instance, 197, v30 + 4);
      if ( v30 == v29 )
        return v3;
    }
    if ( !v8 )
      return v3;
    if ( ((unsigned int)&dword_60C7B364 & ~(1617625960 << v31) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    v36 = (**(int (__fastcall ***)(int, int *))v8)(v8, &StageActor_RTTI);
    if ( v36 )
      v36 = v8;
    if ( ((unsigned int)&dword_60CB6B7C & ~(1617626072 << v37) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6B7C) )
    {
      dword_60CB6B78 = (int)&off_60BCFCD8;
      _cxa_guard_release(&dword_60CB6B7C);
    }
    v3 = 1;
    if ( !v36 )
      goto LABEL_29;
    v38 = (**(int (__fastcall ***)(int, int *))v36)(v36, &dword_60CB6B78);
LABEL_101:
    if ( v38 == 1 )
    {
      FIELD_U32(this, 0x18) = FIELD_U32(v36, 7164);
      FIELD_U32(this, 0x1C) = FIELD_U32(v36, 7168);
      FIELD_U32(this, 0x20) = FIELD_U32(v36, 7172);
      goto LABEL_30;
    }
LABEL_29:
    if ( !v8 )
      return v3;
    goto LABEL_30;
  }
  if ( (typeMask & 0x40) != 0 )
  {
    v32 = (unsigned __int8)FIELD_U8(this, 0x4C);
    v33 = FIELD_U32(ActorMgr__instance, 27180);
    v34 = sub_60008598(ActorMgr__instance, 198, FIELD_U32(ActorMgr__instance, 27172));
    if ( v34 == v33 )
      return v3;
    while ( 1 )
    {
      v8 = *(_DWORD *)v34;
      if ( v32 == *(unsigned __int8 *)(*(_DWORD *)v34 + 7648) )
        break;
      v34 = sub_60008598(ActorMgr__instance, 198, v34 + 4);
      if ( v34 == v33 )
        return v3;
    }
    if ( !v8 )
      return v3;
    if ( ((unsigned int)&dword_60C7B364 & ~(1617626308 << v35) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    v36 = (**(int (__fastcall ***)(int, int *))v8)(v8, &StageActor_RTTI);
    if ( v36 )
      v36 = v8;
    if ( ((unsigned int)&dword_60CB6BD0 & ~(1617626420 << v42) & 1) == 0 && _cxa_guard_acquire(&dword_60CB6BD0) )
    {
      dword_60CB6BCC = (int)&off_60C14ED0;
      _cxa_guard_release(&dword_60CB6BD0);
    }
    v3 = 1;
    if ( !v36 )
      goto LABEL_29;
    v38 = (**(int (__fastcall ***)(int, int *))v36)(v36, &dword_60CB6BCC);
    goto LABEL_101;
  }
  if ( (typeMask & 0x80) != 0 )
  {
    v39 = (unsigned __int8)FIELD_U8(this, 0x4C);
    v40 = FIELD_U32(ActorMgr__instance, 27180);
    for ( i = sub_60008598(ActorMgr__instance, 129, FIELD_U32(ActorMgr__instance, 27172));
          i != v40;
          i = sub_60008598(ActorMgr__instance, 129, i + 4) )
    {
      v8 = *(_DWORD *)i;
      if ( *(unsigned __int8 *)(*(_DWORD *)i + 8265) == v39 )
        goto LABEL_27;
    }
LABEL_26:
    v8 = 0;
LABEL_27:
    v3 = v8;
    if ( v8 )
      v3 = 1;
    goto LABEL_29;
  }
  if ( (typeMask & 0x100) != 0 )
  {
    MovementController_helper_6B37CC = MovementHandler_findMovementController_helper_6B37CC(
                                         dword_60CBA43C,
                                         (unsigned __int8)FIELD_U8(this, 0x4C));
    v44 = MovementController_helper_6B37CC;
    if ( MovementController_helper_6B37CC != -1 )
    {
      v45 = sub_606B3830(dword_60CBA43C, MovementController_helper_6B37CC);
      MovementHandler_findMovementController_helper_6B1188(this, v45);
      FIELD_U32(this, 0x9C) = v44;
      return 1;
    }
    return v3;
  }
  if ( (typeMask & 0x200) != 0 )
  {
    v46 = (unsigned __int8)FIELD_U8(this, 0x4C);
    v47 = FIELD_U32(ActorMgr__instance, 27180);
    v48 = sub_60008598(ActorMgr__instance, 53, FIELD_U32(ActorMgr__instance, 27172));
    if ( v48 == v47 )
      return v3;
    while ( 1 )
    {
      v8 = *(_DWORD *)v48;
      if ( *(unsigned __int8 *)(*(_DWORD *)v48 + 28) == v46 )
        break;
      v48 = sub_60008598(ActorMgr__instance, 53, v48 + 4);
      if ( v48 == v47 )
        return v3;
    }
    if ( !v8 )
      return v3;
    if ( ((unsigned int)&dword_60C7B364 & ~(1617626788 << v49) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
    {
      StageActor_RTTI = (int)&off_60BC0098;
      _cxa_guard_release(&dword_60C7B364);
    }
    v50 = (**(int (__fastcall ***)(int, int *))v8)(v8, &StageActor_RTTI);
    if ( v50 )
      v50 = v8;
    MovementHandler_findMovementController_helper_6B12C4(this, v50);
LABEL_22:
    v3 = 1;
    goto LABEL_30;
  }
  if ( (typeMask & 0x400) != 0 )
  {
    v4 = (unsigned __int8)FIELD_U8(this, 0x4C);
    v5 = FIELD_U32(ActorMgr__instance, 27180);
    v6 = sub_60008598(ActorMgr__instance, 77, FIELD_U32(ActorMgr__instance, 27172));
    if ( v6 != v5 )
    {
      while ( 1 )
      {
        v8 = *(_DWORD *)v6;
        if ( (*(_BYTE *)(*(_DWORD *)v6 + 23) & 0xF) == v4 )
          break;
        v6 = sub_60008598(ActorMgr__instance, 77, v6 + 4);
        if ( v6 == v5 )
          return v3;
      }
      if ( v8 )
      {
        if ( ((unsigned int)&dword_60C7B364 & ~(1617626920 << v7) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
        {
          StageActor_RTTI = (int)&off_60BC0098;
          _cxa_guard_release(&dword_60C7B364);
        }
        v51 = (**(int (__fastcall ***)(int, int *))v8)(v8, &StageActor_RTTI);
        if ( v51 )
          v51 = v8;
        if ( ((unsigned int)&dword_60CB4234 & ~(1617627032 << v52) & 1) == 0 && _cxa_guard_acquire(&dword_60CB4234) )
        {
          dword_60CB4230 = (int)&off_60C126F8;
          _cxa_guard_release(&dword_60CB4234);
        }
        v3 = 1;
        if ( v51 && (**(int (__fastcall ***)(int, int *))v51)(v51, &dword_60CB4230) == 1 )
        {
          v53 = FIELD_F32(v51, 6508) - FIELD_F32(this, 0xC);
          v54 = FIELD_F32(v51, 6512) - FIELD_F32(this, 0x10);
          FIELD_U32(this, 0x78) = sub_6000F7B8(-v54, -v53);
          *(float *)&FIELD_U32(this, 0x70) = sqrtf((float)(v54 * v54) + (float)(v53 * v53));
LABEL_30:
          if ( (FIELD_U32(this, 0x48) & 0x100) == 0 )
            FIELD_U32(this, 0x38) = FIELD_U32(v8, 8);
          return v3;
        }
        goto LABEL_29;
      }
    }
  }
  return v3;
}
