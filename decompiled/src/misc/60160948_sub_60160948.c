/* sub_60160948
 * address: 0x60160948   size: 124   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60160948(_DWORD *a1)
{
  int v2; // r5
  int result; // r0

  v2 = a1[39];
  a1[39] = a1[38];
  (*(void (__fastcall **)(_DWORD *))(a1[63] + 16))(a1 + 63);
  (*(void (__fastcall **)(_DWORD *))(a1[66] + 16))(a1 + 66);
  (*(void (__fastcall **)(_DWORD *))(a1[69] + 16))(a1 + 69);
  (*(void (__fastcall **)(_DWORD *))(a1[72] + 16))(a1 + 72);
  (*(void (__fastcall **)(_DWORD *))(*a1 + 28))(a1);
  result = (*(int (__fastcall **)(_DWORD *))(*a1 + 24))(a1);
  a1[39] = v2;
  return result;
}
