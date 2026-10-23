/* sub_6029972C
 * address: 0x6029972C   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6029972C(int a1)
{
  int result; // r0

  sub_602A7CEC();
  if ( FIELD_U8(a1, 6673) )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 732))(a1);
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 760))(a1);
    result = 1;
  }
  else
  {
    FIELD_U32(a1, 160) = 0;
    (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 756))(a1);
    result = 2;
  }
  FIELD_U32(a1, 6748) = result;
  return result;
}
