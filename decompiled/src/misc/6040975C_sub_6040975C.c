/* sub_6040975C
 * address: 0x6040975C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040975C(int a1, int a2)
{
  _BYTE *v2; // r5
  int result; // r0
  bool v5; // zf

  result = FIELD_U8(a1, 6559);
  if ( result == 1 )
  {
    v5 = a2 == 2;
    if ( a2 == 2 )
    {
      v2 = (_BYTE *)(a1 + 6538);
      result = FIELD_U8(a1, 6538);
      v5 = result == 0;
    }
    if ( v5 )
    {
      FIELD_U32(a1, 6496) = ((int (__fastcall *)(int))loc_605840F8)(dword_60CAF15C);
      *v2 = 1;
      return 1;
    }
  }
  return result;
}
