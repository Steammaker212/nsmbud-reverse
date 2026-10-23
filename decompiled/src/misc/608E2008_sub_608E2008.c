/* sub_608E2008
 * address: 0x608E2008   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E2008(int a1, int a2, float *a3, float *a4, int a5, int a6, int a7)
{
  float v8; // s0
  float v9; // s2
  float v10; // s4
  float v11; // r0
  float v13[13]; // [sp+0h] [bp-50h] BYREF
  char v14; // [sp+34h] [bp-1Ch]

  v13[5] = 1.0;
  v13[6] = 1.0;
  v13[7] = 1.0;
  v13[8] = 1.0;
  v13[12] = 1.0;
  v13[11] = 1.0;
  v13[10] = 1.0;
  v13[9] = 1.0;
  v14 = 0;
  v8 = *a4;
  v9 = a4[1];
  v10 = a3[1];
  v11 = a3[2];
  v13[0] = *a3 + (float)(*a4 * 0.5);
  v13[1] = v10 - (float)(v9 * 0.5);
  v13[2] = v11;
  v13[3] = v8;
  v13[4] = v9;
  if ( a7 == 1 )
    ((void (__fastcall *)(float *, int, int))sub_608F4DCC)(v13, a5, a6);
  else
    sub_608F4D80(v13, a5, a6, a4);
  return sub_608F4E18(a2 + 260, v13);
}
