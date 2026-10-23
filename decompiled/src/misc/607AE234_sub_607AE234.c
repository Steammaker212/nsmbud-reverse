/* sub_607AE234
 * address: 0x607AE234   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_607AE234(_BYTE *a1)
{
  int v2; // r4
  int v3; // r0
  bool v4; // zf

  v2 = 0;
  if ( (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 1064))(a1) || (a1[1224] & 0x10) == 0 )
    return v2;
  v3 = sub_60766708((int)a1);
  v4 = v3 == 0;
  if ( !v3 )
    v4 = (a1[1231] & 4) == 0;
  if ( v4 && (v2 = 1, !sub_6078A700()) )
    return sub_6040E3D0(LevelInfo_instance);
  else
    return v2;
}
