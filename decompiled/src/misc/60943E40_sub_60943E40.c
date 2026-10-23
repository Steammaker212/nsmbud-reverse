/* sub_60943E40
 * address: 0x60943E40   size: 148   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60943E40(_BYTE *a1, _BYTE *a2)
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
    result = (unsigned __int8)a2[23];
    a1[23] = result;
  }
  return result;
}
