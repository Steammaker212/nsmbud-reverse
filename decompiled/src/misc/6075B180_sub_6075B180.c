/* sub_6075B180
 * address: 0x6075B180   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6075B180(_DWORD *a1)
{
  int v1; // r1
  int v2; // r2
  int v3; // r0
  float *v4; // r3
  float result; // s0
  float *v6; // r1

  v1 = a1[49];
  v2 = a1[41];
  v3 = a1[75];
  if ( (v1 & 0x1800000) != 0 )
    v3 = 0;
  if ( !v2 )
  {
    result = flt_60B0A7A4[v3];
    if ( (v1 & 8) == 0 )
      return result;
    v6 = (float *)&unk_60B0A7BC;
    return result + v6[v3];
  }
  v4 = (float *)&unk_60B0A7EC;
  if ( (v1 & 0x100000) != 0 )
    v4 = (float *)&unk_60B0A7D4;
  result = v4[v3];
  if ( (v1 & 8) != 0 )
  {
    v6 = (float *)&unk_60B0A804;
    return result + v6[v3];
  }
  return result;
}
