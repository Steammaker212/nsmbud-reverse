/* sub_6059A5CC
 * address: 0x6059A5CC   size: 184   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6059A5CC(int a1)
{
  int v2; // r6
  int v3; // r4
  float v4; // s16
  int v5; // r0
  int *v6; // r5
  int v7; // t1
  float v8; // s0

  v2 = a1 + 6260;
  v3 = a1 + 8036;
  FIELD_U32(a1, 6260) |= 0x400000u;
  v4 = sub_6059BE48(a1 + 8036);
  v5 = FIELD_U32(v2, 7208);
  if ( v5 == 2 )
  {
    v8 = 3.0;
  }
  else if ( v5 == 1 )
  {
    v8 = 1.5;
  }
  else if ( v5 || (v7 = FIELD_U32(a1, 13472), v6 = (int *)(a1 + 13472), !v7) )
  {
    v8 = 1.0;
  }
  else
  {
    v8 = (float)(sub_6059BE58(v3) + -1.0) / (float)*v6;
  }
  if ( v8 > v4 )
    sub_6059BE40(v3, v8);
}
