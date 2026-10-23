/* sub_601BD014
 * address: 0x601BD014   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_DWORD *__fastcall sub_601BD014(_DWORD *result, int a2, int a3, int a4)
{
  unsigned int *v4; // lr
  unsigned int v5; // r12
  unsigned int v6; // r3

  if ( a3 != 1 )
  {
    v4 = result + 277;
    v6 = result[277] & 0xFFFFFAFF | 0x100;
    goto LABEL_5;
  }
  result[257] = a2;
  v4 = result + 277;
  v5 = result[277] & 0xFFFFFAFF;
  result[277] = v5 | 0x400;
  if ( a4 == 1 )
  {
    v6 = v5 | 0x20400;
LABEL_5:
    *v4 = v6;
  }
  result[255] = a2;
  result[256] = a2;
  return result;
}
