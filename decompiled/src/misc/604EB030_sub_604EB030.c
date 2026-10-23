/* sub_604EB030
 * address: 0x604EB030   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604EB030(int a1)
{
  float *v2; // r5
  float v3; // s0
  int v4; // r0
  int v5; // s0
  int v6; // r2
  int v7; // r3

  v2 = (float *)(a1 + 4596);
  v3 = sub_603FC760(dword_60C99DE4);
  *v2 = v3;
  v4 = FIELD_U32(a1, 4576);
  if ( v4 )
  {
    v5 = (int)v3;
    v6 = 9999;
    if ( v5 < 9999 )
      v6 = v5;
    if ( FIELD_U32(a1, 4572) != v6 )
    {
      FIELD_U32(a1, 4572) = v6;
      v7 = v4 - v6;
      if ( v4 - v6 <= 0 )
        v7 = 0;
      sub_6047DEC8(*(_DWORD **)(a1 + 4), *(_DWORD *)(FIELD_U32(a1, 12) + 16), 1, v7);
    }
  }
  StateMgr__execute((StateMgr *)(a1 + 4536));
  ((void (__fastcall *)(int))loc_604E8C6C)(a1);
  sub_604E9478(a1);
  return sub_60473B58(*(_DWORD **)(a1 + 4), 0xEu, 0);
}
