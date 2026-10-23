/* sub_6067506C
 * address: 0x6067506C   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067506C(int a1)
{
  char v1; // r12
  int v3; // r5
  int result; // r0

  if ( ((unsigned int)&dword_60CB7BE0[1] & ~(1617383560 << v1) & 1) == 0 && _cxa_guard_acquire(&dword_60CB7BE0[1]) )
  {
    dword_60CB7BF8 = (int)&sead__SafeStringBase__vtable;
    dword_60CB7BFC = (int)"gear_A";
    dword_60CB7C00 = (int)&sead__SafeStringBase__vtable;
    dword_60CB7C04 = (int)"gear_B";
    dword_60CB7C08 = (int)&sead__SafeStringBase__vtable;
    dword_60CB7C0C = (int)"gear_C";
    dword_60CB7C10 = (int)&sead__SafeStringBase__vtable;
    dword_60CB7C14 = (int)"gear_D";
    sub_60000288();
    _cxa_guard_release(&dword_60CB7BE0[1]);
  }
  v3 = **(_DWORD **)(a1 + 6116);
  FIELD_U32(a1, 6180) = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v3 + 84))(v3, &dword_60CB7BF8);
  FIELD_U32(a1, 6248) = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v3 + 84))(v3, &dword_60CB7C00);
  FIELD_U32(a1, 6316) = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v3 + 84))(v3, &dword_60CB7C08);
  result = (*(int (__fastcall **)(int, int *))(*(_DWORD *)v3 + 84))(v3, &dword_60CB7C10);
  FIELD_U32(a1, 6384) = result;
  return result;
}
