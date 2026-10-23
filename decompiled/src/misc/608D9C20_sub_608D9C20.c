/* sub_608D9C20
 * address: 0x608D9C20   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D9C20(_DWORD *a1)
{
  int *v2; // r0
  int v3; // r1
  int result; // r0
  int *v5; // r0

  if ( a1[20] || (v2 = sub_608ACFA8(a1[14]), (a1[20] = v2) != 0) )
  {
    v3 = a1[10];
    result = 1;
    if ( (unsigned int)(v3 - 3) < 2 )
      return result;
    if ( !v3 )
    {
      v5 = sub_608C4DF4();
      sub_608C4F14((int)v5, a1, 1);
    }
  }
  return 0;
}
