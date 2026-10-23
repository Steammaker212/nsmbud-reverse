/* mf_root_param_ref
 * address: 0x609A6DB0   size: 764   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall mf_root_param_ref(int a1, void *a2)
{
  int v2; // r7
  int v3; // r4
  int v4; // r5
  int v7; // r6
  _DWORD *v8; // r10
  int v9; // r1
  _DWORD *v10; // r5
  int v11; // r1
  _DWORD *v12; // r9
  _DWORD *v13; // r5
  int v14; // r1
  _DWORD *v15; // r5
  int v16; // r1
  int v20; // [sp+10h] [bp-70h]
  int v21; // [sp+18h] [bp-68h]
  int (**v22)(); // [sp+28h] [bp-58h] BYREF
  const char *v23; // [sp+2Ch] [bp-54h]
  int v24; // [sp+54h] [bp-2Ch] BYREF
  const char *v25; // [sp+58h] [bp-28h]

  v2 = 0;
  v3 = 496;
  v4 = 412;
  v20 = a1 + 4;
  do
  {
    v21 = v4;
    sub_609A75EC(&v24, v2);
    (*(void (__fastcall **)(int *))(v24 + 12))(&v24);
    v22 = &sead__SafeStringBase__vtable;
    v23 = v25;
    v7 = a1 + v3;
    sub_60947328(v20, a1 + v3, (int *)&v22);
    v8 = sub_609A7954(v2, 0, a2);
    sub_609A7DCC(v8, a1);
    sub_609A75EC(&v24, v2);
    (*(void (__fastcall **)(int *))(v24 + 12))(&v24);
    sub_6017D524(&v22, "%s_%d", v25, 0);
    v9 = (int)v8;
    if ( v8 )
      v9 = (int)(v8 + 5);
    sub_60947328(a1 + v3, v9, (int *)&v22);
    *(_DWORD *)(a1 + 16 * v2 + 748) = v8;
    v10 = sub_609A7954(v2, 1, a2);
    sub_609A7DCC(v10, a1);
    sub_609A75EC(&v24, v2);
    (*(void (__fastcall **)(int *))(v24 + 12))(&v24);
    sub_6017D524(&v22, "%s_%d", v25, 1);
    v11 = (int)v10;
    if ( v10 )
      v11 = (int)(v10 + 5);
    sub_60947328(a1 + v3, v11, (int *)&v22);
    v12 = (_DWORD *)(a1 + 16 * v2);
    v12[188] = v10;
    v13 = sub_609A7954(v2, 2, a2);
    sub_609A7DCC(v13, a1);
    sub_609A75EC(&v24, v2);
    (*(void (__fastcall **)(int *))(v24 + 12))(&v24);
    sub_6017D524(&v22, "%s_%d", v25, 2);
    v14 = (int)v13;
    if ( v13 )
      v14 = (int)(v13 + 5);
    sub_60947328(v7, v14, (int *)&v22);
    v12[189] = v13;
    v15 = sub_609A7954(v2, 3, a2);
    sub_609A7DCC(v15, a1);
    sub_609A75EC(&v24, v2);
    (*(void (__fastcall **)(int *))(v24 + 12))(&v24);
    sub_6017D524(&v22, "%s_%d", v25, 3);
    v16 = (int)v15;
    if ( v15 )
      v16 = (int)(v15 + 5);
    sub_60947328(v7, v16, (int *)&v22);
    v12[190] = v15;
    ++v2;
    v3 += 36;
    v4 = v21 + 12;
  }
  while ( v2 != 7 );
  sub_609ACC34(a1 + 1640, 128, a2);
  v22 = &sead__SafeStringBase__vtable;
  v23 = "mf_root_param";
  return sub_60947360(v20, a1 + 1704, (int *)&v22);
}
