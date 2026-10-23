/* sub_601BBEE4
 * address: 0x601BBEE4   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601BBEE4(_DWORD *a1)
{
  int v1; // r1
  int v2; // r1

  v1 = a1[271];
  if ( v1 == 5 )
  {
    v2 = -1073741824;
    goto LABEL_5;
  }
  if ( v1 == 3 )
  {
    v2 = 0;
LABEL_5:
    a1[256] = v2;
  }
  a1[277] |= 0x100u;
  return sub_601BA0F8((int)a1, 0, 0.0, 0.0);
}
