/* sub_6098CE30
 * address: 0x6098CE30   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6098CE30(int a1)
{
  int v2; // r0
  int result; // r0

  v2 = FIELD_U8(a1, 123);
  if ( v2 == 1 )
  {
    FIELD_U8(a1, 123) = 2;
  }
  else if ( !v2 )
  {
    FIELD_U8(a1, 122) = 0;
  }
  FIELD_U8(a1, 121) = 0;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 144))(a1);
  result = FIELD_U32(a1, 112);
  if ( result )
    return (*(int (__fastcall **)(int))(*(_DWORD *)result + 12))(result);
  return result;
}
