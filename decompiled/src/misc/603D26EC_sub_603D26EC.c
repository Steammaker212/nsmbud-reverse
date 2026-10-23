/* sub_603D26EC
 * address: 0x603D26EC   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

signed int __fastcall sub_603D26EC(int a1)
{
  int v2; // r1
  int v3; // r1
  int v4; // r1
  int v5; // r0
  int v6; // r5
  int v7; // r1
  int v8; // r0

  v2 = FIELD_U32(PlayerMgr_instance, 48);
  if ( v2 && FIELD_U8(v2, 532) == FIELD_U8(a1, 532)
    || (v3 = FIELD_U32(PlayerMgr_instance, 52)) != 0
    && FIELD_U8(v3, 532) == FIELD_U8(a1, 532)
    || (v4 = FIELD_U32(PlayerMgr_instance, 56)) != 0
    && FIELD_U8(v4, 532) == FIELD_U8(a1, 532)
    || (v5 = FIELD_U32(PlayerMgr_instance, 60), v6 = 0, v5)
    && FIELD_U8(v5, 532) == FIELD_U8(a1, 532) )
  {
    v6 = 1;
    if ( sub_603D27D0(a1) == 1 )
    {
      sub_603D29D0(a1);
      v7 = FIELD_U32(a1, 664);
      FIELD_U32(a1, 664) = v7 + 1;
      v8 = 80;
      if ( v7 >= 4 )
      {
        FIELD_U32(a1, 664) = 0;
        v8 = 180;
        if ( (FIELD_U8(a1, 23) & 0x10) != 0 )
          v8 = 80;
      }
      FIELD_U32(a1, 644) = v8;
    }
  }
  return v6;
}
