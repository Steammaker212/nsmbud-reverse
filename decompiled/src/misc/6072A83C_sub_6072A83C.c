/* sub_6072A83C
 * address: 0x6072A83C   size: 24   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072A83C(int a1, unsigned int a2)
{
  if ( a2 >= 0x40 )
    a2 = 0;
  return *(unsigned __int8 *)(a1 + 24 * a2 + 809);
}
