/* sub_608D94F4
 * address: 0x608D94F4   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D94F4(int a1)
{
  int v1; // r4
  int v2; // r0
  int result; // r0

  v1 = FIELD_U32(a1, 48);
  v2 = FIELD_U32(v1, 9988);
  if ( v2 )
  {
    if ( FIELD_U32(v1, 9984) )
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)v2 + 12))(v2);
      FIELD_U32(v1, 9984) = 0;
    }
    FIELD_U32(v1, 9988) = 0;
  }
  result = FIELD_U32(v1, 24);
  if ( result )
  {
    (*(void (__fastcall **)(int))(*(_DWORD *)result + 8))(result);
    FIELD_U32(v1, 24) = 0;
    FIELD_U16(v1, 16) = 0;
    FIELD_U32(v1, 12) = 0;
    FIELD_U32(v1, 8) = 0;
    FIELD_U32(v1, 4) = 0;
    return 0;
  }
  return result;
}
