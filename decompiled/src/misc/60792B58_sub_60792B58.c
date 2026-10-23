/* sub_60792B58
 * address: 0x60792B58   size: 1296   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60792B58(_DWORD *a1, int a2, float a3, float a4, float a5)
{
  int v10; // r0
  int v11; // r9
  bool v12; // zf
  int *v13; // r0
  int v14; // r5
  float v15; // s0
  int v16; // r6
  int result; // r0
  int v18; // r5
  int *v19; // r5
  char *v20; // r6
  int *v21; // r10
  char *v22; // r11
  signed int v23; // r5
  int v24; // r0
  bool v25; // cc
  int v26; // r6
  bool v27; // zf
  int v28; // r0
  bool v29; // zf
  bool v30; // zf
  float v31; // s2
  bool v32; // zf
  int v33; // r1
  int v34; // r5
  unsigned int v35; // r2
  int v36; // r1
  int (__fastcall *v37)(_DWORD *, int, float, float, float); // r6
  float v38; // s16
  float v39; // s0
  int v40; // r5
  __int16 v41; // r1
  float v42; // [sp+Ch] [bp-74h] BYREF
  int (**v43)(); // [sp+10h] [bp-70h] BYREF
  char *v44; // [sp+14h] [bp-6Ch]
  int v45; // [sp+18h] [bp-68h]
  char v46; // [sp+1Ch] [bp-64h] BYREF
  int v47; // [sp+3Ch] [bp-44h] BYREF

  v10 = *((unsigned __int8 *)a1 + 236);
  v11 = a1[7];
  v12 = v10 == 0;
  if ( !v10 )
    v12 = v11 == a2;
  if ( v12 )
  {
    v13 = *(int **)(a1[6] + 12);
    v14 = *v13;
    v15 = *(float *)(*v13 + 24);
    *(float *)(*v13 + 24) = a3;
    if ( (float)(v15 * a3) <= 0.0 )
    {
      v16 = FIELD_U32(v14, 20);
      sub_6041838C((ModelAnimation *)(v14 + 4));
      FIELD_U32(v14, 20) = v16;
      FIELD_U32(v14, 28) |= 2u;
    }
    result = (*(int (__fastcall **)(_DWORD *))(*a1 + 140))(a1);
    if ( !result )
      result = (*(int (__fastcall **)(_DWORD *, float))(*a1 + 112))(a1, a3);
    if ( a5 != 0.0 )
    {
      v18 = **(_DWORD **)(a1[6] + 12);
      sub_6041838C((ModelAnimation *)(v18 + 4));
      FIELD_F32(v18, 20) = a5;
      FIELD_U32(v18, 28) |= 2u;
      result = (*(int (__fastcall **)(_DWORD *))(*a1 + 140))(a1);
      if ( !result )
        return (*(int (__fastcall **)(_DWORD *, float))(*a1 + 128))(a1, a5);
    }
  }
  else
  {
    a1[9] = -1;
    a1[7] = a2;
    v19 = &dword_60CBFBC4[13 * a2];
    a1[49] = v19[12];
    a1[50] = v19[12];
    v47 = a1[5];
    v44 = &v46;
    v43 = &BufferedSafeStringBase_char_vtable_probably;
    v45 = 32;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v43);
    v20 = v44;
    (*(void (__fastcall **)(int *))(dword_60CBFBC4[13 * a2] + 12))(&dword_60CBFBC4[13 * a2]);
    v21 = v19 + 1;
    v22 = (char *)v19[1];
    if ( v20 != v22 )
    {
      (*(void (__fastcall **)(int *))(*v19 + 12))(&dword_60CBFBC4[13 * a2]);
      v23 = 0;
      v24 = *v21;
      while ( *(_BYTE *)(v24 + v23) )
      {
        if ( !*(_BYTE *)(v24 + v23 + 1) )
        {
          ++v23;
          break;
        }
        if ( !*(_BYTE *)(v24 + v23 + 2) )
        {
          v23 += 2;
          break;
        }
        v25 = v23 + 2 < 0x80000;
        v23 += 3;
        if ( !v25 )
        {
          v23 = 0;
          break;
        }
      }
      if ( v23 >= v45 )
        v23 = v45 - 1;
      qmemcpy(v20, v22, v23);
      v20[v23] = 0;
    }
    v42 = a4;
    (*(void (__fastcall **)(_DWORD *, float *, int *, int (***)(), int, _DWORD))(*a1 + 36))(a1, &v42, &v47, &v43, a2, 0);
    v26 = dword_60CBFBC4[13 * a2 + 8];
    if ( a5 == 0.0 )
    {
      v27 = v11 == -1;
      if ( v11 != -1 )
        v27 = (a1[49] & 0x40) == 0;
      if ( !v27 && (dword_60CBFBC4[13 * v11 + 12] & 0x40) != 0 )
        a5 = *(float *)(**(_DWORD **)(a1[6] + 12) + 20);
    }
    v28 = a1[52];
    v29 = (a2 & 0xFFFFFFFE) == 232;
    if ( (a2 & 0xFFFFFFFE) != 0xE8 )
      v29 = (a1[52] & 7) == 0;
    if ( v29 )
      goto LABEL_42;
    v30 = (a1[52] & 6) == 0;
    if ( (v28 & 6) != 0 )
    {
      v28 = a1[10];
      v30 = v28 == 0;
    }
    if ( !v30 && (FIELD_U8(v28, 209) & 4) == 0 )
    {
      v31 = v42;
      if ( (a1[49] & 0xC012) != 0 )
      {
        (*(void (__fastcall **)(int, float))(*(_DWORD *)v28 + 92))(v28, v42);
      }
      else
      {
        FIELD_U32(v28, 212) = a1[53];
        (*(void (__fastcall **)(_DWORD, int, float, float, float))(*(_DWORD *)a1[10] + 88))(a1[10], a2, a3, a5, v31);
      }
    }
    if ( (a1[49] & 2) != 0 && (v28 = a1[52], (v28 & 0x10) == 0) )
    {
LABEL_42:
      v32 = (v28 & 0xC0) == 0;
      if ( (v28 & 0xC0) != 0 )
        v32 = a1[8] == -1;
      if ( v32 || (a1[50] & 0x20) != 0 )
      {
        v40 = a1[50];
        (*(void (__fastcall **)(_DWORD *, int, int (***)(), int, float, float, float))(*a1 + 44))(
          a1,
          v47,
          &v43,
          v26,
          a3,
          a5,
          v42);
        if ( (v40 & 0x1000) != 0 )
        {
          v41 = 160;
          if ( a1[7] == 159 )
            v41 = 161;
          return (*(int (__fastcall **)(_DWORD *, float, float, float))(*a1 + 88))(
                   a1,
                   *(float *)&dword_60CBFBC4[13 * v41 + 9],
                   0.0,
                   v42);
        }
        else
        {
          a1[8] = -1;
          (*(void (__fastcall **)(_DWORD *, int, int (***)(), int, float, float, float))(*a1 + 48))(
            a1,
            v47,
            &v43,
            v26,
            a3,
            a5,
            v42);
          (*(void (__fastcall **)(_DWORD *))(*a1 + 52))(a1);
          return (*(int (__fastcall **)(_DWORD *, int))(*a1 + 32))(a1, dword_60CBFBC4[13 * a2 + 11]);
        }
      }
      else
      {
        (*(void (__fastcall **)(_DWORD *, int, int (***)(), int, float, float, float))(*a1 + 44))(
          a1,
          v47,
          &v43,
          v26,
          a3,
          a5,
          0.0);
        v33 = a1[6];
        v34 = a1[8];
        v35 = FIELD_U32(v33, 8);
        v36 = FIELD_U32(v33, 12);
        v37 = *(int (__fastcall **)(_DWORD *, int, float, float, float))(*a1 + 88);
        if ( v35 > 1 )
          v36 += 4;
        v38 = *(float *)(*(_DWORD *)v36 + 24);
        v39 = (*(float (__fastcall **)(_DWORD *))(*a1 + 120))(a1);
        return v37(a1, v34, v38, v39, 0.0);
      }
    }
    else
    {
      (*(void (__fastcall **)(_DWORD *, int, int (***)(), int, float, float, float))(*a1 + 44))(
        a1,
        v47,
        &v43,
        v26,
        a3,
        a5,
        v42);
      return (*(int (__fastcall **)(_DWORD *, _DWORD, float))(*a1 + 104))(a1, 0, v42);
    }
  }
  return result;
}
