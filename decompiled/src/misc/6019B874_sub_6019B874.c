/* sub_6019B874
 * address: 0x6019B874   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6019B874(int a1, int a2)
{
  int v4; // r6
  int i; // r7
  int result; // r0

  v4 = sub_601CF9C0(dword_60C8AEF0);
  for ( i = 0; i < 4; ++i )
  {
    sub_604571EC(dword_60C9CF18, i, *((_DWORD *)*(&off_60BD5D8C + a1) + 1), a2);
    result = FIELD_U32(v4, 272);
    if ( !result )
      break;
    result = (*(int (__fastcall **)(int))(*(_DWORD *)result + 92))(result);
    if ( result != 1 )
      break;
  }
  return result;
}
