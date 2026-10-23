/* sub_6042A9E8
 * address: 0x6042A9E8   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6042A9E8(int a1, _DWORD *a2, unsigned int a3)
{
  int result; // r0

  result = a3;
  if ( a3 <= 5 )
  {
    a2[23] = 1;
    a2[24] = dword_60B02290[a3];
    a2[25] = dword_60B022B0[a3];
    a2[26] = 256;
    a2[27] = 1;
    return 256;
  }
  return result;
}
