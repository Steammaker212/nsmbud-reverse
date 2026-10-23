/* sub_603B3B14
 * address: 0x603B3B14   size: 264   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603B3B14(int a1)
{
  _DWORD **v1; // r4
  unsigned int v2; // r1
  unsigned int v3; // r2
  _DWORD *v4; // t1
  _DWORD *v6; // [sp+0h] [bp-50h] BYREF
  unsigned int v7; // [sp+4h] [bp-4Ch] BYREF
  unsigned int v8; // [sp+8h] [bp-48h] BYREF
  float32x2_t v9; // [sp+10h] [bp-40h] BYREF
  int v10; // [sp+18h] [bp-38h]
  _DWORD *v11; // [sp+1Ch] [bp-34h]
  int v12; // [sp+20h] [bp-30h]
  int v13; // [sp+24h] [bp-2Ch]
  int v14; // [sp+28h] [bp-28h]
  _DWORD *v15; // [sp+2Ch] [bp-24h]
  int v16; // [sp+30h] [bp-20h]
  int v17; // [sp+34h] [bp-1Ch]
  int v18; // [sp+38h] [bp-18h]
  _DWORD *v19; // [sp+3Ch] [bp-14h]

  v1 = (_DWORD **)a1;
  StateMgr__execute((StateMgr *)(a1 + 6084));
  v2 = (unsigned int)v1[40];
  v3 = (unsigned int)v1[41];
  v6 = v1[39];
  v7 = v2;
  v8 = v3;
  v9.n64_u64[0] = 1065353216;
  v10 = 0;
  v12 = 0;
  v13 = 1065353216;
  v14 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 1065353216;
  v11 = v1[27];
  v15 = v1[28];
  v19 = v1[29];
  Mtx34_rotateY(&v9, &v7);
  Mtx34_rotateX(&v9, (unsigned int *)&v6);
  Mtx34_rotateZ(&v9, &v8);
  v4 = v1[1526];
  v1 += 1526;
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)*v4 + 60))(*v4, &v9);
  (*(void (__fastcall **)(_DWORD, _DWORD **))(*(_DWORD *)**v1 + 68))(**v1, v1 - 1490);
  sub_604218E0(*v1);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v1 + 52))(**v1);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v1 + 56))(**v1);
  return 1;
}
