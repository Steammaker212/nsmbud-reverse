/* sub_6099BE7C
 * address: 0x6099BE7C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6099BE7C(int a1, int a2, unsigned int a3, int a4, int a5)
{
  int result; // r0

  result = 0;
  if ( a3 >= 0x10 )
  {
    if ( FIELD_U8(a1, 784) )
      return sub_6099C238(a2, a1 + 720, a4, a5);
  }
  return result;
}
