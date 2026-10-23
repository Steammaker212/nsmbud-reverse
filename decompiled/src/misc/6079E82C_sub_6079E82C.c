/* sub_6079E82C
 * address: 0x6079E82C   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6079E82C(_BYTE *a1, int a2)
{
  int v4; // r1
  int result; // r0
  int v6; // r0
  int v7; // r6
  int v8; // r1
  unsigned int v9; // r2

  v4 = sub_60766708((int)a1);
  result = 0;
  if ( a2 && !v4 )
  {
    v6 = *((_DWORD *)a1 + 306);
    v7 = v6 & 0x10;
    if ( (v6 & 0x20) != 0 )
      *((_DWORD *)a1 + 306) = v6 | 0x10;
    v8 = (*(int (__fastcall **)(_BYTE *, int, int))(*(_DWORD *)a1 + 1432))(a1, a2, 3);
    result = 0;
    if ( v8 == 1 )
    {
      if ( (a1[1211] & 0x28) != 0 || (a1[1213] & 0x20) != 0 )
        (*(void (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 1108))(a1);
      (*(void (__fastcall **)(_BYTE *, float))(*(_DWORD *)a1 + 1088))(a1, *((float *)a1 + 29) + 200.0);
      result = 1;
    }
    v9 = *((_DWORD *)a1 + 306) & 0xFFFFFFEF;
    if ( v7 )
      v9 = *((_DWORD *)a1 + 306) | 0x10;
    *((_DWORD *)a1 + 306) = v9;
  }
  return result;
}
