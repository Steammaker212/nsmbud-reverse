/* wrist0_ref
 * address: 0x60681BD8   size: 704   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall wrist0_ref(int a1)
{
  float v2; // s0
  int v3; // r1
  int v4; // r8
  float v5; // s2
  float v6; // s16
  _DWORD **v7; // r4
  int v8; // r0
  int (__fastcall *v9)(int, int *); // r2
  int v10; // r0
  _DWORD **v11; // r6
  int v12; // r5
  char v13; // r12
  int v14; // r1
  __int16 v15; // r2
  int v17; // [sp+0h] [bp-88h] BYREF
  const char *v18; // [sp+4h] [bp-84h]
  int v19; // [sp+8h] [bp-80h]
  int v20; // [sp+Ch] [bp-7Ch]
  int v21; // [sp+10h] [bp-78h]
  int v22; // [sp+14h] [bp-74h]
  int v23; // [sp+18h] [bp-70h]
  float v24; // [sp+1Ch] [bp-6Ch]
  int v25; // [sp+20h] [bp-68h]
  int v26; // [sp+24h] [bp-64h]
  int v27; // [sp+28h] [bp-60h]
  int v28; // [sp+2Ch] [bp-5Ch]
  float32x2_t v29; // [sp+30h] [bp-58h] BYREF
  int v30; // [sp+38h] [bp-50h]
  int v31; // [sp+3Ch] [bp-4Ch]
  int v32; // [sp+40h] [bp-48h]
  int v33; // [sp+44h] [bp-44h]
  int v34; // [sp+48h] [bp-40h]
  float v35; // [sp+4Ch] [bp-3Ch]
  int v36; // [sp+50h] [bp-38h]
  int v37; // [sp+54h] [bp-34h]
  int v38; // [sp+58h] [bp-30h]
  int v39; // [sp+5Ch] [bp-2Ch]

  v2 = FIELD_F32(a1, 112);
  v3 = FIELD_U32(a1, 116);
  v4 = FIELD_U32(a1, 108);
  v5 = FIELD_F32(a1, 7436);
  v29.n64_u64[0] = 1065353216;
  v30 = 0;
  v32 = 0;
  v33 = 1065353216;
  v34 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 1065353216;
  v31 = v4;
  v6 = v2 + v5;
  v35 = v2 + v5;
  v39 = v3;
  Mtx34_rotateY(&v29, (unsigned int *)(a1 + 160));
  Mtx34_rotateX(&v29, (unsigned int *)(a1 + 156));
  Mtx34_rotateZ(&v29, (unsigned int *)(a1 + 164));
  v7 = (_DWORD **)(a1 + 6112);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 6112) + 68))(**(_DWORD **)(a1 + 6112), a1 + 144);
  (*(void (__fastcall **)(_DWORD, float32x2_t *))(*(_DWORD *)**v7 + 60))(**v7, &v29);
  j_ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6112));
  sub_604218E0(*(float **)(a1 + 6112));
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v7 + 52))(**v7);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v7 + 56))(**v7);
  v8 = **(_DWORD **)(a1 + 6112);
  v9 = *(int (__fastcall **)(int, int *))(*(_DWORD *)v8 + 84);
  v17 = (int)&sead__SafeStringBase__vtable;
  v18 = "wrist0";
  v10 = v9(v8, &v17);
  (*(void (__fastcall **)(_DWORD, int, int *))(*(_DWORD *)**v7 + 108))(**v7, v10, &v17);
  FIELD_U32(a1, 7440) = v20;
  FIELD_F32(a1, 7444) = v24;
  FIELD_U32(a1, 7448) = v28;
  v17 = 1065353216;
  v18 = 0;
  v19 = 0;
  v21 = 0;
  v22 = 1065353216;
  v23 = 0;
  v25 = 0;
  v26 = 0;
  v27 = 1065353216;
  v20 = v4;
  v24 = v6;
  v28 = -979615744;
  v11 = (_DWORD **)(a1 + 6116);
  (*(void (__fastcall **)(_DWORD, int))(***(_DWORD ***)(a1 + 6116) + 68))(**(_DWORD **)(a1 + 6116), a1 + 7480);
  (*(void (__fastcall **)(_DWORD, int *))(*(_DWORD *)**v11 + 60))(**v11, &v17);
  j_ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6116));
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v11 + 52))(**v11);
  v12 = **(_DWORD **)(a1 + 6116);
  if ( ((unsigned int)&dword_60C80400 & ~(1617436144 << v13) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
  {
    dword_60C803FC = (int)&off_60BC3228;
    _cxa_guard_release(&dword_60C80400);
  }
  if ( v12 && (**(int (__fastcall ***)(int, int *))v12)(v12, &dword_60C803FC) == 1 )
  {
    v14 = FIELD_U32(v12, 68);
    v15 = -1;
    FIELD_U32(v14, 44) = a1 + 6104;
    if ( FIELD_U16(v14, 40) > 1u )
      v15 = 1;
    FIELD_U16(v14, 42) = v15;
  }
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)**v11 + 56))(**v11);
}
