/* sub_602ECD30
 * address: 0x602ECD30   size: 980   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602ECD30(int a1)
{
  int v3; // r0
  int v4; // r5
  int v5; // t1
  unsigned int v6; // r7
  int ResArchiveById; // r0
  int v8; // r8
  int v9; // r6
  unsigned int v10; // r2
  int v11; // r0
  float v12; // s10
  float v13; // s6
  float v14; // s2
  StateMgr *v15; // r0
  int *v16; // r1
  int v18; // r0
  bool v19; // zf
  float v20; // s0
  float v21; // r0
  int v22; // [sp+8h] [bp-30h] BYREF
  float v23; // [sp+Ch] [bp-2Ch] BYREF
  float v24; // [sp+10h] [bp-28h]
  int v25; // [sp+14h] [bp-24h]

  FIELD_U32(a1, 572) = 0;
  FIELD_U32(a1, 576) = 0;
  FIELD_U32(a1, 580) = 0;
  v3 = FIELD_U32(a1, 116);
  FIELD_U32(a1, 7420) = v3;
  v5 = FIELD_U32(a1, 108);
  v4 = a1 + 108;
  FIELD_U32(v4, 7276) = v5;
  FIELD_U32(v4, 7280) = FIELD_U32(v4, 4);
  FIELD_U32(v4, 7284) = v3;
  FIELD_U32(v4, 7288) = FIELD_U32(v4, 56);
  v6 = *(_DWORD *)(v4 - 88);
  FIELD_U8(v4, 7425) = v6 & 7;
  ResArchiveById = Profile__getResArchiveById(*(Profile **)(v4 - 96), 0);
  sub_602F27AC(v4 + 7240, ResArchiveById, v6 & 7);
  v8 = HIBYTE(v6) & 0xF;
  FIELD_U8(v4, 7426) = v8;
  v9 = (*(_DWORD *)(v4 - 88) >> 28) & 1;
  FIELD_U8(v4, 7427) = (*(_DWORD *)(v4 - 88) & 0x10000000) != 0;
  if ( v9 )
  {
    FIELD_U32(a1, 7496) = a1 + 7460;
    FIELD_U32(a1, 7500) = &unk_60C92504;
  }
  v10 = FIELD_U32(a1, 7440) & 0xFFFFFFFC | 1;
  if ( (v6 & 0x1000) == 0 )
    v10 = FIELD_U32(a1, 7440) | 3;
  FIELD_U32(a1, 7440) = v10;
  FIELD_U32(a1, 136) = -1061158912;
  v11 = FIELD_U32(a1, 56);
  v12 = FIELD_F32(a1, 116);
  v13 = FIELD_F32(v11, 116);
  v14 = FIELD_F32(v11, 112) - FIELD_F32(a1, 112);
  FIELD_F32(a1, 7372) = FIELD_F32(v11, 108) - FIELD_F32(a1, 108);
  FIELD_F32(a1, 7376) = v14;
  FIELD_F32(a1, 7380) = v13 - v12;
  FIELD_U32(a1, 7368) = v11 + 6152;
  if ( (FIELD_U8(v11, 6148) & 0x10) != 0 || Actor__getProfileId((Actor *)v11) == 459 )
    FIELD_U8(a1, 7529) = 1;
  FIELD_U8(a1, 6780) = 0;
  ActiveCollider__init((ActiveCollider *)(a1 + 188), (StageActor *)a1, (ActiveColliderInfo *)&unk_60BE71DC, 0);
  if ( (HIBYTE(v6) & 0xB | 4) == 5 )
  {
    v15 = (StateMgr *)(a1 + 6084);
    v16 = &dword_60C923C4;
  }
  else
  {
    switch ( HIBYTE(v6) & 0xF )
    {
      case 2:
        v15 = (StateMgr *)(a1 + 6084);
        if ( v9 )
          v16 = &dword_60C92564;
        else
          v16 = &dword_60C92544;
        break;
      case 3:
        v15 = (StateMgr *)(a1 + 6084);
        v16 = (int *)&stru_60C92584;
        break;
      case 4:
        ((void (__fastcall *)(int *, int, int, int, _DWORD))physics_21893E8)(
          &v22,
          a1 + 7432,
          a1 + 7504,
          v4,
          FIELD_U8(a1, 86));
        v18 = v22;
        v19 = v22 == 5;
        FIELD_U32(a1, 7520) = v22;
        if ( v19 )
        {
          FIELD_U32(a1, 124) = -1052770304;
          v16 = (int *)&unk_60C92624;
          v15 = (StateMgr *)(a1 + 6084);
        }
        else if ( v18 == 4 )
        {
          FIELD_U32(a1, 124) = -1052770304;
          v16 = (int *)&unk_60C92604;
          v15 = (StateMgr *)(a1 + 6084);
        }
        else if ( v18 == 3 )
        {
          FIELD_U32(a1, 124) = -1052770304;
          v20 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
          v23 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
          v24 = v20;
          sub_602F32F8(a1 + 6784, &v23, 7, 0);
          v21 = FIELD_F32(a1, 7432);
          v23 = FIELD_F32(a1, 108);
          v24 = v21;
          v25 = 1170939904;
          (*(void (__fastcall **)(int, float *))(*(_DWORD *)a1 + 112))(a1, &v23);
          v15 = (StateMgr *)(a1 + 6084);
          v16 = (int *)&unk_60C925E4;
        }
        else
        {
          v15 = (StateMgr *)(a1 + 6084);
          v16 = (int *)&stru_60C92484;
        }
        break;
      case 6:
        v15 = (StateMgr *)(a1 + 6084);
        v16 = &dword_60C923E4;
        break;
      case 8:
        v15 = (StateMgr *)(a1 + 6084);
        v16 = &dword_60C92404;
        break;
      default:
        v15 = (StateMgr *)(a1 + 6084);
        if ( v8 == 7 )
          v16 = &dword_60C92424;
        else
          v16 = (int *)&stru_60C925A4;
        break;
    }
  }
  StateMgr__changeState(v15, (StateBase *)v16);
  return 1;
}
