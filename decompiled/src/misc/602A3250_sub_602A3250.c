/* sub_602A3250
 * address: 0x602A3250   size: 248   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_602A3250(int a1, int a2)
{
  signed int v4; // r2
  float v5; // s0
  int v6; // r0
  float v7[7]; // [sp+4h] [bp-1Ch] BYREF

  FIELD_U8(a1, 6296) = 1;
  if ( !FIELD_U8(dword_60C9A1F0, 6554) || FIELD_U8(a1, 6297) )
  {
    v4 = sub_60285440(a1 + 6292, a2);
    if ( v4 >= 0 )
    {
      v7[0] = FIELD_F32(a1, 108) + FIELD_F32(a1, 572);
      v5 = FIELD_F32(a1, 112) + 24.0;
      v7[2] = FIELD_F32(a1, 116) + FIELD_F32(a1, 580);
      v7[1] = v5;
      v6 = FIELD_U32(a1, 6292);
      if ( v6 == 2 )
      {
        sub_600227A0(dword_60C7F52C, (int)v7, v4, FIELD_S8(a2, 84));
      }
      else if ( v6 == 1 )
      {
        sub_60022540(dword_60C7F52C, (int)v7, v4, FIELD_S8(a2, 84), 1);
      }
    }
  }
}
