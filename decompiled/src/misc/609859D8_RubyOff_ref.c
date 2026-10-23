/* RubyOff_ref
 * address: 0x609859D8   size: 660   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall RubyOff_ref(int a1, _DWORD *a2, int a3, int a4, int a5, int a6, int a7, char a8, int a9)
{
  int v13; // r6
  float v14; // s0
  int v15; // r4
  float v16; // s2
  float v17; // s0
  int v18; // r2
  int (__fastcall *v19)(int, int *, int *, int, int, int, int, int, int, _BYTE *, int); // r8
  int v20; // r4
  int v21; // r0
  int v22; // r7
  int v23; // r5
  int (__fastcall *v24)(int, _DWORD, int, int, _DWORD, int, int, int, int, _BYTE *, int); // r7
  int v26; // [sp+20h] [bp-10A0h]
  int v27; // [sp+24h] [bp-109Ch] BYREF
  _DWORD v28[2]; // [sp+2Ch] [bp-1094h] BYREF
  _BYTE v29[52]; // [sp+34h] [bp-108Ch] BYREF
  int v30; // [sp+68h] [bp-1058h]
  int v31; // [sp+88h] [bp-1038h] BYREF
  int (**v32)(); // [sp+8Ch] [bp-1034h] BYREF
  int *v33; // [sp+90h] [bp-1030h]
  int v34; // [sp+94h] [bp-102Ch]
  int v35; // [sp+98h] [bp-1028h] BYREF
  _BYTE v36[40]; // [sp+1098h] [bp-28h] BYREF

  v13 = 1;
  v14 = FIELD_F32(a1, 196);
  v15 = FIELD_U32(a1, 208);
  v16 = FIELD_F32(a1, 60) - v14;
  if ( v16 >= 0.0 )
  {
    v17 = v16 / (float)(v14 + FIELD_F32(a1, 200));
    v18 = (int)v17;
    if ( (float)(int)v17 != v17 )
      --v18;
    if ( v17 >= 0.0 )
      v18 = (int)v17;
    v13 = v18 + 1;
  }
  v36[0] = a8;
  v36[1] = sub_6085982C(a1, "RubyOff") != 0;
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 176))(a1) == 1 )
  {
    v33 = &v35;
    v32 = &off_60BFCA1C;
    v34 = 2048;
    sub_608FDDB4((int)&v32);
    *(_WORD *)v33 = 0;
    v32 = &off_60C5FCF8;
    v31 = 0;
    v26 = a3;
    v19 = *(int (__fastcall **)(int, int *, int *, int, int, int, int, int, int, _BYTE *, int))(*(_DWORD *)v15 + 40);
    sub_608FDDB4((int)&v32);
    v20 = v19(v15, v33, &v31, a4, v34, a5, a6, a7, v13, v36, a9);
    sub_6084E138((int)v29);
    (*(void (__fastcall **)(int, _BYTE *))(*(_DWORD *)a1 + 140))(a1, v29);
    v21 = FIELD_U32(a1, 56);
    v27 = v13;
    v30 = v21;
    v28[0] = &off_60C5FCEC;
    v28[1] = v29;
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    v22 = a2[1];
    v23 = a2[2];
    ((void (__fastcall *)(int (***)()))v32[3])(&v32);
    sub_6099B590(v26, v22, v23, v33, v31, v28, &v27);
    j_nullsub_88_0();
  }
  else
  {
    v24 = *(int (__fastcall **)(int, _DWORD, int, int, _DWORD, int, int, int, int, _BYTE *, int))(*(_DWORD *)v15 + 40);
    (*(void (__fastcall **)(_DWORD *))(*a2 + 12))(a2);
    return v24(v15, a2[1], a3, a4, a2[2], a5, a6, a7, v13, v36, a9);
  }
  return v20;
}
