/* sub_6083E7D0
 * address: 0x6083E7D0   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6083E7D0()
{
  int v0; // r1
  int result; // r0
  int FileSize; // r4
  _DWORD v3[3]; // [sp+0h] [bp-18h] BYREF
  int v4; // [sp+Ch] [bp-Ch]

  sub_60847954();
  v0 = nn__fs__OpenFile();
  result = 0;
  if ( !v0 )
  {
    FileSize = nn__fs__GetFileSize(v3, v4);
    nn__fs__CloseFile(v4);
    result = v3[0];
    if ( FileSize )
      return 0;
  }
  return result;
}
