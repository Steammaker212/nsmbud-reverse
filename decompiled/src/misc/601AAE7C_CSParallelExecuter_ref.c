/* CSParallelExecuter_ref
 * address: 0x601AAE7C   size: 716   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall CSParallelExecuter_ref(_DWORD *a1, void *a2)
{
  int *v4; // r6
  int v5; // r7
  _DWORD *v6; // r0
  int v7; // r0
  int v8; // r0
  _DWORD *v9; // r0
  int v10; // r0
  int *v11; // r5
  int *v12; // r6
  int v13; // r8
  _DWORD *v14; // r0
  int v15; // r0
  int v16; // r0
  _DWORD *v17; // r0
  int result; // r0
  int v19; // [sp+18h] [bp-30h] BYREF
  int (**v20)(); // [sp+1Ch] [bp-2Ch] BYREF
  const char *v21; // [sp+20h] [bp-28h]

  v4 = (int *)operator_new_8DE25C(0xCu, a2, 4);
  v5 = operator_new_8DE25C(0x94u, a2, 4);
  v20 = &sead__SafeStringBase__vtable;
  v21 = "CSParallelExecuter";
  v6 = (_DWORD *)operator_new_8DE25C(0x10u, a2, 4);
  v6[1] = a1;
  v6[2] = sub_601AB178;
  v6[3] = 0;
  *v6 = off_60BD63DC;
  sub_6090891C(v5, &v20, v6, a2, dword_60C8A550, 0, 0x7FFFFFFF, 20480, 32);
  *v4 = v5;
  v7 = *v4;
  v20 = (int (**)())dword_60C8A554;
  v19 = 1 << dword_60C8A554;
  sub_60908478(v7, &v19);
  (*(void (__fastcall **)(int))(*(_DWORD *)*v4 + 24))(*v4);
  v8 = operator_new_8DE25C(0x1Cu, a2, 4);
  v4[1] = sub_60907FA4(v8, 1);
  v9 = (_DWORD *)operator_new_8DE25C(8u, a2, 4);
  *v9 = &sead__SafeStringBase__vtable;
  v9[1] = &byte_60ABC94D;
  v4[2] = (int)v9;
  v11 = a1 + 4098;
  v10 = a1[4098];
  if ( v10 < a1[4099] )
  {
    *(_DWORD *)(a1[4100] + 4 * v10) = v4;
    ++*v11;
  }
  v12 = (int *)operator_new_8DE25C(0xCu, a2, 4);
  v13 = operator_new_8DE25C(0x94u, a2, 4);
  v20 = &sead__SafeStringBase__vtable;
  v21 = "CSParallelExecuter";
  v14 = (_DWORD *)operator_new_8DE25C(0x10u, a2, 4);
  v14[1] = a1;
  v14[2] = sub_601AB178;
  v14[3] = 0;
  *v14 = off_60BD63DC;
  sub_6090891C(v13, &v20, v14, a2, dword_60C8A550, 0, 0x7FFFFFFF, 20480, 32);
  *v12 = v13;
  v15 = *v12;
  v20 = (int (**)())dword_60C8A558;
  v19 = 1 << dword_60C8A558;
  sub_60908478(v15, &v19);
  (*(void (__fastcall **)(int))(*(_DWORD *)*v12 + 24))(*v12);
  v16 = operator_new_8DE25C(0x1Cu, a2, 4);
  v12[1] = sub_60907FA4(v16, 1);
  v17 = (_DWORD *)operator_new_8DE25C(8u, a2, 4);
  *v17 = &sead__SafeStringBase__vtable;
  v17[1] = &byte_60ABC94D;
  v12[2] = (int)v17;
  result = *v11;
  if ( *v11 < a1[4099] )
  {
    *(_DWORD *)(a1[4100] + 4 * result) = v12;
    result = *v11 + 1;
    *v11 = result;
  }
  return result;
}
