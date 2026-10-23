/* sub_60308F44
 * address: 0x60308F44   size: 344   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60308F44(int a1)
{
  _DWORD *v2; // r0
  int v3; // r1
  int v4; // t1
  int v5; // r1
  int v6; // r1
  int v7; // r0

  v4 = FIELD_U32(a1, 6580);
  v2 = (_DWORD *)(a1 + 6580);
  v3 = v4;
  if ( v4 )
    *v2 = v3 - 1;
  if ( FIELD_U32(a1, 6552) == 1 )
  {
    v5 = FIELD_U32(a1, 6560);
    if ( v5 )
    {
      v6 = v5 - 1;
      FIELD_U32(a1, 6560) = v6;
      if ( v6 == 1 )
        FIELD_U8(a1, 6604) = 1;
    }
  }
  StateMgr__execute((StateMgr *)(a1 + 6084));
  if ( FIELD_U8(dword_60C9CF0C, 1361) )
  {
    v7 = FIELD_U32(a1, 6304);
    FIELD_U32(v7, 20) = 0;
    FIELD_U32(v7, 28) |= 2u;
    sub_6041838C((ModelAnimation *)(FIELD_U32(a1, 6304) + 4));
  }
  ActorScaler_execute((ActorScaler *)(a1 + 6916));
  skl_root_ref_308D1C(a1);
  if ( FIELD_S32(a1, 6556) >= 90 )
    EffectWrapper_update((EffectWrapper *)(a1 + 6308), 345, (Vec3 *)(a1 + 108), 0, (Vec3 *)(a1 + 144));
  if ( FIELD_U8(a1, 6606) )
  {
    if ( sub_60235E50(a1 + 6428) == 1 )
      sub_60237208(a1 + 6412, (Vec3 *)(a1 + 6516), 0, 0);
    else
      FIELD_U8(a1, 6606) = 0;
  }
  StageActor__cullCheck((StageActor *)a1, 0);
  return 1;
}
