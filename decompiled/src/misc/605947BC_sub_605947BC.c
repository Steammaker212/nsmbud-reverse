/* sub_605947BC
 * address: 0x605947BC   size: 464   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_605947BC(int a1)
{
  int v2; // r0
  _DWORD *v3; // r0
  int v4; // r1
  int v5; // r1
  float *v6; // r0
  float v7; // s0
  float v8; // s0
  int v9; // r1
  float v10; // s0
  int v11; // r2
  int v12; // r0
  float v13; // s0

  StateMgr__execute((StateMgr *)(a1 + 6084));
  sub_6059499C(a1);
  if ( FIELD_U8(a1, 8215) )
    v2 = 7088;
  else
    v2 = 6288;
  ShapedCollider_execute((ColliderBase *)(a1 + v2));
  v3 = (_DWORD *)(a1 + 8196);
  v4 = FIELD_U32(a1, 8196);
  if ( !v4 || (v5 = v4 - 1, (*v3 = v5) == 0) )
  {
    *v3 = 24;
    sub_6071689C(TileMgr_instance, 3, 1, 0);
  }
  ActorScaler_execute((ActorScaler *)(a1 + 8260));
  sub_6059454C(a1);
  if ( FIELD_U32(a1, 8164) )
    ActiveCollider_reset((ActiveCollider *)(a1 + 7840));
  if ( FIELD_U32(a1, 8216) )
  {
    v6 = (float *)(a1 + 8180);
    v7 = FIELD_F32(a1, 8180);
    if ( FIELD_U8(a1, 8214) )
    {
      v8 = v7 + 33.25;
      *v6 = v8;
      if ( v8 < 266.0 )
      {
        v9 = LODWORD(v8);
LABEL_18:
        v11 = FIELD_U32(a1, 7800);
        v12 = FIELD_U32(a1, 7808);
        v13 = FIELD_F32(a1, 7804);
        FIELD_U32(a1, 7764) = v9;
        FIELD_U32(a1, 7772) = v11;
        FIELD_F32(a1, 7776) = v13 + 8.0;
        FIELD_U32(a1, 7780) = v12;
        LightMask__update((LightMask *)(a1 + 7760));
        goto LABEL_19;
      }
      v9 = 1132789760;
    }
    else
    {
      v10 = v7 + -33.25;
      *v6 = v10;
      if ( v10 > 0.0 )
      {
        v9 = LODWORD(v10);
        goto LABEL_18;
      }
      v9 = 0;
    }
    *(_DWORD *)v6 = v9;
    goto LABEL_18;
  }
LABEL_19:
  if ( FIELD_U8(a1, 30) )
    StageActor__cullCheck((StageActor *)a1, 0);
  FIELD_U8(a1, 8208) = 0;
  return 1;
}
