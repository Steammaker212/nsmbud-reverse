/* sub_6064A7C4
 * address: 0x6064A7C4   size: 448   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6064A7C4(_DWORD *a1)
{
  int result; // r0
  int v3; // r0
  float v4; // r2
  int v5; // r1
  float v6; // s6
  float v7; // s2
  int **v8; // r4
  _DWORD *v9; // t1
  int v10; // r0
  int (__fastcall *v11)(int, float32x2_t *); // r2
  int v12; // r5
  int v13; // [sp+0h] [bp-88h] BYREF
  _BYTE v14[12]; // [sp+4h] [bp-84h] BYREF
  float32x2_t v15[6]; // [sp+10h] [bp-78h] BYREF
  float v16[4]; // [sp+40h] [bp-48h] BYREF
  float v17; // [sp+50h] [bp-38h]
  float v18; // [sp+54h] [bp-34h]
  float v19; // [sp+58h] [bp-30h]
  int v20; // [sp+5Ch] [bp-2Ch]
  float v21; // [sp+60h] [bp-28h]
  float v22; // [sp+64h] [bp-24h]
  float v23; // [sp+68h] [bp-20h]
  int v24; // [sp+6Ch] [bp-1Ch]

  result = ActorMgrRelated_getById(ActorMgr__instance + 27168, a1[1829]);
  if ( result )
  {
    v3 = FIELD_U32(result, 112);
    v4 = *((float *)a1 + 27);
    v5 = a1[29];
    v6 = (float)(-0.00030118 * 0.0) + 1.0;
    v7 = (float)(0.024541 * 0.0) + 0.0;
    v16[0] = (float)(v6 * v6) + (float)(v7 * (float)(v7 * v7));
    v17 = v7 * v6;
    v21 = (float)(v7 * v17) - v17;
    v16[1] = v21;
    v18 = v6 * v6;
    v22 = (float)(v7 * v7) + (float)(v7 * (float)(v6 * v6));
    v16[2] = v7 * v6;
    v19 = -v7;
    v23 = v6 * v6;
    v16[3] = v4;
    v20 = v3;
    v24 = v5;
    v9 = (_DWORD *)a1[1816];
    v8 = (int **)(a1 + 1816);
    (*(void (__fastcall **)(_DWORD, float *))(*(_DWORD *)*v9 + 60))(*v9, v16);
    (*(void (__fastcall **)(int, int **))(*(_DWORD *)**v8 + 68))(**v8, v8 - 1780);
    ModelWrapper_updateAnims((ModelWrapper *)*v8);
    (*(void (__fastcall **)(int))(*(_DWORD *)**v8 + 52))(**v8);
    v10 = **v8;
    v11 = *(int (__fastcall **)(int, float32x2_t *))(*(_DWORD *)v10 + 84);
    v15[0].n64_u32[0] = (unsigned __int32)&sead__SafeStringBase__vtable;
    v15[0].n64_u32[1] = (unsigned __int32)"tire";
    v12 = v11(v10, v15);
    (*(void (__fastcall **)(int, int, float32x2_t *, _BYTE *))(*(_DWORD *)**v8 + 100))(**v8, v12, v15, v14);
    v13 = -(int)v8[41];
    Mtx34_rotateX(v15, (unsigned int *)&v13);
    (*(void (__fastcall **)(int, int, float32x2_t *, _BYTE *))(*(_DWORD *)**v8 + 96))(**v8, v12, v15, v14);
    return (*(int (__fastcall **)(int))(*(_DWORD *)**v8 + 56))(**v8);
  }
  return result;
}
