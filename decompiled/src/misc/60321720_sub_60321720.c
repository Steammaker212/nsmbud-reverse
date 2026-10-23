/* sub_60321720
 * address: 0x60321720   size: 316   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60321720(int a1)
{
  int v2; // r0
  int v3; // r2
  int v4; // r2
  int v5; // r1
  int v6; // r1
  _DWORD *v7; // r4
  int v8; // t1

  ActorScaler_execute((ActorScaler *)(a1 + 13020));
  FIELD_U8(a1, 7350) = FIELD_U8(a1, 7349);
  v2 = 0;
  FIELD_U8(a1, 7349) = 0;
  v3 = FIELD_U32(a1, 7648);
  if ( v3 )
  {
    v2 = v3 - 1;
    FIELD_U32(a1, 7648) = v3 - 1;
  }
  v4 = FIELD_U32(a1, 7652);
  if ( v4 )
    FIELD_U32(a1, 7652) = v4 - 1;
  if ( v2 < 1 )
  {
    if ( FIELD_U16(a1, 6322) )
      --FIELD_U16(a1, 6322);
    if ( FIELD_U16(a1, 6326) )
      --FIELD_U16(a1, 6326);
    if ( FIELD_U16(a1, 6344) )
      --FIELD_U16(a1, 6344);
    v5 = FIELD_U32(a1, 7644);
    if ( v5 )
      FIELD_U32(a1, 7644) = v5 - 1;
    if ( !sub_602A588C(a1) )
    {
      v6 = FIELD_U32(a1, 7656);
      if ( v6 )
      {
        FIELD_U32(a1, 7656) = v6 - 1;
        if ( v6 <= 1 )
          sub_6032185C(a1);
      }
    }
    StateMgr__execute((StateMgr *)(a1 + 6084));
    StageActor__cullCheck((StageActor *)a1, 0);
  }
  sub_602A33AC((_BYTE *)a1);
  v8 = FIELD_U32(a1, 6348);
  v7 = (_DWORD *)(a1 + 6348);
  *v7 = 0;
  v7[1] = v8;
  return 1;
}
