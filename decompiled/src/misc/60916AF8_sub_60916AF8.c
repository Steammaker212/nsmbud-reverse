/* sub_60916AF8
 * address: 0x60916AF8   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60916AF8(int a1, int a2)
{
  int v3; // r4
  int v4; // r5
  __int64 v6; // [sp+0h] [bp-20h] BYREF

  v3 = FIELD_U32(a2, 192);
  v4 = dword_60CCF464 + 236;
  sead__CriticalSection__lock(dword_60CCF464 + 236);
  v6 = dword_60CC77EC(v3);
  dword_60CC735C(FIELD_U32(a1, 32), 1, &v6);
  dword_60CC7364(FIELD_U32(a1, 32));
  sub_608F2924(dword_60CCF464);
  dword_60CC77E8(v3);
  return sead__CriticalSection__unlock(v4);
}
