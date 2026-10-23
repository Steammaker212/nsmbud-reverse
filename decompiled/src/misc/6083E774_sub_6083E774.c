/* sub_6083E774
 * address: 0x6083E774   size: 92   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083E774(int a1)
{
  int v1; // r1
  int result; // r0
  int FileSize; // r4
  int v4[3]; // [sp+0h] [bp-18h] BYREF
  int v5; // [sp+Ch] [bp-Ch]

  sub_60847920(a1);
  v1 = nn__fs__OpenFile();
  result = 0;
  if ( !v1 )
  {
    FileSize = nn__fs__GetFileSize(v4, v5);
    nn__fs__CloseFile(v5);
    result = v4[0];
    if ( FileSize )
      return 0;
  }
  return result;
}
