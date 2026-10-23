/* sub_6071B638
 * address: 0x6071B638   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6071B638(int a1, _WORD *a2)
{
  int result; // r0
  __int16 *v4; // lr
  int v5; // r2
  int v6; // t1

  result = 0;
  *a2 = 0;
  v4 = &word_60B09E88;
  v5 = 1;
  while ( v5 != 26 )
  {
    *a2 = v5++;
    v6 = (unsigned __int16)*v4++;
    if ( v6 == a1 )
      return 1;
  }
  return result;
}
