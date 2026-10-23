/* sub_6055B7B8
 * address: 0x6055B7B8   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6055B7B8(int a1)
{
  int v2; // r0
  _DWORD *v3; // r4
  int v4; // r0
  _DWORD v6[4]; // [sp+0h] [bp-10h] BYREF

  sub_60502548(a1 + 3608);
  v2 = FIELD_U32(a1, 13312);
  v3 = (_DWORD *)(a1 + 36);
  if ( v2 )
    v4 = InOutR_InOutL_ref(1);
  else
    v4 = InOutR_InOutL_ref(0);
  v6[0] = &sead__SafeStringBase__vtable;
  v6[1] = v4;
  return sub_604741D8(v3, 0, v6, 0);
}
