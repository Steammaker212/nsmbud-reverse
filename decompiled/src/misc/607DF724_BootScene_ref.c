/* BootScene_ref
 * address: 0x607DF724   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall BootScene_ref(_DWORD *a1)
{
  _DWORD *v2; // r0
  int v3; // r0
  int v5[2]; // [sp+0h] [bp-98h] BYREF
  _DWORD v6[36]; // [sp+8h] [bp-90h] BYREF

  sub_60238950(dword_60C8D9DC);
  v5[0] = 2;
  v5[1] = (int)sub_607DF83C;
  sub_608EF048(v6, v5);
  BYTE1(v6[5 * v6[22] + 6]) = 1;
  v6[28] = a1 + 74;
  sub_608EF744(a1, v6);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = "BootScene";
  a1[67] = a1;
  a1[68] = sub_607DF868;
  a1[69] = 0;
  a1[66] = off_60C26618;
  sead__SafeStringBase__operator_assign((int)(a1 + 61), (int)v6);
  a1[63] = 1;
  v2 = *(_DWORD **)(dword_60CD0B40 + 36);
  if ( FIELD_U32(dword_60CD0B40, 32) > 0xEu )
    v2 += 14;
  sub_6095537C(*v2, 1, a1 + 57);
  v3 = sub_608EF75C(a1);
  return sub_608EDBD0(v3);
}
