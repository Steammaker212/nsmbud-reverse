/* sub_603CA640
 * address: 0x603CA640   size: 1144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603CA640(int a1)
{
  int v2; // r5
  int v3; // r0
  unsigned int *v4; // r7
  StateBase *CurrentState; // r0
  int v6; // r6
  float v7; // s0
  float v8; // s2
  float v9; // s4
  float v10; // s2
  signed int v11; // r3
  _DWORD *v12; // r1
  int v13; // r2
  int v14; // r2
  StateBase *v15; // r0
  float v16; // s0
  float v17; // s2
  float v18; // s4
  float v19; // s2
  signed int v20; // r3
  _DWORD *v21; // r1
  int v22; // r2
  bool v23; // zf
  int v24; // r2
  int *v25; // r6
  int v26; // r5
  int v27; // r0
  int *v28; // r7
  int v29; // r0
  int v30; // r2
  unsigned int U32; // r0
  int v32; // r0
  int v33; // r1
  float v34; // s0
  float *v35; // r0
  float v36; // s2
  float v37; // s0
  StateBase *v39; // r0
  int v40; // r6

  v2 = sub_603CAADC();
  v4 = (unsigned int *)(a1 + 11720);
  v3 = FIELD_U32(a1, 11720);
  if ( (v3 & 8) == 0 )
  {
    if ( v2 )
      goto LABEL_20;
    CurrentState = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(CurrentState, 0x0) + 2))(CurrentState);
    goto LABEL_17;
  }
  if ( v2 != 1 )
  {
    *v4 = v3 & 0xFFFFFFF7;
    v15 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v6 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v15, 0x0) + 2))(v15);
LABEL_17:
    if ( v6 != (*(int (**)(void))(dword_60C98A34 + 8))() )
    {
LABEL_27:
      ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6308));
      if ( FIELD_U32(a1, 11868) == -1 )
      {
        sub_603CC2B0(a1);
      }
      else
      {
        v21 = (_DWORD *)(a1 + 11876);
        v22 = FIELD_U32(a1, 11876);
        if ( !v22 )
          goto LABEL_33;
        v24 = v22 - 1;
        v23 = v24 == 0;
        *v21 = v24;
        if ( v24 )
          v23 = (v2 ^ 1) == 1;
        if ( v23 )
        {
LABEL_33:
          FIELD_U32(a1, 11868) = -1;
          *v21 = 0;
          sub_603CBC1C((_DWORD *)a1, FIELD_U32(a1, 11872), -1, v20);
        }
      }
      StateMgr__execute((StateMgr *)(a1 + 6084));
      goto LABEL_36;
    }
LABEL_20:
    v16 = -1.0;
    v17 = FIELD_F32(a1, 11892);
    v18 = -1.0;
    if ( v17 >= -1.0 )
    {
      v18 = FIELD_F32(a1, 11892);
      if ( v17 > 1.0 )
        v18 = 1.0;
    }
    FIELD_F32(a1, 108) = v18 + FIELD_F32(a1, 108);
    v19 = FIELD_F32(a1, 11896);
    if ( v19 >= -1.0 )
    {
      v16 = FIELD_F32(a1, 11896);
      if ( v19 > 1.0 )
        v16 = 1.0;
    }
    FIELD_F32(a1, 112) = v16 + FIELD_F32(a1, 112);
    sub_603CC07C(a1);
    goto LABEL_27;
  }
  if ( !FIELD_U32(a1, 6356) )
  {
    *v4 = v3 & 0xFFFFFFF7;
    goto LABEL_20;
  }
  v7 = -1.0;
  v8 = FIELD_F32(a1, 11892);
  v9 = -1.0;
  if ( v8 >= -1.0 )
  {
    v9 = FIELD_F32(a1, 11892);
    if ( v8 > 1.0 )
      v9 = 1.0;
  }
  FIELD_F32(a1, 108) = v9 + FIELD_F32(a1, 108);
  v10 = FIELD_F32(a1, 11896);
  if ( v10 >= -1.0 )
  {
    v7 = FIELD_F32(a1, 11896);
    if ( v10 > 1.0 )
      v7 = 1.0;
  }
  FIELD_F32(a1, 112) = v7 + FIELD_F32(a1, 112);
  sub_603CC07C(a1);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6308));
  if ( FIELD_U32(a1, 11868) == -1 )
  {
    sub_603CC2B0(a1);
  }
  else
  {
    v12 = (_DWORD *)(a1 + 11876);
    v13 = FIELD_U32(a1, 11876);
    if ( !v13 || (v14 = v13 - 1, (*v12 = v14) == 0) )
    {
      FIELD_U32(a1, 11868) = -1;
      *v12 = 0;
      sub_603CBC1C((_DWORD *)a1, FIELD_U32(a1, 11872), -1, v11);
    }
  }
  if ( FIELD_U8(a1, 11728) )
  {
    v39 = StateMgr__getCurrentState((StateMgr *)(a1 + 6084));
    v40 = (*((int (__fastcall **)(StateBase *))FIELD_U32(v39, 0x0) + 2))(v39);
    if ( v40 == (*(int (**)(void))(dword_60C9896C + 8))() && (sub_603CACBC(a1, 1, 15, 0) & 1) != 0 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60C9892C);
      *v4 &= ~8u;
    }
  }
LABEL_36:
  sub_603CB380(a1, v2);
  ((void (__fastcall *)(int, int))loc_603CB5E8)(a1, v2);
  ((void (__fastcall *)(int, _DWORD))loc_603CB7DC)(a1, 0);
  sub_602A33AC((_BYTE *)a1);
  v25 = (int *)(a1 + 6300);
  if ( v2 == 1 )
  {
    v26 = *v25;
    v28 = (int *)(a1 + 11760);
    v27 = FIELD_U32(a1, 11760);
    if ( !v27 || (v29 = v27 - 1, v30 = 0, (*v28 = v29) == 0) )
    {
      U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
      v30 = 3;
      v32 = (U32 >> 27) | 0x40;
      if ( !v26 )
        v30 = 1;
      *v28 = v32;
    }
    if ( FIELD_U8(dword_60C9CF0C, 1361) )
      v30 += 10;
    if ( v30 )
    {
      v33 = 3;
      if ( !v26 )
        v33 = 1;
      sub_6071689C(TileMgr_instance, v33, (unsigned __int8)v30, 0);
    }
  }
  if ( (char *)&unk_60BF75D4 + 44 * *v25 )
  {
    v34 = FIELD_F32(a1, 144);
    v35 = (float *)((char *)&unk_60BF75D4 + 44 * *v25);
    v36 = v34 * v35[2];
    v37 = v34 * v35[3];
    FIELD_F32(a1, 312) = v36;
    FIELD_F32(a1, 316) = v37;
  }
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
