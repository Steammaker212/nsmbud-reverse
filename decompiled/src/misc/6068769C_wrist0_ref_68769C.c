/* wrist0_ref_68769C
 * address: 0x6068769C   size: 1060   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall wrist0_ref_68769C(int a1)
{
  unsigned int v2; // r2
  unsigned int v3; // r3
  unsigned int v4; // r7
  float v5; // s0
  int v6; // r12
  int v7; // r8
  float v8; // s4
  float *v9; // r6
  float *v10; // r1
  float *v11; // r0
  float v12; // s2
  float v13; // s6
  float v14; // s8
  float v15; // s1
  float v16; // s9
  float v17; // s12
  float v18; // s5
  float v19; // s13
  float v20; // s16
  float v21; // s6
  float v22; // s16
  _DWORD **v23; // r7
  int v24; // r0
  int (__fastcall *v25)(int, float *); // r2
  char v26; // r0
  float v27; // r2
  float v28; // r1
  float v29; // r0
  float v30; // s10
  _DWORD **v31; // r6
  int v32; // r5
  char v33; // r12
  int v34; // r1
  __int16 v35; // r2
  float v37; // [sp+0h] [bp-88h] BYREF
  float v38; // [sp+4h] [bp-84h]
  float v39; // [sp+8h] [bp-80h]
  float v40; // [sp+Ch] [bp-7Ch]
  float v41; // [sp+10h] [bp-78h]
  float v42; // [sp+14h] [bp-74h]
  float v43; // [sp+18h] [bp-70h]
  float v44; // [sp+1Ch] [bp-6Ch]
  float v45; // [sp+20h] [bp-68h]
  float v46; // [sp+24h] [bp-64h]
  float v47; // [sp+28h] [bp-60h]
  float v48; // [sp+2Ch] [bp-5Ch]
  float v49; // [sp+30h] [bp-58h] BYREF
  float v50; // [sp+34h] [bp-54h]
  float v51; // [sp+38h] [bp-50h]
  int v52; // [sp+3Ch] [bp-4Ch]
  float v53; // [sp+40h] [bp-48h]
  float v54; // [sp+44h] [bp-44h]
  float v55; // [sp+48h] [bp-40h]
  float v56; // [sp+4Ch] [bp-3Ch]
  float v57; // [sp+50h] [bp-38h]
  float v58; // [sp+54h] [bp-34h]
  float v59; // [sp+58h] [bp-30h]
  int v60; // [sp+5Ch] [bp-2Ch]

  v2 = FIELD_U32(a1, 156);
  v3 = FIELD_U32(a1, 160);
  v4 = FIELD_U32(a1, 164);
  v5 = FIELD_F32(a1, 7436);
  v6 = FIELD_U32(a1, 116);
  v7 = FIELD_U32(a1, 108);
  v8 = FIELD_F32(a1, 112);
  v9 = (float *)((char *)sinLutTable + ((v3 >> 20) & 0xFF0));
  v10 = (float *)((char *)sinLutTable + ((v2 >> 20) & 0xFF0));
  v11 = (float *)((char *)sinLutTable + ((v4 >> 20) & 0xFF0));
  v12 = (float)(v4 & 0xFFFFFF) * 0.000000059605;
  v13 = (float)(v3 & 0xFFFFFF) * 0.000000059605;
  v14 = (float)(v2 & 0xFFFFFF) * 0.000000059605;
  v15 = v11[2] + (float)(v12 * v11[3]);
  v16 = v9[2] + (float)(v13 * v9[3]);
  v17 = *v11 + (float)(v12 * v11[1]);
  v18 = *v9 + (float)(v13 * v9[1]);
  v19 = *v10 + (float)(v14 * v10[1]);
  v20 = v10[2] + (float)(v14 * v10[3]);
  v49 = (float)(v16 * v15) + (float)(v19 * (float)(v18 * v17));
  v53 = v20 * v17;
  v57 = (float)(v19 * (float)(v16 * v17)) - (float)(v18 * v15);
  v50 = (float)(v19 * (float)(v18 * v15)) - (float)(v16 * v17);
  v54 = v20 * v15;
  v58 = (float)(v18 * v17) + (float)(v19 * (float)(v16 * v15));
  v51 = v20 * v18;
  v21 = v20 * v16;
  v22 = v8 + v5;
  v55 = -v19;
  v59 = v21;
  v52 = v7;
  v56 = v8 + v5;
  v60 = v6;
  v23 = (_DWORD **)(a1 + 6112);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6112) + 60))(**(_DWORD **)(a1 + 6112), &v49);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v23 + 68))(**v23, a1 + 144);
  sub_604218E0(*(float **)(a1 + 6112));
  j_ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6112));
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v23 + 52))(**v23);
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v23 + 56))(**v23);
  v24 = **(_DWORD **)(a1 + 6112);
  v25 = *(int (__fastcall **)(int, float *))(*(_DWORD *)v24 + 84);
  v37 = COERCE_FLOAT(&sead__SafeStringBase__vtable);
  v38 = COERCE_FLOAT("wrist0");
  v26 = v25(v24, &v37);
  (*(void (__fastcall **)(_DWORD, _DWORD, float *))(*(_DWORD *)**v23 + 108))(**v23, v26, &v37);
  if ( FIELD_U8(a1, 7659) )
  {
    v27 = v40;
    v28 = v44;
    v29 = v48;
  }
  else
  {
    v30 = -0.0 / FIELD_F32(a1, 144);
    v40 = v40 + (float)((float)((float)(v38 * 0.0) + (float)(v37 * v30)) + (float)(v39 * 0.0));
    v27 = v40;
    v44 = v44 + (float)((float)((float)(v42 * 0.0) + (float)(v30 * v41)) + (float)(v43 * 0.0));
    v28 = v44;
    v29 = v48 + (float)((float)((float)(v46 * 0.0) + (float)(v30 * v45)) + (float)(v47 * 0.0));
    v48 = v29;
  }
  FIELD_F32(a1, 7440) = v27;
  FIELD_F32(a1, 7444) = v28;
  FIELD_F32(a1, 7448) = v29;
  v49 = 1.0;
  v50 = 0.0;
  v51 = 0.0;
  v53 = 0.0;
  v54 = 1.0;
  v55 = 0.0;
  v57 = 0.0;
  v58 = 0.0;
  v59 = 1.0;
  v52 = v7;
  v56 = v22;
  v60 = -979615744;
  v31 = (_DWORD **)(a1 + 6116);
  (*(void (__fastcall **)(_DWORD, float *))(***(_DWORD ***)(a1 + 6116) + 60))(**(_DWORD **)(a1 + 6116), &v49);
  (*(void (__fastcall **)(_DWORD, int))(*(_DWORD *)**v31 + 68))(**v31, a1 + 144);
  sub_604218E0(*(float **)(a1 + 6116));
  j_ModelWrapper_updateAnims(*(ModelWrapper **)(a1 + 6116));
  (*(void (__fastcall **)(_DWORD))(*(_DWORD *)**v31 + 52))(**v31);
  v32 = **(_DWORD **)(a1 + 6116);
  if ( ((unsigned int)&dword_60C80400 & ~(1617459736 << v33) & 1) == 0 && _cxa_guard_acquire(&dword_60C80400) )
  {
    dword_60C803FC = (int)&off_60BC3228;
    _cxa_guard_release(&dword_60C80400);
  }
  if ( v32 && (**(int (__fastcall ***)(int, int *))v32)(v32, &dword_60C803FC) == 1 )
  {
    v34 = FIELD_U32(v32, 68);
    v35 = -1;
    FIELD_U32(v34, 44) = a1 + 6104;
    if ( FIELD_U16(v34, 40) > 1u )
      v35 = 1;
    FIELD_U16(v34, 42) = v35;
  }
  return (*(int (__fastcall **)(_DWORD))(*(_DWORD *)**v31 + 56))(**v31);
}
