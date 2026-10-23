/* sub_60520448
 * address: 0x60520448   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60520448(int a1)
{
  _DWORD *v1; // r4
  int v2; // r0
  _DWORD v4[6]; // [sp+0h] [bp-18h] BYREF

  FIELD_U32(a1, 4296) = 0;
  v1 = (_DWORD *)(a1 + 36);
  v4[0] = &sead__SafeStringBase__vtable;
  v4[1] = sub_6052283C(2);
  sub_60473DE4(v1, 2u, v4, 0);
  *(_DWORD *)(sub_6047482C((int)v1, 2u) + 16) = 0;
  v2 = sub_6047482C((int)v1, 2u);
  return (*(int (__fastcall **)(int, float))(*(_DWORD *)v2 + 96))(v2, 0.0);
}
