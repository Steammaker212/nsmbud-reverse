/* sub_608E6C04
 * address: 0x608E6C04   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608E6C04(_BYTE *a1, _DWORD *a2, int a3, int a4, unsigned int a5)
{
  int v9; // r4
  bool v10; // zf
  int v11; // r4
  int v12; // r0
  unsigned int v13; // r1
  _DWORD v15[9]; // [sp+4h] [bp-24h] BYREF

  v9 = 0;
  v10 = a3 == 0;
  if ( a3 )
    v10 = a1[76] == 0;
  if ( !v10 && (*(int (__fastcall **)(_BYTE *, int))(*(_DWORD *)a1 + 32))(a1, a3) == 1 )
  {
    v11 = 0;
    v15[0] = 0;
    v12 = (*(int (__fastcall **)(_BYTE *, _DWORD *, int, int, unsigned int))(*(_DWORD *)a1 + 104))(a1, v15, a3, a4, a5);
    v13 = v15[0];
    if ( a2 )
      *a2 = v15[0];
    if ( v13 <= a5 )
      v11 = 1;
    return v12 & v11;
  }
  return v9;
}
