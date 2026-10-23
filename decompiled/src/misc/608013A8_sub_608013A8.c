/* sub_608013A8
 * address: 0x608013A8   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_608013A8(_DWORD *a1, _DWORD *a2, float *a3)
{
  int v3; // r3
  int v4; // r0

  v3 = a1[7];
  if ( v3 || (v3 = a1[9]) != 0 )
    v4 = v3;
  else
    v4 = a1[8];
  return sub_60800BCC(v4, a2, a3);
}
