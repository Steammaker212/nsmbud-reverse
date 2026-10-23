/* sub_6089063C
 * address: 0x6089063C   size: 88   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6089063C(int a1, int a2, int a3, float a4)
{
  int result; // r0
  int v8; // r1
  int v9; // r6

  result = FIELD_U8(a1, 26);
  if ( result )
  {
    result = a1 + 4 * a2;
    v8 = FIELD_U32(result, 116);
    if ( v8 )
    {
      do
      {
        v9 = FIELD_U32(v8, 416);
        result = sub_6089040C((_DWORD *)a1, v8, a3, a4);
        v8 = v9;
      }
      while ( v9 );
    }
  }
  return result;
}
