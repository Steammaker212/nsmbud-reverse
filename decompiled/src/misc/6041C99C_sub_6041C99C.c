/* sub_6041C99C
 * address: 0x6041C99C   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6041C99C(_DWORD *a1)
{
  int result; // r0
  void *v3; // r0
  void *v4; // r0
  void *v5; // r0

  result = a1[36];
  if ( result )
  {
    sub_6041CC20(a1);
    v3 = (void *)a1[192];
    if ( v3 )
    {
      operator_delete_8DE3FC(v3);
      a1[191] = 0;
      a1[192] = 0;
    }
    v4 = (void *)a1[190];
    if ( v4 )
    {
      operator_delete_8DE3FC(v4);
      a1[189] = 0;
      a1[190] = 0;
    }
    sub_6083DBB8(a1 + 35, FIELD_U32(dword_60CCFC8C, 24));
    sub_60913ABC(a1 + 186);
    sub_60913AD4(a1 + 186);
    sub_60913ABC(a1 + 110);
    sub_60913AD4(a1 + 110);
    v5 = (void *)a1[36];
    if ( v5 )
      operator_delete(v5);
    a1[36] = 0;
    return 0;
  }
  return result;
}
