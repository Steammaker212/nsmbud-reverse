/* sub_605B1404
 * address: 0x605B1404   size: 336   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605B1404(int a1)
{
  int v2; // r3
  int v3; // r0
  int *v4; // r5
  int v5; // r6
  int v6; // r0
  int v7; // r0
  int v8; // r1
  int v9; // r2

  v2 = FIELD_U32(a1, 6980);
  if ( v2 == 3 )
  {
    v2 = 0;
    goto LABEL_17;
  }
  if ( v2 != 1 )
    goto LABEL_17;
  v2 = 1;
  v4 = (int *)(a1 + 6856);
  v3 = FIELD_U32(a1, 6856);
  if ( v3 == 21 )
  {
    v5 = FIELD_U8(a1, 6991);
    v6 = sub_60729CF0(EventMgr__instance, 0);
    v2 = 1;
    if ( v5 != v6 )
    {
      v7 = sub_60729CF0(EventMgr__instance, 0);
      v2 = 1;
      if ( !v7 )
        v2 = 7;
    }
    v3 = *v4;
  }
  switch ( v3 )
  {
    case 12:
      *v4 = 21;
      break;
    case 21:
      goto LABEL_15;
    case 13:
      v2 = 6;
      *v4 = 21;
      goto LABEL_15;
  }
  v2 = 0;
LABEL_15:
  if ( FIELD_U16(a1, 6986) )
    v2 = 0;
LABEL_17:
  v8 = (unsigned int)(float)(FIELD_F32(a1, 108) + -8.0);
  v9 = (unsigned int)(float)-(float)(FIELD_F32(a1, 112) + 16.0);
  if ( FIELD_U16(a1, 6984) == 112 )
    TileMgr_setTile(TileMgr_instance, v8, v9, 0, dword_60B05324[v2]);
  else
    TileMgr_setTile(TileMgr_instance, v8, v9, 0, FIELD_U16(a1, 6984));
  FIELD_U8(a1, 6992) = 1;
  return 6992;
}
