/* sub_601C3860
 * address: 0x601C3860   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601C3860(_DWORD *a1)
{
  int result; // r0

  result = a1[262];
  if ( result == 1 )
  {
    result = a1[256];
    if ( a1[45] != result )
      return result;
    sub_601B69E0((int)a1);
    result = 2;
  }
  else
  {
    if ( result )
      return result;
    a1[277] |= 0x100u;
    a1[256] = 0;
    result = 1;
  }
  a1[262] = result;
  return result;
}
