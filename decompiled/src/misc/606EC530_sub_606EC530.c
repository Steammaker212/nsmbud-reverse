/* sub_606EC530
 * address: 0x606EC530   size: 1536   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_606EC530(int a1)
{
  int v2; // r5
  float v3; // s0
  float v4; // s6
  float v5; // s2
  float v6; // s8
  float v7; // s4
  float v8; // s10
  float v9; // s6
  __int64 v10; // d17
  float v11; // s2
  float v12; // s8
  float v13; // s0
  float v14; // s10
  float v15; // s4
  __int64 v16; // d17
  __int64 v17; // d17
  _BYTE *v18; // r10
  int *i; // r6
  int v20; // r0
  bool v21; // zf
  int *v22; // r6
  int v23; // r0
  bool v24; // zf
  char v25; // r7
  _DWORD *v26; // r6
  int v27; // r5
  _DWORD *v28; // r6
  _BYTE *v29; // r6
  int v30; // r5
  int v31; // r5
  int v32; // r5
  int v33; // r5
  float v34; // s0
  float v35; // s2
  float v36; // s4
  float v37; // s6
  float v38; // s0
  char v40; // [sp+7h] [bp-61h] BYREF
  __int64 v41; // [sp+8h] [bp-60h] BYREF
  __int64 v42; // [sp+10h] [bp-58h]
  __int64 v43; // [sp+18h] [bp-50h]
  __int64 v44; // [sp+20h] [bp-48h]
  __int64 v45; // [sp+28h] [bp-40h]
  __int64 v46; // [sp+30h] [bp-38h]

  v2 = a1 + 7780;
  ((void (__fastcall *)(int, int))loc_602A3F7C)(a1 + 7780, 8);
  v3 = FIELD_F32(a1, 572);
  v4 = FIELD_F32(a1, 108);
  v5 = FIELD_F32(a1, 576);
  v6 = FIELD_F32(a1, 112);
  v7 = FIELD_F32(a1, 580);
  v8 = FIELD_F32(a1, 116);
  v41 = 1065353216;
  LODWORD(v42) = 0;
  v43 = 0x3F80000000000000LL;
  LODWORD(v44) = 0;
  v45 = 0;
  LODWORD(v46) = 1065353216;
  *((float *)&v42 + 1) = v4 + v3;
  *((float *)&v44 + 1) = v6 + v5;
  *((float *)&v46 + 1) = v8 + v7;
  v9 = FIELD_F32(a1, 144);
  v10 = v42;
  v11 = FIELD_F32(a1, 7788);
  v12 = FIELD_F32(a1, 148);
  v13 = FIELD_F32(a1, 7792);
  v14 = FIELD_F32(a1, 152);
  v15 = FIELD_F32(a1, 7784) - v9;
  FIELD_U64(a1, 6108) = 1065353216;
  FIELD_U64(a1, 6116) = v10;
  v16 = v44;
  FIELD_U64(a1, 6124) = v43;
  FIELD_U64(a1, 6132) = v16;
  v17 = v46;
  FIELD_U64(a1, 6140) = v45;
  FIELD_U64(a1, 6148) = v17;
  FIELD_F32(a1, 6156) = v9 + (float)(v15 * 0.5);
  FIELD_F32(a1, 6160) = v12 + (float)((float)(v11 - v12) * 0.5);
  FIELD_F32(a1, 6164) = v14 + (float)((float)(v13 - v14) * 0.5);
  skl_root_ref_6ED2F0(a1 + 6100);
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v18 = (_BYTE *)(a1 + 7472);
  if ( !FIELD_U8(a1, 7472) )
  {
    v22 = *(int **)(a1 + 6616);
    if ( !v22 )
      goto LABEL_23;
    while ( 1 )
    {
      v23 = *v22;
      v24 = *v22 == 0;
      if ( *v22 )
      {
        v23 = FIELD_U32(v23, 2196);
        v24 = v23 == 0;
      }
      if ( !v24 )
      {
        if ( FIELD_U8(v23, 533) )
        {
          if ( FIELD_U8(v23, 533) == 3 )
            goto LABEL_22;
        }
        else if ( Actor__getProfileId((Actor *)v23) == 565 )
        {
LABEL_22:
          sub_602A3EFC(v2, 32, 0.02);
          goto LABEL_23;
        }
      }
      v22 = (int *)v22[1];
      if ( !v22 )
        goto LABEL_23;
    }
  }
  for ( i = *(int **)(a1 + 7272); i; i = (int *)i[1] )
  {
    v20 = *i;
    v21 = *i == 0;
    if ( *i )
    {
      v20 = FIELD_U32(v20, 2196);
      v21 = v20 == 0;
    }
    if ( !v21 )
    {
      if ( FIELD_U8(v20, 533) )
      {
        if ( FIELD_U8(v20, 533) == 3 )
          goto LABEL_22;
      }
      else if ( Actor__getProfileId((Actor *)v20) == 565 )
      {
        goto LABEL_22;
      }
    }
  }
LABEL_23:
  v25 = 0;
  v40 = 0;
  if ( *v18 )
  {
    v26 = *(_DWORD **)(a1 + 7272);
    if ( !v26 )
      goto LABEL_37;
    v27 = 0;
    do
    {
      if ( *v26 )
        v27 |= sub_606ED9B4(*(_DWORD *)(*v26 + 2196));
      v26 = (_DWORD *)v26[1];
    }
    while ( v26 );
  }
  else
  {
    v28 = *(_DWORD **)(a1 + 6616);
    if ( !v28 )
      goto LABEL_37;
    v27 = 0;
    do
    {
      if ( *v28 )
        v27 |= sub_606ED9B4(*(_DWORD *)(*v28 + 2196));
      v28 = (_DWORD *)v28[1];
    }
    while ( v28 );
  }
  if ( v27 )
  {
    *(float *)&v41 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
    *((float *)&v41 + 1) = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
    *(float *)&v42 = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
    lift_trampoline_ref(a1 + 6100, &v41);
    sub_6040B3B0((_BYTE *)dword_60C9A1F0, FIELD_U8(dword_60C9A1F0, 6532));
    v25 = v27;
    v40 = 1;
  }
LABEL_37:
  v29 = (_BYTE *)(a1 + 7473);
  if ( (v25 & 1) != 0 )
  {
    v30 = FIELD_U32(PlayerMgr_instance, 0x30);
    *(float *)&v41 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
    *((float *)&v41 + 1) = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
    *(float *)&v42 = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
    SE_OBJ_TRPLN_BOUND_ref(v30, &v41);
    if ( *v29 == 1 )
      FIELD_U32(v30, 1204) |= 0x400u;
  }
  if ( (v25 & 2) != 0 )
  {
    v31 = FIELD_U32(PlayerMgr_instance, 0x34);
    *(float *)&v41 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
    *((float *)&v41 + 1) = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
    *(float *)&v42 = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
    SE_OBJ_TRPLN_BOUND_ref(v31, &v41);
    if ( *v29 == 1 )
      FIELD_U32(v31, 1204) |= 0x400u;
  }
  if ( (v25 & 4) != 0 )
  {
    v32 = FIELD_U32(PlayerMgr_instance, 0x38);
    *(float *)&v41 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
    *((float *)&v41 + 1) = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
    *(float *)&v42 = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
    SE_OBJ_TRPLN_BOUND_ref(v32, &v41);
    if ( *v29 == 1 )
      FIELD_U32(v32, 1204) |= 0x400u;
  }
  if ( (v25 & 8) != 0 )
  {
    v33 = FIELD_U32(PlayerMgr_instance, 60);
    *(float *)&v41 = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
    *((float *)&v41 + 1) = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
    *(float *)&v42 = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
    SE_OBJ_TRPLN_BOUND_ref(v33, &v41);
    if ( *v29 == 1 )
      FIELD_U32(v33, 1204) |= 0x400u;
  }
  sub_606EBCF0(a1, &v40);
  v34 = FIELD_F32(a1, 112);
  v35 = FIELD_F32(a1, 108);
  v36 = v34 + FIELD_F32(a1, 576);
  v37 = v35 + FIELD_F32(a1, 572);
  if ( *v18 )
  {
    FIELD_F32(a1, 7188) = v37 - v35;
    FIELD_F32(a1, 7192) = v36 - v34;
    SolidOnTopCollider_execute((ColliderBase *)(a1 + 7016));
  }
  else
  {
    FIELD_F32(a1, 6532) = v37 - v35;
    FIELD_F32(a1, 6536) = v36 - v34;
    ShapedCollider_execute((ColliderBase *)(a1 + 6360));
  }
  v38 = FIELD_F32(a1, 7464);
  if ( FIELD_U8(a1, 6349) )
    FIELD_F32(a1, 496) = v38 - FIELD_F32(a1, 112);
  else
    FIELD_F32(a1, 492) = (float)(v38 - FIELD_F32(a1, 108)) + 64.0;
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
