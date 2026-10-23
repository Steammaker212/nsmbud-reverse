/* sub_60768540
 * address: 0x60768540   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60768540(_DWORD *a1)
{
  int v2; // r5
  unsigned int result; // r0

  sub_6078667C(a1 + 172, 1);
  v2 = 0;
  a1[2428] = 0;
  result = a1[2424];
  if ( result >= 2 )
  {
    v2 = 2;
    if ( result != 2 )
      return result;
  }
  else
  {
    sub_607780C4(dword_60CBFA90, 1);
  }
  a1[2426] = v2;
  return 9704;
}
