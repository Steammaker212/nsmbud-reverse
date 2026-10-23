/* sub_608D27CC
 * address: 0x608D27CC   size: 160   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D27CC(int a1, _DWORD *a2, int a3, int a4, int a5)
{
  int result; // r0
  void (__fastcall *v9)(_DWORD *, _DWORD *, int); // r7
  int v10; // r0
  int v11; // r0
  _DWORD v12[12]; // [sp+8h] [bp-30h] BYREF

  sub_608D0F10((_DWORD *)a1, a2, a3, a4, a5);
  result = FIELD_U8(a1, 145);
  if ( FIELD_U8(a1, 145) )
  {
    v12[0] = 6;
    v12[1] = 6;
    v12[2] = 6;
    v12[3] = 6;
    v12[4] = 6;
    v12[5] = 6;
    v9 = *(void (__fastcall **)(_DWORD *, _DWORD *, int))(*a2 + 32);
    v10 = (*(int (__fastcall **)(_DWORD *))(*a2 + 36))(a2);
    v9(a2, v12, v10);
    v11 = (*(int (__fastcall **)(_DWORD *))(*a2 + 36))(a2);
    return sub_608D2498(a1, v12, v11, a3);
  }
  return result;
}
