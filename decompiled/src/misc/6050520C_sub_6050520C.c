/* sub_6050520C
 * address: 0x6050520C   size: 96   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6050520C(int a1)
{
  _DWORD v3[4]; // [sp+0h] [bp-10h] BYREF

  FIELD_U8(a1, 3904) = 0;
  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = sub_605057D8(0);
  sub_60473DE4((_DWORD *)a1, 0, v3, 0);
  return (*(int (__fastcall **)(_DWORD))(***(_DWORD ***)(a1 + 3512) + 104))(**(_DWORD **)(a1 + 3512));
}
