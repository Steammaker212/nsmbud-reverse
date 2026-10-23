/* sub_6024A758
 * address: 0x6024A758   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

_BYTE *__fastcall sub_6024A758(int a1, int a2)
{
  int v2; // r1
  unsigned int v3; // r12
  _BYTE *result; // r0
  char v5; // lr
  int v6; // r3

  v2 = -a2;
  v3 = a1 + 3076;
  result = (_BYTE *)(a1 + 3073);
  do
  {
    v6 = (unsigned __int8)*result;
    v5 = -1;
    if ( v2 + v6 > 0 )
      goto LABEL_4;
    if ( v2 + v6 < 0 )
    {
      v5 = 1;
LABEL_4:
      *result = v5 + v6;
    }
    ++result;
    v2 -= 12;
  }
  while ( (unsigned int)result <= v3 );
  return result;
}
