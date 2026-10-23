/* sub_606310C8
 * address: 0x606310C8   size: 244   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606310C8(int a1, _DWORD *a2, _DWORD *a3, int a4, float a5, float a6)
{
  int v11; // r5
  int result; // r0
  _DWORD v13[11]; // [sp+0h] [bp-88h] BYREF
  int v14; // [sp+2Ch] [bp-5Ch]
  _DWORD v15[22]; // [sp+30h] [bp-58h] BYREF

  v11 = **(_DWORD **)(a1 + 4);
  v15[0] = 1065353216;
  v15[1] = 0;
  v15[2] = 0;
  v15[4] = 0;
  v15[5] = 1065353216;
  v15[6] = 0;
  v15[8] = 0;
  v15[9] = 0;
  v15[10] = 1065353216;
  v15[3] = *a3;
  v15[7] = a3[1];
  v15[11] = a3[2];
  (*(void (__fastcall **)(int, _DWORD *, float, float))(*(_DWORD *)v11 + 60))(v11, v15, a5, a6);
  (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 52))(v11);
  sub_606311BC(a1, v11, a4, a5, a6);
  (*(void (__fastcall **)(int))(*(_DWORD *)v11 + 56))(v11);
  (*(void (__fastcall **)(int, _DWORD, _DWORD *))(*(_DWORD *)v11 + 108))(v11, FIELD_U32(a1, 588), v13);
  *a2 = v13[3];
  a2[1] = v13[7];
  result = v14;
  a2[2] = v14;
  return result;
}
