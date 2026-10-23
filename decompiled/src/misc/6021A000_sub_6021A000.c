/* sub_6021A000
 * address: 0x6021A000   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_6021A000(float *a1)
{
  float *v2; // r5
  float *v3; // r0
  unsigned int v4; // r0

  v2 = (float *)sub_601CF9C0(dword_60C8AEF0);
  if ( FIELD_U8(dword_60C8C188, 3230) )
  {
    v3 = (float *)sub_601FEE28(dword_60C8C188);
    a1[157] = v3[166];
    a1[158] = v3[167];
    a1[159] = v3[168];
LABEL_5:
    a1[158] = sub_601C7324((int)v2) + a1[158];
    return;
  }
  a1[157] = v2[20];
  a1[158] = v2[21];
  a1[159] = v2[22];
  v4 = *((_DWORD *)v2 + 278) - 6;
  if ( v4 <= 0x1A && ((1 << v4) & 0x7B00011) != 0 )
    goto LABEL_5;
  if ( FIELD_U32(dword_60CC6D78, 412) == 8 )
    a1[158] = a1[352];
  else
    a1[158] = sub_601C7300((int)v2);
}
