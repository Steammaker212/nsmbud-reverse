/* sub_606E8D80
 * address: 0x606E8D80   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E8D80(int a1)
{
  if ( FIELD_U32(dword_60C99DD4, 764) == 3 )
  {
    sub_6045BF58(a1 + 1864, 4);
    sub_609094C4(a1 + 1864, 0x7FFFF, 30, 5);
    sub_6045BF58(a1 + 2268, 0);
    return sub_606E8DFC(a1);
  }
  else
  {
    FIELD_U8(a1, 165) = 0;
    FIELD_U8(a1, 168) = 0;
    return 0;
  }
}
