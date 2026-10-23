/* sub_608E2E24
 * address: 0x608E2E24   size: 84   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E2E24(int a1, _DWORD *a2, int a3)
{
  _DWORD *v5; // r0
  int v6; // r5
  int FileSize; // r0
  _DWORD v9[6]; // [sp+0h] [bp-18h] BYREF

  v5 = (_DWORD *)sub_608E78F8(a1, a3);
  v6 = 0;
  v9[1] = 0;
  v9[0] = 0;
  FileSize = nn__fs__GetFileSize(v9, *v5);
  FIELD_U32(a1, 80) = FileSize;
  if ( !FileSize )
  {
    v6 = 1;
    *a2 = v9[0];
  }
  return v6;
}
