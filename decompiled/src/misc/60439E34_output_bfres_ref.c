/* output_bfres_ref
 * address: 0x60439E34   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall output_bfres_ref(int a1, int a2, int a3)
{
  int v5; // r7
  nn__util__BinaryFileHeader *v6; // r0
  int v7; // r3
  _DWORD v9[8]; // [sp+8h] [bp-20h] BYREF

  v5 = sub_60822808(ArchiveManagerMaybe_instance);
  sead__CriticalSection__lock(a1 + 184);
  FIELD_U32(a1, 176) |= 0x10u;
  v9[0] = &sead__SafeStringBase__vtable;
  v9[1] = "output.bfres";
  v6 = (nn__util__BinaryFileHeader *)sub_608228E4(ArchiveManagerMaybe_instance, v5, v9, 0);
  sub_60439F74(a1, v6, v5, v7, 0, a3);
  return sead__CriticalSection__unlock(a1 + 184);
}
