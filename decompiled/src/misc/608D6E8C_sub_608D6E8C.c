/* sub_608D6E8C
 * address: 0x608D6E8C   size: 80   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608D6E8C(unsigned int result, int a2, unsigned int a3, unsigned int a4)
{
  _DWORD *v7; // r5

  v7 = (_DWORD *)result;
  if ( a4 )
  {
    sub_608C6F90();
    *v7 = a2;
    v7[1] = a3;
    result = (a3 / a4) & 0xFFFFFFC0;
    v7[2] = result;
    v7[3] = a4;
    v7[4] = 0;
    v7[5] = 0;
  }
  return result;
}
