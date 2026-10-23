/* WmModeDBTmpHeap_ref
 * address: 0x6042F798   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall WmModeDBTmpHeap_ref(int a1, int a2)
{
  int v4; // r6
  _DWORD v6[6]; // [sp+8h] [bp-18h] BYREF

  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "WmModeDBTmpHeap";
  v4 = sub_608F8808(15728640, v6, a2, 4, -1, 0);
  sub_6042F82C(a1, a2);
  sub_6042FB94(a1, a2);
  (*(void (__fastcall **)(int))(*(_DWORD *)v4 + 16))(v4);
  FIELD_U8(a1, 32) = 1;
  return 1;
}
