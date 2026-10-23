/* sead__TaskBase__attachMethodWithCheck
 * address: 0x608EF778   size: 24   group: sdklib
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sead__TaskBase__attachMethodWithCheck(int a1)
{
  int v1; // r0

  v1 = *(_DWORD *)(*(_DWORD *)(FIELD_U32(a1, 92) + 40) + 32);
  return (*(int (__fastcall **)(int))(*(_DWORD *)v1 + 16))(v1);
}
