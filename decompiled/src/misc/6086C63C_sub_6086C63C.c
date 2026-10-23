/* sub_6086C63C
 * address: 0x6086C63C   size: 288   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6086C63C(int a1, int a2)
{
  int v4; // r0
  int v5; // r0
  int v6; // r1
  int v7; // r2
  int v8; // r0

  if ( FIELD_U32(a1, 56) )
  {
    sub_6087EC1C(a1 + 8);
    if ( (FIELD_U8(a1, 29) & (1 << a2)) != 0 || *(_WORD *)(*(_DWORD *)a1 + 172) )
    {
      v4 = 0;
      if ( (FIELD_U8(a1, 4) & 1) != 0 )
      {
        v4 = FIELD_U32(a1, 40);
        if ( v4 )
          v4 += 72 * a2;
      }
      v5 = sub_608354C4(v4);
      FIELD_U8(a1, 29) &= ~(unsigned __int8)(1 << a2);
      sub_6086C75C(a1, v5, FIELD_U32(a1, 12) + 4 * FIELD_U32(a1, 20) * a2);
      v6 = FIELD_U32(a1, 20);
      if ( v6 >= 1 )
      {
        v7 = ~v6;
        if ( ~v6 < -2 || v6 == 1 )
          v7 = -2;
        memset((void *)(FIELD_U32(a1, 12) + 4 * v6 * a2), 0, 4 * (v7 + v6) + 8);
      }
      v8 = 0;
      if ( (FIELD_U8(a1, 4) & 1) != 0 )
      {
        v8 = FIELD_U32(a1, 40);
        if ( v8 )
          v8 += 72 * a2;
      }
      sub_608354E0(v8);
      nullsub_66();
    }
  }
}
