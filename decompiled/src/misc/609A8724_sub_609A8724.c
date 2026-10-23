/* sub_609A8724
 * address: 0x609A8724   size: 68   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A8724(int a1, int a2, int a3)
{
  int result; // r0
  int v7; // r7

  result = FIELD_U32(a1, 176);
  if ( result >= 1 )
  {
    v7 = result + 1;
    do
    {
      result = MultiFilterExpand_ref(a1, a2, a3, 1);
      --v7;
    }
    while ( v7 > 1 );
  }
  return result;
}
