/* sub_6083E82C
 * address: 0x6083E82C   size: 104   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6083E82C(int a1, int a2, int a3)
{
  int v4; // r1
  int File; // r6
  int v7; // [sp+Ch] [bp-14h]

  sub_60847920(a3);
  File = nn__fs__OpenFile();
  if ( !File )
  {
    File = nn__fs__ReadFile(v7, v4, 0, 0, a1);
    nn__fs__CloseFile();
  }
  return File;
}
