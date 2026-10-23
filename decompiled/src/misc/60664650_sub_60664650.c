/* sub_60664650
 * address: 0x60664650   size: 704   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60664650(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  float v5; // r1
  int *v6; // r0
  int v7; // r3
  bool v8; // zf
  int v9; // r3
  float *v10; // r1
  float v11; // s4
  float v12; // s6
  float v13; // s8
  float v14; // s10
  float v15; // s0
  _BYTE *v16; // r1
  int v17; // r0
  float v18; // s4
  int v19; // r1
  int v20; // r1
  float v21; // s2
  _BYTE *v22; // r1
  float v23; // s0
  int v24; // r2
  float v26; // [sp+0h] [bp-18h] BYREF
  int v27; // [sp+4h] [bp-14h]

  v4 = FIELD_U32(a1, 7272);
  v2 = (_DWORD *)(a1 + 7272);
  v3 = v4;
  if ( v4 )
    *v2 = v3 - 1;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( FIELD_U32(a1, 7256) == 1 )
    FIELD_F32(a1, 7192) = (float)(FIELD_F32(a1, 7252) + (float)(FIELD_F32(a1, 112) - FIELD_F32(a1, 7156)))
                          / 160.0;
  v5 = 0.0;
  v26 = 0.0;
  v6 = *(int **)(a1 + 6368);
  if ( v6 )
  {
    do
    {
      v7 = *v6;
      v8 = *v6 == 0;
      if ( *v6 )
      {
        v7 = FIELD_U32(v7, 2196);
        v8 = v7 == 0;
      }
      if ( !v8 && (unsigned __int8)(FIELD_U8(v7, 533) - 1) <= 1u )
      {
        v9 = FIELD_S8(v7, 84);
        if ( (unsigned __int8)v9 != 255 )
        {
          v10 = &v26;
          if ( (unsigned __int8)v9 < 4u )
            v10 = (float *)((char *)&v26 + v9);
          *(_BYTE *)v10 = 1;
        }
      }
      v6 = (int *)v6[1];
    }
    while ( v6 );
    v5 = v26;
  }
  FIELD_F32(a1, 7276) = v5;
  SolidOnTopCollider_execute((ColliderBase *)(a1 + 6112));
  SolidOnTopCollider_execute((ColliderBase *)(a1 + 6704));
  v11 = FIELD_F32(a1, 112);
  v12 = FIELD_F32(a1, 116);
  v13 = FIELD_F32(a1, 7156);
  v14 = FIELD_F32(a1, 7160);
  FIELD_F32(a1, 7164) = FIELD_F32(a1, 7152) - FIELD_F32(a1, 108);
  FIELD_F32(a1, 7168) = v13 - v11;
  FIELD_F32(a1, 7172) = v14 - v12;
  StageActor__cullCheck((StageActor *)a1, 0);
  sub_60664220(a1);
  sub_606643DC(a1);
  v15 = FIELD_F32(a1, 112);
  v16 = (_BYTE *)(a1 + 7316);
  v17 = TileMgr_instance;
  v18 = FIELD_F32(TileMgr_instance, 24);
  if ( FIELD_U8(a1, 7316) )
  {
    if ( (float)(v15 + -16.0) >= v18 )
      *v16 = 0;
  }
  else if ( (float)(v15 + -16.0) < v18 )
  {
    *v16 = 1;
    v19 = FIELD_U32(v17, 24);
    v26 = FIELD_F32(a1, 108);
    v27 = v19;
    TileMgr_splashRelated(v17, &v26, 14);
    v20 = FIELD_U32(TileMgr_instance, 24);
    v26 = FIELD_F32(a1, 108) + FIELD_F32(a1, 7248);
    v27 = v20;
    TileMgr_splashRelated(TileMgr_instance, &v26, 14);
    v15 = FIELD_F32(a1, 112);
    v17 = TileMgr_instance;
  }
  v21 = FIELD_F32(v17, 24);
  v22 = (_BYTE *)(a1 + 7317);
  v23 = v15 + 32.0;
  if ( FIELD_U8(a1, 7317) )
  {
    if ( v23 < v21 )
      *v22 = 0;
  }
  else if ( v23 >= v21 )
  {
    *v22 = 1;
    v24 = FIELD_U32(v17, 24);
    v26 = FIELD_F32(a1, 7176);
    v27 = v24;
    TileMgr_splashRelated(v17, &v26, 14);
  }
  return 1;
}
