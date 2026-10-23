/* sub_607BA878
 * address: 0x607BA878   size: 100   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607BA878(_BYTE *a1)
{
  int v2; // r5

  v2 = 0;
  if ( !(*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 1064))(a1)
    && sub_6040E510(LevelInfo_instance)
    && (a1[1221] & 4) != 0 )
  {
    return (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 636))(a1) ^ 1;
  }
  return v2;
}
