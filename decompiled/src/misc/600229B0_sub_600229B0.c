/* sub_600229B0
 * address: 0x600229B0   size: 188   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_600229B0(float a1, float a2, int a3, int a4, int a5)
{
  float v6; // s2
  int v7; // r0
  float v9[7]; // [sp+Ch] [bp-1Ch] BYREF

  v6 = FIELD_F32(a4, 112) + a2;
  v9[0] = FIELD_F32(a4, 108) + a1;
  v9[1] = v6;
  v9[2] = 0.0;
  if ( a5 == 8 )
  {
    v7 = sub_60407E74(dword_60C9A1E8, v9, 25, -1, 0, 0);
    return sub_60021C70(v7, 1);
  }
  else
  {
    sub_603FBA2C(dword_60C99DD4, dword_60AF5088[a5], -1);
    return sub_60407E74(dword_60C9A1E8, v9, dword_60AF5060[a5], -1, 0, 0);
  }
}
