/* sub_60944EA8
 * address: 0x60944EA8   size: 196   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60944EA8(_BYTE *a1, _BYTE *a2)
{
  int v4; // r6
  int result; // r0
  void *v6; // r6
  const void *v7; // r7

  v4 = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 28))(a1);
  result = (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a2 + 28))(a2);
  if ( v4 == result )
  {
    v6 = (void *)(*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 36))(a1);
    v7 = (const void *)(*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a2 + 32))(a2);
    qmemcpy(v6, v7, (*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 48))(a1));
    a1[20] = a2[20];
    a1[23] = a2[23];
    a1[32] = a2[32];
    a1[35] = a2[35];
    a1[44] = a2[44];
    a1[47] = a2[47];
    a1[56] = a2[56];
    result = (unsigned __int8)a2[59];
    a1[59] = result;
  }
  return result;
}
