/* sub_60149A4C
 * address: 0x60149A4C   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60149A4C(unsigned int *a1)
{
  unsigned int *v1; // r4
  _DWORD *v2; // t1
  float32x2_t v4; // [sp+0h] [bp-40h] BYREF
  int v5; // [sp+8h] [bp-38h]
  unsigned int v6; // [sp+Ch] [bp-34h]
  int v7; // [sp+10h] [bp-30h]
  int v8; // [sp+14h] [bp-2Ch]
  int v9; // [sp+18h] [bp-28h]
  unsigned int v10; // [sp+1Ch] [bp-24h]
  int v11; // [sp+20h] [bp-20h]
  int v12; // [sp+24h] [bp-1Ch]
  int v13; // [sp+28h] [bp-18h]
  unsigned int v14; // [sp+2Ch] [bp-14h]

  v1 = a1;
  v4.n64_u64[0] = 1065353216;
  v5 = 0;
  v7 = 0;
  v8 = 1065353216;
  v9 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 1065353216;
  v6 = a1[27];
  v10 = a1[28];
  v14 = a1[29];
  Mtx34_rotateY(&v4, a1 + 40);
  Mtx34_rotateX(&v4, v1 + 39);
  Mtx34_rotateZ(&v4, v1 + 41);
  v2 = (_DWORD *)v1[1618];
  v1 += 1618;
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v2 + 60))(*v2, &v4);
  (*(void (__fastcall **)(_DWORD, unsigned int *))(**(_DWORD **)*v1 + 68))(*(_DWORD *)*v1, v1 - 1582);
  (*(void (__fastcall **)(_DWORD))(**(_DWORD **)*v1 + 52))(*(_DWORD *)*v1);
  return (*(int (__fastcall **)(_DWORD))(**(_DWORD **)*v1 + 56))(*(_DWORD *)*v1);
}
