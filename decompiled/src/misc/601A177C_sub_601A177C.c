/* sub_601A177C
 * address: 0x601A177C   size: 40   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601A177C(_DWORD *a1)
{
  int v2; // r0
  int v3; // r3

  v2 = 0;
  if ( (int)a1[34] >= 1 )
  {
    v3 = a1[33];
    if ( v3 )
      v2 = v3 - a1[35];
  }
  return CS_W8a_CloudBG_ref_2(v2);
}
