/* sub_6049F614
 * address: 0x6049F614   size: 256   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float **__fastcall sub_6049F614(int a1)
{
  float **result; // r0
  int v2; // r1
  float *v3; // r7
  float v4; // s6
  float v5; // r5
  float v6; // r4
  float v7; // r6
  float *v8; // r3

  result = (float **)(a1 + 20276);
  v2 = 4;
  do
  {
    v3 = *result;
    if ( !*((_BYTE *)*result + 2689) )
      goto LABEL_12;
    v4 = v3[95];
    v5 = v3[96];
    v6 = v3[97];
    if ( result[514] == (float *)1 )
    {
      v7 = v4 + 600.0;
      v6 = v6 + 0.0;
      v5 = v5 + 0.0;
      if ( *((_BYTE *)v3 + 2690) || *((_BYTE *)v3 + 2691) )
        goto LABEL_11;
      *((_BYTE *)v3 + 2699) = 1;
      *((_BYTE *)v3 + 2691) = 1;
      *((_DWORD *)v3 + 125) = 3;
      *((_DWORD *)v3 + 633) = 2;
    }
    else
    {
      v7 = v4 + -600.0;
      if ( *((_BYTE *)v3 + 2690) || *((_BYTE *)v3 + 2691) )
        goto LABEL_11;
      *((_BYTE *)v3 + 2699) = 1;
      *((_BYTE *)v3 + 2691) = 1;
      *((_DWORD *)v3 + 125) = 3;
      *((_DWORD *)v3 + 633) = 1;
    }
    v3[640] = 1.0;
    *((_BYTE *)v3 + 2693) = 1;
LABEL_11:
    v8 = *result;
    v8[104] = v7;
    v8[105] = v5;
    v8[106] = v6;
    *((_BYTE *)*result + 2695) = 1;
LABEL_12:
    ++result;
    --v2;
  }
  while ( v2 );
  return result;
}
