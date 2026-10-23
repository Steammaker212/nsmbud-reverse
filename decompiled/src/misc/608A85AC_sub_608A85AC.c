/* sub_608A85AC
 * address: 0x608A85AC   size: 56   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A85AC(int a1, int a2, unsigned int a3, int a4, int a5)
{
  int result; // r0
  int v8; // r1

  result = 0;
  if ( a3 >= 0x10 )
  {
    v8 = FIELD_U32(a1, 656);
    if ( v8 )
      return sub_608C6708(a2, v8 + a4, a5);
  }
  return result;
}
