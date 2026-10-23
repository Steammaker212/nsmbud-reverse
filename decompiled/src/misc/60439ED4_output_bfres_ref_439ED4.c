/* output_bfres_ref_439ED4
 * address: 0x60439ED4   size: 144   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall output_bfres_ref_439ED4(int a1, int a2, int a3, int a4, int a5)
{
  int v8; // r4
  nn__util__BinaryFileHeader *v9; // r0
  int v10; // r3
  _DWORD v12[8]; // [sp+8h] [bp-20h] BYREF

  v8 = a1 + 184;
  sead__CriticalSection__lock(a1 + 184);
  FIELD_U32(a1, 176) |= 0x10u;
  v12[0] = &sead__SafeStringBase__vtable;
  v12[1] = "output.bfres";
  v9 = (nn__util__BinaryFileHeader *)sub_608228E4(ArchiveManagerMaybe_instance, a2, v12, 0);
  sub_60439F74(a1, v9, a2, v10, a4, a5);
  return sead__CriticalSection__unlock(v8);
}
