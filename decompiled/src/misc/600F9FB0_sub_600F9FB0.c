/* sub_600F9FB0
 * address: 0x600F9FB0   size: 1292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600F9FB0(int a1)
{
  int v2; // r5
  char v3; // r12
  float *v4; // r6
  int v5; // r4
  int v6; // r0
  signed int v7; // r1
  int *v8; // r10
  int v9; // r0
  int v10; // r0
  int v11; // r0
  float v12; // s16
  float v13; // r4
  float v14; // r7
  _BYTE *v15; // r0
  _DWORD *v16; // r0
  int v17; // r5
  float v18; // s16
  signed int v19; // r5
  _BYTE *v20; // r4
  int v21; // r8
  float v22; // s16
  signed int v23; // r0
  _BOOL4 v24; // r1
  bool v25; // cc
  int v26; // r0
  int v27; // r1
  unsigned int v28; // r0
  int v29; // r6
  int v30; // r0
  int v32; // [sp+4h] [bp-6Ch]
  ActorBuildInfo v33[2]; // [sp+8h] [bp-68h] BYREF

  v2 = *(_DWORD *)sub_60008598(ActorMgr__instance, 736, FIELD_U32(ActorMgr__instance, 27172));
  if ( ((unsigned int)&dword_60C7B364 & ~(1611636732 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C7B364) )
  {
    StageActor_RTTI = (int)&off_60BC0098;
    _cxa_guard_release(&dword_60C7B364);
  }
  v4 = 0;
  if ( v2 && (**(int (__fastcall ***)(int, int *))v2)(v2, &StageActor_RTTI) == 1 )
  {
    v4 = (float *)v2;
    FIELD_U32(a1, 6108) = FIELD_U32(v2, 8);
  }
  v5 = 0;
  FIELD_U32(PlayerMgr_instance, 140) = -1;
  FIELD_U32(dword_60C99D88, 32) = 1;
  sub_603FBE30(dword_60C99DD4, 0);
  v6 = dword_60C99DD4;
  FIELD_U32(dword_60C99DD4, 1376) |= 2u;
  v7 = FIELD_U32(v6, 1384);
  FIELD_U32(a1, 6112) = v7;
  v8 = (int *)(a1 + 6112);
  if ( v7 == -1 || v7 > 3 || !PlayerMgr_hasPlayer(PlayerMgr_instance, v7) )
  {
    if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 0) == 1
      || (v5 = 1, PlayerMgr_hasPlayer(PlayerMgr_instance, 1u))
      || (v5 = 2, PlayerMgr_hasPlayer(PlayerMgr_instance, 2u)) )
    {
      *v8 = v5;
    }
    else if ( PlayerMgr_hasPlayer(PlayerMgr_instance, 3u) )
    {
      *v8 = 3;
    }
  }
  v9 = *v8;
  if ( (unsigned int)*v8 >= 4 )
    v9 = 0;
  v10 = *(_DWORD *)(PlayerMgr_instance + 4 * v9 + 32);
  if ( v10 && sub_6075EDF8(v10) == 1 )
  {
    v11 = sub_60789DBC(PlayerMgr_instance);
    FIELD_U8(a1, 6104) = v11 < 2;
    if ( v11 > 1 )
    {
      sub_600FA870(a1);
    }
    else if ( FIELD_U8(dword_60CC6D8C, 17) )
    {
      sub_600FA540(a1);
    }
    else
    {
      sub_600FA6D8(a1);
    }
  }
  v12 = v4[27];
  v13 = v4[28];
  v14 = v4[29];
  memset(v33, 0, 44);
  v33[0].profile = Profile__get(0x2E1u);
  v33[0].position.x = v12 + 64.0;
  v33[0].position.y = v13;
  v33[0].position.z = v14;
  v15 = ActorMgr__create((void *)ActorMgr__instance, v33, 0);
  if ( v15 )
    FIELD_U32(a1, 6100) = *((_DWORD *)v15 + 2);
  v16 = (_DWORD *)PlayerMgr_instance;
  v17 = FIELD_U32(PlayerMgr_instance, 32);
  v18 = FIELD_F32(dword_60CC6484, 112);
  if ( v17 )
  {
    if ( sub_6075EDF8(FIELD_U32(PlayerMgr_instance, 32)) )
      goto LABEL_39;
    v16 = (_DWORD *)PlayerMgr_instance;
  }
  v17 = v16[9];
  if ( v17 )
  {
    if ( sub_6075EDF8(v16[9]) )
      goto LABEL_39;
    v16 = (_DWORD *)PlayerMgr_instance;
  }
  v17 = v16[10];
  if ( !v17 )
  {
LABEL_37:
    v17 = v16[11];
    if ( !v17 || !sub_6075EDF8(v16[11]) )
      goto LABEL_40;
    goto LABEL_39;
  }
  if ( !sub_6075EDF8(v16[10]) )
  {
    v16 = (_DWORD *)PlayerMgr_instance;
    goto LABEL_37;
  }
LABEL_39:
  FIELD_F32(v17, 108) = v18 + -48.0;
LABEL_40:
  v19 = 0;
  v20 = (_BYTE *)(a1 + 6104);
  v32 = a1;
  v21 = 0;
  v22 = FIELD_F32(dword_60CC6484, 112) + -16.0;
  do
  {
    v29 = *(_DWORD *)(PlayerMgr_instance + 4 * v19 + 32);
    if ( !v29 )
      goto LABEL_54;
    (*(void (__fastcall **)(_DWORD, int, int))(*(_DWORD *)v29 + 144))(
      *(_DWORD *)(PlayerMgr_instance + 4 * v19 + 32),
      1,
      1);
    FIELD_U32(v29, 1236) |= 2u;
    if ( v19 == *v8 )
    {
LABEL_49:
      FIELD_F32(v29, 108) = v22;
      goto LABEL_55;
    }
    if ( !*v20
      && PlayerMgr_hasPlayer(PlayerMgr_instance, v19) == 1
      && (v30 = *(_DWORD *)(PlayerMgr_instance + 4 * v19 + 32)) != 0
      && sub_6075EDF8(v30) != 1 )
    {
      v23 = *v8;
      if ( v19 == *v8 )
        goto LABEL_49;
      v24 = v23 > v19;
      v25 = v23 <= v19;
      v26 = 0;
      v27 = v24 - v21;
      if ( v25 )
        v26 = -1;
      v28 = v19 + v26 - v21;
      if ( v28 >= 3 )
        v28 = 0;
      FIELD_F32(v29, 108) = v22 + (float)((float)(v19 + v27) * -24.0);
      *(_DWORD *)(v32 + 4 * v28 + 6156) = v19;
    }
    else
    {
LABEL_54:
      ++v21;
    }
LABEL_55:
    ++v19;
  }
  while ( v19 != 4 );
  StateMgr__changeState((StateMgr *)(v32 + 6084), (StateBase *)&dword_60C85C60);
  return 1;
}
