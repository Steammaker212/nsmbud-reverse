/* sub_6043E8A4
 * address: 0x6043E8A4   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

char *__fastcall sub_6043E8A4(int a1, int a2)
{
  int v2; // r0

  v2 = FIELD_U32(a1, 104);
  if ( (v2 & (1 << a2)) == 0 )
  {
    while ( a2 )
    {
      a2 = dword_60B0235C[a2];
      if ( (v2 & (1 << a2)) != 0 )
        return off_60BFAA54[a2];
    }
    a2 = 0;
  }
  return off_60BFAA54[a2];
}
