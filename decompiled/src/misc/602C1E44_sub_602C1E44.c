/* sub_602C1E44
 * address: 0x602C1E44   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602C1E44(int a1)
{
  int v2; // r0
  float v3; // s2
  float v4; // s4
  char v5; // r0

  StageActor__cullCheck((StageActor *)a1, 0);
  if ( !v2 )
  {
    StateMgr__execute((StateMgr *)(a1 + 6084));
    if ( FIELD_U8(a1, 6472) )
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 628))(a1);
    ActorScaler_execute((ActorScaler *)(a1 + 6612));
    sub_602C1BE0(a1, 0);
    v3 = FIELD_F32(a1, 6408) - FIELD_F32(a1, 108);
    v4 = (float)(FIELD_F32(a1, 6412) + -2.0) - FIELD_F32(a1, 112);
    FIELD_F32(a1, 304) = v3;
    FIELD_F32(a1, 308) = v4;
    FIELD_F32(a1, 12152) = v3;
    FIELD_F32(a1, 12156) = v4;
    if ( FIELD_U8(a1, 6474) )
    {
      v5 = FIELD_U8(a1, 6484) + 1;
      FIELD_U8(a1, 6484) = v5;
      if ( (v5 & 0x3F) == 0 )
        sub_6071689C(TileMgr_instance, 1, 1, 0);
    }
    if ( !FIELD_U8(a1, 536) && sub_60003AE0((StageActor *)a1) == 1 )
      SE_EMY_DOWN_ref_2C1F6C(a1);
  }
  return 1;
}
