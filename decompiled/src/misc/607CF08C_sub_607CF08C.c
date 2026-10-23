/* sub_607CF08C
 * address: 0x607CF08C   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CF08C(int a1)
{
  bool v1; // zf
  int v3; // r0

  v1 = (FIELD_U8(a1, 1219) & 8) == 0;
  if ( (FIELD_U8(a1, 1219) & 8) == 0 )
    v1 = (FIELD_U8(a1, 1233) & 2) == 0;
  if ( v1 && (v3 = sub_607D6C28(a1)) != 0 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v3 + 652))(v3);
  else
    return 0;
}
