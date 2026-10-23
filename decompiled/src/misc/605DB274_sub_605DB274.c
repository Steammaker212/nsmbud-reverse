/* sub_605DB274
 * address: 0x605DB274   size: 388   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_605DB274(int a1)
{
  int v2; // r6
  _WORD *v3; // r7
  int v4; // r2
  float v5; // s0
  float v7[2]; // [sp+0h] [bp-28h] BYREF
  _DWORD v8[8]; // [sp+8h] [bp-20h] BYREF

  v2 = 0;
  v3 = (_WORD *)(a1 + 6264);
  if ( (FIELD_U8(a1, 6264) & 1) == 0 && !sub_60002110(a1, a1 + 648) )
  {
    if ( sub_60001B14((StageActor *)a1, (int)(v3 - 2808)) != 1 )
    {
      if ( sub_60001814((StageActor *)a1, (int)(v3 - 2808)) == 1 )
      {
        v2 = 1;
        if ( sub_60001F3C((StageActor *)a1, (int)(v3 - 2808), v4) != 1 )
          return v2;
        FIELD_U32(a1, 6804) |= 0x10000u;
      }
      else if ( !FIELD_U32(a1, 6848) && (*v3 & 0x2421) == 0 && (FIELD_U32(a1, 6804) & 0x201) == 0x201 )
      {
        v8[1] = v3 - 2808;
        v8[0] = off_60C0B468;
        sub_6014F61C((int)(v3 - 2808));
        FIELD_U32(a1, 664) = v8;
        v5 = FIELD_F32(a1, 112) + FIELD_F32(a1, 576);
        v7[0] = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
        v7[1] = v5;
        return sub_6015DF58(a1 + 652, 0, (int)v7) != 0;
      }
      return 0;
    }
    v2 = 1;
    if ( sub_600020C4(a1, (int)(v3 - 2808)) == 1 )
    {
      v2 = 0;
      FIELD_U32(a1, 6804) |= 0x8000u;
      sub_605D89BC((int *)a1, 0, 2u);
    }
  }
  return v2;
}
