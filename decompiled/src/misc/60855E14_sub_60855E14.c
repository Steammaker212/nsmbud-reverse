/* sub_60855E14
 * address: 0x60855E14   size: 208   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60855E14(_DWORD *a1, int a2, int a3, int a4, int a5, int a6, char *a7, int a8, char a9)
{
  int v13; // r0
  _DWORD v15[17]; // [sp+Ch] [bp-64h] BYREF
  char v16; // [sp+50h] [bp-20h]
  char v17; // [sp+51h] [bp-1Fh]
  int v18; // [sp+54h] [bp-1Ch]

  v13 = (*(int (__fastcall **)(int, int, int))(*(_DWORD *)a4 + 32))(a4, 1651276148, a8);
  if ( !v13 )
    return 0;
  v15[0] = 1065353216;
  v15[1] = 1065353216;
  v15[2] = 0;
  v15[3] = 0;
  v15[4] = a5;
  v15[5] = a6;
  v15[6] = 0;
  v15[7] = a1;
  v16 = *a7;
  v17 = a9;
  v15[14] = a1[12];
  v15[15] = a1[13];
  v18 = FIELD_U32(v13, 8);
  return (*(int (__fastcall **)(_DWORD *, int, int, int, int, _DWORD *, _DWORD))(*a1 + 56))(a1, a2, a3, v13, a4, v15, 0);
}
