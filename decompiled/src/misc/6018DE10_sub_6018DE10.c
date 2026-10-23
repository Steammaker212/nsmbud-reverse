/* sub_6018DE10
 * address: 0x6018DE10   size: 1700   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float *__fastcall sub_6018DE10(int a1)
{
  _DWORD *v2; // r10
  char v3; // r12
  _DWORD *v4; // r6
  int v5; // r4
  _DWORD *v6; // r6
  _DWORD *v7; // r10
  int v8; // t1
  char *v9; // r6
  char *v10; // r4
  signed int v11; // r5
  int v12; // r0
  bool v13; // cc
  float *result; // r0
  int v15; // r5
  _DWORD *v16; // r0
  int v17; // r6
  int v18; // r4
  _DWORD *v19; // r0
  int v20; // r4
  int v21; // r0
  int v22; // r1
  int i; // r1
  int v24; // r0
  float *v25; // r4
  float v26; // s2
  float v27; // s4
  int v28; // r5
  int v29; // r7
  int v30; // r4
  int v31; // r0
  int v32; // r1
  int v33; // r4
  int v34; // [sp+4h] [bp-7Ch] BYREF
  int v35; // [sp+8h] [bp-78h]
  int v36; // [sp+Ch] [bp-74h]
  int v37; // [sp+10h] [bp-70h] BYREF
  int v38; // [sp+14h] [bp-6Ch]
  int v39; // [sp+18h] [bp-68h]
  int (**v40)(); // [sp+1Ch] [bp-64h] BYREF
  char *v41; // [sp+20h] [bp-60h]
  int v42; // [sp+24h] [bp-5Ch]
  int v43; // [sp+28h] [bp-58h] BYREF
  int (**v44)(); // [sp+38h] [bp-48h] BYREF
  char *v45; // [sp+3Ch] [bp-44h]
  int v46; // [sp+40h] [bp-40h]
  int v47; // [sp+44h] [bp-3Ch] BYREF
  int (**v48)(); // [sp+4Ch] [bp-34h] BYREF
  int *v49; // [sp+50h] [bp-30h]
  int v50; // [sp+54h] [bp-2Ch]
  int v51; // [sp+58h] [bp-28h] BYREF

  v2 = (_DWORD *)sub_601E2910();
  v49 = &v51;
  v48 = &BufferedSafeStringBase_char_vtable_probably;
  v50 = 5;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v48);
  *(_BYTE *)v49 = 0;
  v48 = &off_60BD4F38;
  v45 = (char *)&v47;
  v44 = &BufferedSafeStringBase_char_vtable_probably;
  v46 = 5;
  sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v44);
  *v45 = 0;
  v44 = &off_60BD4F38;
  if ( ((unsigned int)&dword_60C8967C & ~(1612242596 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8967C) )
  {
    dword_60C89678 = (int)&off_60BD5510;
    _cxa_guard_release(&dword_60C8967C);
  }
  if ( v2 && (*(int (__fastcall **)(_DWORD *, int *))*v2)(v2, &dword_60C89678) == 1 )
  {
    v4 = (_DWORD *)(*(int (__fastcall **)(_DWORD *))(*v2 + 64))(v2);
    (*(void (__fastcall **)(_DWORD *))(*v4 + 12))(v4);
    if ( sub_6022A8B4(v4[1]) == 1 )
    {
      sub_60199B6C(v4, &v48, 0);
      sub_60199C48(v4, &v44, 0);
    }
    else
    {
      *(_BYTE *)v49 = 0;
      *v45 = 0;
    }
    v5 = 1;
    v6 = v2;
    goto LABEL_29;
  }
  if ( ((unsigned int)&dword_60C8968C & ~(1612242808 << v3) & 1) == 0 && _cxa_guard_acquire(&dword_60C8968C) )
  {
    dword_60C89688 = (int)&off_60BD5510;
    _cxa_guard_release(&dword_60C8968C);
  }
  if ( !v2 )
    goto LABEL_28;
  v5 = 0;
  v6 = 0;
  if ( (*(int (__fastcall **)(_DWORD *, int *))*v2)(v2, &dword_60C89688) == 1 )
  {
    v41 = (char *)&v43;
    v40 = &BufferedSafeStringBase_char_vtable_probably;
    v42 = 16;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v40);
    v40 = &off_60BD54EC;
    v8 = v2[13];
    v7 = v2 + 13;
    v9 = v41;
    (*(void (__fastcall **)(_DWORD *))(v8 + 12))(v7);
    v10 = (char *)v7[1];
    if ( v9 != v10 )
    {
      (*(void (__fastcall **)(_DWORD *))(*v7 + 12))(v7);
      v11 = 0;
      v12 = v7[1];
      while ( *(_BYTE *)(v12 + v11) )
      {
        if ( !*(_BYTE *)(v12 + v11 + 1) )
        {
          ++v11;
          break;
        }
        if ( !*(_BYTE *)(v12 + v11 + 2) )
        {
          v11 += 2;
          break;
        }
        v13 = v11 + 2 <= 0x7FFFF;
        v11 += 3;
        if ( !v13 )
        {
          v11 = 0;
          break;
        }
      }
      if ( v11 >= v42 )
        v11 = v42 - 1;
      qmemcpy(v9, v10, v11);
      v9[v11] = 0;
    }
    v40 = &off_60BD54D4;
    sub_60199B6C(&v40, &v48, 2);
    sub_60199C48(&v40, &v44, 2);
LABEL_28:
    v5 = 0;
    v6 = 0;
  }
LABEL_29:
  v37 = -1;
  v38 = -1;
  v34 = -1;
  v35 = -1;
  v39 = -1;
  v36 = -1;
  ((void (__fastcall *)(int (***)()))v48[3])(&v48);
  result = 0;
  while ( 1 )
  {
    if ( !*((_BYTE *)result + (_DWORD)v49) )
      goto LABEL_38;
    if ( !*((_BYTE *)result + (_DWORD)v49 + 1) )
    {
      result = (float *)((char *)result + 1);
      if ( result )
        goto LABEL_39;
LABEL_57:
      if ( v5 == 1 )
      {
        v28 = dword_60C89E00;
        v29 = sub_60220E48(v6, v49);
        v30 = sub_60220E54(v6);
        v31 = (*(int (__fastcall **)(_DWORD *))(*v6 + 64))(v6);
        sub_601A02B0(v28, &v40, v29, v30, v31);
        v33 = sub_60220E48(v6, v32);
        result = (float *)sub_60220E54(v6);
        FIELD_U32(a1, 376) = v33;
        FIELD_U32(a1, 380) = result;
        FIELD_U32(a1, 384) = -1;
      }
      return result;
    }
    if ( !*((_BYTE *)result + (_DWORD)v49 + 2) )
      break;
    v13 = (int)result + 2 <= 0x7FFFF;
    result = (float *)((char *)result + 3);
    if ( !v13 )
      goto LABEL_57;
  }
  result = (float *)((char *)result + 2);
LABEL_38:
  if ( !result )
    goto LABEL_57;
LABEL_39:
  v15 = sub_6040D4F0(&v48);
  if ( v15 == -1 )
    v15 = FIELD_U32(dword_60CC6D78, 412);
  ((void (__fastcall *)(int (***)()))v48[3])(&v48);
  v16 = (_DWORD *)sub_601E0404(v15, -1, v49);
  v37 = v16[21];
  v38 = v16[22];
  v39 = v16[24];
  v17 = sub_6040D4F0(&v44);
  if ( v17 == -1 )
    v17 = FIELD_U32(dword_60CC6D78, 412);
  v18 = FIELD_U32(a1, 368);
  ((void (__fastcall *)(int (***)()))v44[3])(&v44);
  v40 = &sead__SafeStringBase__vtable;
  v41 = v45;
  v19 = (_DWORD *)sub_601E03D4(v17, v18, &v40);
  if ( !v19 )
  {
    v20 = FIELD_U32(a1, 368);
    ((void (__fastcall *)(int (***)()))v44[3])(&v44);
    v40 = &sead__SafeStringBase__vtable;
    v41 = v45;
    v19 = (_DWORD *)sub_601E03D4(v17, v20 == 0, &v40);
  }
  v34 = v19[21];
  v35 = v19[22];
  v36 = v19[24];
  sub_6019EC34(a1 + 376, &v37);
  v21 = FIELD_U32(a1, 368);
  if ( v21 != -1 && (v22 = FIELD_U32(a1, 380), v21 == v22) && v22 != -1
    || (result = *(float **)(a1 + 344), result == (float *)1) )
  {
    ((void (__fastcall *)(int, int *, int *, int (***)(), int (***)()))loc_6018EDF4)(a1, &v37, &v34, &v48, &v44);
    if ( !FIELD_U8(a1, 520) )
    {
      ((void (__fastcall *)(int (***)()))v44[3])(&v44);
      ((void (__fastcall *)(int (***)()))v44[3])(&v44);
      if ( v45 != "W8B1" )
      {
        for ( i = 0; i < 524289; ++i )
        {
          if ( v45[i] != aW8b1[i] )
            break;
          if ( !v45[i] )
            goto LABEL_56;
        }
        v24 = sub_601FEE28(dword_60C8C188);
        sub_6016EF74(v24);
      }
    }
LABEL_56:
    v25 = (float *)sub_601E0040(&v37);
    result = (float *)sub_601E0040(&v34);
    v26 = (float)(v25[1] + result[1]) * 0.5;
    v27 = (float)(v25[2] + result[2]) * 0.5;
    FIELD_F32(a1, 392) = (float)(*v25 + *result) * 0.5;
    FIELD_F32(a1, 396) = v26;
    FIELD_F32(a1, 400) = v27;
  }
  return result;
}
