/* sub_609A523C
 * address: 0x609A523C   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_609A523C(int result)
{
  _DWORD *v1; // r4
  int v2; // r0
  int v3; // r0
  int v4; // r0
  int v5; // r0

  v1 = (_DWORD *)result;
  if ( result )
  {
    v2 = FIELD_U32(result, 8);
    if ( v2 )
    {
      v3 = v2 - 4;
      if ( v3 )
        sub_609A523C(v3);
    }
    v4 = v1[3];
    if ( v4 )
    {
      v5 = v4 - 4;
      if ( v5 )
        sub_609A523C(v5);
    }
    sub_608DEF98(v1 + 1);
    return (*(int (__fastcall **)(_DWORD *))(*v1 + 4))(v1);
  }
  return result;
}
