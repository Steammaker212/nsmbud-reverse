/* sub_60908DA4
 * address: 0x60908DA4   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60908DA4(int a1)
{
  int result; // r0
  int v3; // r6
  int v4; // r7

  result = sub_609095C0();
  v3 = FIELD_U32(a1, 336);
  if ( v3 != a1 + 332 )
  {
    v4 = FIELD_U32(a1, 344);
    result = v3 - v4;
    do
    {
      (*(void (__fastcall **)(int))(*(_DWORD *)result + 20))(result);
      v3 = FIELD_U32(v3, 4);
      result = v3 - v4;
    }
    while ( v3 - v4 != a1 + 332 - FIELD_U32(a1, 344) );
  }
  return result;
}
