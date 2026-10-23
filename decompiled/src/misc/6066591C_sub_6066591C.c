/* sub_6066591C
 * address: 0x6066591C   size: 520   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6066591C(int a1)
{
  float v2; // s4
  float v3; // s6
  float v4; // s8
  float v5; // s10
  float v6; // s0
  _BYTE *v7; // r1
  int v8; // r0
  float v9; // s4
  int v10; // r1
  int v11; // r1
  _BYTE *v12; // r1
  float v13; // s0
  float v14; // s2
  int v15; // r1
  int v16; // r1
  float v18; // [sp+0h] [bp-18h] BYREF
  int v19; // [sp+4h] [bp-14h]

  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( FIELD_U32(a1, 7256) == 1 )
    sub_60664920((float *)a1);
  sub_60664960(a1);
  SolidOnTopCollider_execute((ColliderBase *)(a1 + 6112));
  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_F32(a1, 116);
  v4 = FIELD_F32(a1, 7156);
  v5 = FIELD_F32(a1, 7160);
  FIELD_F32(a1, 7164) = FIELD_F32(a1, 7152) - FIELD_F32(a1, 108);
  FIELD_F32(a1, 7168) = v4 - v2;
  FIELD_F32(a1, 7172) = v5 - v3;
  StageActor__cullCheck((StageActor *)a1, 0);
  sub_606643DC(a1);
  v6 = FIELD_F32(a1, 112);
  v7 = (_BYTE *)(a1 + 7316);
  v8 = TileMgr_instance;
  v9 = FIELD_F32(TileMgr_instance, 24);
  if ( FIELD_U8(a1, 7316) )
  {
    if ( (float)(v6 + -16.0) >= v9 )
      *v7 = 0;
  }
  else if ( (float)(v6 + -16.0) < v9 )
  {
    *v7 = 1;
    v10 = FIELD_U32(v8, 24);
    v18 = FIELD_F32(a1, 108);
    v19 = v10;
    TileMgr_splashRelated(v8, &v18, 14);
    v11 = FIELD_U32(TileMgr_instance, 24);
    v18 = FIELD_F32(a1, 108) + FIELD_F32(a1, 7248);
    v19 = v11;
    TileMgr_splashRelated(TileMgr_instance, &v18, 14);
    v6 = FIELD_F32(a1, 112);
    v8 = TileMgr_instance;
  }
  v12 = (_BYTE *)(a1 + 7317);
  v13 = v6 + 8.0;
  v14 = FIELD_F32(v8, 24);
  if ( FIELD_U8(a1, 7317) )
  {
    if ( v13 < v14 )
      *v12 = 0;
  }
  else if ( v13 >= v14 )
  {
    *v12 = 1;
    v15 = FIELD_U32(v8, 24);
    v18 = FIELD_F32(a1, 108);
    v19 = v15;
    TileMgr_splashRelated(v8, &v18, 14);
    v16 = FIELD_U32(TileMgr_instance, 24);
    v18 = FIELD_F32(a1, 108) + FIELD_F32(a1, 7248);
    v19 = v16;
    TileMgr_splashRelated(TileMgr_instance, &v18, 14);
  }
  return 1;
}
