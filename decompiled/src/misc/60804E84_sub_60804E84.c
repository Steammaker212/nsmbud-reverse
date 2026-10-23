/* sub_60804E84
 * address: 0x60804E84   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60804E84(int a1, int a2)
{
  unsigned int v2; // r2
  unsigned int v3; // r0
  float *v4; // r0
  float *v6; // r3

  v2 = FIELD_U8(a1, 4);
  v3 = *(_DWORD *)a1;
  if ( v3 > 7 )
    goto LABEL_13;
  if ( ((1 << v3) & 0xC3) != 0 )
  {
    if ( v2 > 0xB )
      v2 = 0;
    v4 = (float *)&unk_60B0DB68;
    return v4[v2];
  }
  if ( v3 != 2 )
  {
LABEL_13:
    if ( v2 > 9 )
      v2 = 0;
    v4 = (float *)&unk_60B0DA50;
    return v4[v2];
  }
  v6 = (float *)&unk_60B0DB98;
  if ( a2 )
    v6 = (float *)&unk_60B0DBBC;
  if ( v2 > 8 )
    v2 = 0;
  return v6[v2];
}
