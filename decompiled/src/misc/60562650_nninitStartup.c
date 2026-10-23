/* nninitStartup
 * address: 0x60562650   size: 72   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __cdecl nninitStartup()
{
  unsigned int v0; // r2
  void *v1; // [sp+4h] [bp-2Ch] BYREF
  _DWORD v2[10]; // [sp+8h] [bp-28h] BYREF

  nninitStartup_helper();
  nn__os__QueryMemoryInfo((int)v2);
  nn__os__SetMemoryHeapSize((v2[0] - v2[2]) & 0xFFE00000);
  nn__os__AllocateMemoryBlock((nn__os *)&v1, (unsigned int *)0x2000000, v0);
  nn__init__InitializeAllocator(v1, 0x2000000u);
}
