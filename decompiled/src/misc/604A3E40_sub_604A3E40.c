/* sub_604A3E40
 * address: 0x604A3E40   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604A3E40(int a1)
{
  int result; // r0
  _DWORD v3[4]; // [sp+8h] [bp-10h] BYREF

  v3[0] = &sead__SafeStringBase__vtable;
  v3[1] = dword_60CA132C;
  sub_6047467C((_DWORD *)(a1 + 48), 0x10u, v3, (int)&dword_60CA13B0, 1.0, 0);
  result = dword_60C99E24;
  if ( dword_60C99E24 )
  {
    result = sub_603FF0A8(dword_60C99E24, a1);
    if ( result )
      FIELD_U8(result, 40112) = 1;
  }
  return result;
}
