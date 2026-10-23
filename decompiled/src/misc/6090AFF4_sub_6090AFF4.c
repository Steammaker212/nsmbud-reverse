/* sub_6090AFF4
 * address: 0x6090AFF4   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6090AFF4(unsigned __int8 *a1, unsigned __int8 *a2, float a3)
{
  unsigned int v3; // r3
  int v4; // s12
  float v5; // s4
  unsigned int v6; // s6
  unsigned __int8 v7; // r0

  if ( a3 >= 0.0 )
  {
    if ( a3 > 1.0 )
      a3 = 1.0;
  }
  else
  {
    a3 = 0.0;
  }
  v3 = a1[2];
  v4 = a2[1] - a1[1];
  v5 = (float)a1[3] + (float)(a3 * (float)(a2[3] - a1[3]));
  v6 = a1[1];
  v7 = (int)(float)((float)*a1 + (float)(a3 * (float)(*a2 - *a1)));
  _R1 = (int)(float)((float)v3 + (float)(a3 * (float)(int)(a2[2] - v3))) << 16;
  __asm { UXTB16          R1, R1 }
  return v7
       | ((int)v5 << 24)
       | _R1
       | (unsigned __int16)((unsigned __int16)(int)(float)((float)v6 + (float)(a3 * (float)v4)) << 8);
}
