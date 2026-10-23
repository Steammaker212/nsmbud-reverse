/* sub_60417FFC
 * address: 0x60417FFC   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60417FFC(int a1, unsigned int a2)
{
  unsigned int v2; // r4
  unsigned int v4; // r0
  int v5; // r7
  int result; // r0

  v2 = a2;
  if ( a2 != 2 )
  {
    v4 = 0;
    if ( a2 < 5 )
      v4 = a2;
    v5 = a1 + 52 * v4;
    sub_6093EA98(dword_60CD09F8, FIELD_U32(v5, 16));
    FIELD_U32(v5, 16) = 0;
  }
  result = 0;
  if ( v2 >= 5 )
    v2 = 0;
  *(_DWORD *)(a1 + 52 * v2 + 56) = 0;
  return result;
}
