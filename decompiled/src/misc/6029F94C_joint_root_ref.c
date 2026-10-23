/* joint_root_ref
 * address: 0x6029F94C   size: 868   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall joint_root_ref(int a1)
{
  unsigned int v2; // r6
  unsigned int v3; // r5
  int v4; // r0
  int v5; // r1
  int v6; // r2
  unsigned int v7; // r3
  _DWORD **v8; // r6
  _DWORD **v9; // r4
  int v10; // r0
  int (__fastcall *v11)(int, int (***)()); // r2
  int v12; // r0
  int result; // r0
  _DWORD **v14; // r5
  void (__fastcall ***v15)(_DWORD, _DWORD, float32x2_t *, unsigned int *, int (***)()); // r0
  unsigned int *v16; // r7
  unsigned int v17; // t1
  unsigned int v18; // r2
  void (__fastcall ***v19)(_DWORD, int, float32x2_t *, unsigned int *, int (***)(), int); // r0
  unsigned int v20; // r1
  unsigned int v21; // r2
  int v22; // r0
  int v23; // r1
  const char *v24; // r6
  unsigned int v25; // r4
  int v26; // r2
  int (**v27)(); // r3
  int v28; // [sp+4h] [bp-94h]
  int (**v29)(); // [sp+8h] [bp-90h] BYREF
  const char *v30; // [sp+Ch] [bp-8Ch] BYREF
  unsigned int v31[10]; // [sp+10h] [bp-88h] BYREF
  float32x2_t v32; // [sp+38h] [bp-60h] BYREF
  int v33; // [sp+40h] [bp-58h]
  int v34; // [sp+44h] [bp-54h]
  int v35; // [sp+48h] [bp-50h]
  int v36; // [sp+4Ch] [bp-4Ch]
  int v37; // [sp+50h] [bp-48h]
  int v38; // [sp+54h] [bp-44h]
  int v39; // [sp+58h] [bp-40h]
  int v40; // [sp+5Ch] [bp-3Ch]
  int v41; // [sp+60h] [bp-38h]
  int v42; // [sp+64h] [bp-34h]
  unsigned int v43; // [sp+68h] [bp-30h] BYREF
  unsigned int v44; // [sp+6Ch] [bp-2Ch] BYREF
  unsigned int v45; // [sp+70h] [bp-28h] BYREF

  v2 = FIELD_U32(a1, 160);
  v3 = FIELD_U32(a1, 164);
  v4 = FIELD_U32(a1, 112);
  v5 = FIELD_U32(a1, 116);
  v6 = FIELD_U32(a1, 108);
  v7 = FIELD_U32(a1, 156);
  v32.n64_u64[0] = 1065353216;
  v33 = 0;
  v35 = 0;
  v36 = 1065353216;
  v37 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 1065353216;
  v45 = v3;
  v44 = v2;
  v34 = v6;
  v38 = v4;
  v42 = v5;
  v43 = v7;
  Mtx34_rotateY(&v32, &v44);
  Mtx34_rotateX(&v32, &v43);
  Mtx34_rotateZ(&v32, &v45);
  v8 = (_DWORD **)(a1 + 6300);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6300) + 60))(**(_DWORD **)(a1 + 6300), &v32);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v8 + 68))(**v8, a1 + 6552);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6300));
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v8 + 52))(**v8);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v8 + 56))(**v8);
  v9 = (_DWORD **)(a1 + 6308);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(***(_DWORD ***)(a1 + 6308) + 60))(**(_DWORD **)(a1 + 6308), &v32);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v9 + 68))(**v9, a1 + 144);
  ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6308));
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v9 + 52))(**v9);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v9 + 56))(**v9);
  v10 = **(_DWORD **)(a1 + 6300);
  v11 = *(int (__fastcall **)(int, int (***)()))(*(_DWORD *)v10 + 84);
  v29 = &sead__SafeStringBase__vtable;
  v30 = "joint_root";
  v12 = v11(v10, &v29);
  (*(void (__fastcall **)(_DWORD, int, int (***)()))(*(_DWORD *)**v8 + 108))(**v8, v12, &v29);
  FIELD_U32(a1, 6420) = v31[1];
  FIELD_U32(a1, 6424) = v31[5];
  FIELD_U32(a1, 6428) = v31[9];
  result = FIELD_U8(a1, 6472);
  if ( FIELD_U8(a1, 6472) )
  {
    v14 = (_DWORD **)(a1 + 6312);
    v15 = (void (__fastcall ***)(_DWORD, _DWORD, float32x2_t *, unsigned int *, int (***)()))(*(int (__fastcall **)(_DWORD, _DWORD))(***(_DWORD ***)(a1 + 6312) + 132))(
                                                                                               **(_DWORD **)(a1 + 6312),
                                                                                               0);
    v17 = FIELD_U32(a1, 6444);
    v16 = (unsigned int *)(a1 + 6444);
    v18 = v16[1];
    v29 = 0;
    v43 = 0;
    v30 = 0;
    v32.n64_u64[0] = __PAIR64__(v18, v17);
    (**v15)(v15, 0, &v32, &v43, &v29);
    v19 = (void (__fastcall ***)(_DWORD, int, float32x2_t *, unsigned int *, int (***)(), int))(*(int (__fastcall **)(_DWORD, _DWORD))(*(_DWORD *)**v14 + 132))(
                                                                                                 **v14,
                                                                                                 0);
    v20 = *v16;
    v21 = v16[1];
    v29 = 0;
    v43 = 0;
    v30 = 0;
    v32.n64_u64[0] = __PAIR64__(v21, v20);
    (**v19)(v19, 1, &v32, &v43, &v29, v28);
    v22 = *(v16 - 2);
    v23 = *(v16 - 1);
    v24 = (const char *)v16[4];
    v25 = v16[5];
    v26 = *(v16 - 3);
    v27 = (int (**)())v16[3];
    v32.n64_u64[0] = 1065353216;
    v33 = 0;
    v35 = 0;
    v36 = 1065353216;
    v37 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 1065353216;
    v31[0] = v25;
    v30 = v24;
    v34 = v26;
    v38 = v22;
    v42 = v23;
    v29 = v27;
    Mtx34_rotateY(&v32, (unsigned int *)&v30);
    Mtx34_rotateX(&v32, (unsigned int *)&v29);
    Mtx34_rotateZ(&v32, v31);
    (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)**v14 + 60))(**v14, &v32);
    (*(void (__fastcall **)(_DWORD, unsigned int *))(*(_DWORD *)**v14 + 68))(**v14, v16);
    (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v14 + 52))(**v14);
    return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)**v14 + 56))(**v14);
  }
  return result;
}
