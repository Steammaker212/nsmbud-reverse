/* sub_608DDA9C
 * address: 0x608DDA9C   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608DDA9C(int a1)
{
  int result; // r0
  int v3; // r0
  void *v4; // r0

  result = FIELD_U8(a1, 124);
  if ( result )
  {
    v3 = FIELD_U32(a1, 180);
    if ( v3 )
      (*(void (__fastcall **)(int, _DWORD))(*(_DWORD *)v3 + 40))(v3, 0);
    if ( FIELD_U8(a1, 192) )
      sub_608ADFE8();
    v4 = *(void **)(a1 + 120);
    if ( v4 )
      operator_delete_8DE3FC(v4);
    FIELD_U32(a1, 120) = 0;
    result = FIELD_U32(a1, 180);
    if ( result )
    {
      result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 4))(result);
      FIELD_U32(a1, 180) = 0;
    }
    FIELD_U8(a1, 124) = 0;
  }
  return result;
}
