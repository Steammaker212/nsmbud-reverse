/* sub_607934D4
 * address: 0x607934D4   size: 968   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607934D4(_DWORD *a1, int a2, float a3, float a4, float a5)
{
  int v10; // r0
  int *v11; // r0
  int v12; // r5
  float v13; // s0
  int v14; // r6
  int result; // r0
  int v16; // r5
  signed int v17; // r6
  int *v18; // r7
  char *v19; // r9
  int *v20; // r11
  char *v21; // r8
  int *v22; // r11
  char *v23; // t1
  int v24; // r0
  bool v25; // cc
  int *v26; // r9
  const void **v27; // r9
  _BYTE *v28; // t1
  char *v29; // r6
  const void *v30; // r8
  _BYTE *v31; // r0
  signed int v32; // r7
  int *v33; // r7
  int v34; // r5
  int (**v35)(); // [sp+0h] [bp-70h] BYREF
  char *v36; // [sp+4h] [bp-6Ch]
  int v37; // [sp+8h] [bp-68h]
  char v38; // [sp+Ch] [bp-64h] BYREF
  int v39; // [sp+2Ch] [bp-44h] BYREF

  a1[7] = -1;
  v10 = a1[9];
  a1[9] = a2;
  if ( v10 == a2 )
  {
    v11 = *(int **)(a1[6] + 12);
    v12 = *v11;
    v13 = *(float *)(*v11 + 24);
    *(float *)(*v11 + 24) = a3;
    if ( (float)(v13 * a3) <= 0.0 )
    {
      v14 = FIELD_U32(v12, 20);
      sub_6041838C((ModelAnimation *)(v12 + 4));
      FIELD_U32(v12, 20) = v14;
      FIELD_U32(v12, 28) |= 2u;
    }
    result = (*(int (__fastcall **)(_DWORD *))(*a1 + 140))(a1);
    if ( !result )
      result = (*(int (__fastcall **)(_DWORD *, float))(*a1 + 112))(a1, a3);
    if ( a5 != 0.0 )
    {
      v16 = **(_DWORD **)(a1[6] + 12);
      sub_6041838C((ModelAnimation *)(v16 + 4));
      FIELD_F32(v16, 20) = a5;
      FIELD_U32(v16, 28) |= 2u;
      result = (*(int (__fastcall **)(_DWORD *))(*a1 + 140))(a1);
      if ( !result )
        return (*(int (__fastcall **)(_DWORD *, float))(*a1 + 128))(a1, a5);
    }
  }
  else
  {
    v17 = 0;
    a1[49] = 0;
    a1[50] = 0;
    v18 = &dword_60CBFBC4[13 * a2];
    v39 = a1[5];
    v36 = &v38;
    v35 = &BufferedSafeStringBase_char_vtable_probably;
    v37 = 32;
    sead__BufferedSafeStringBase__assureTerminationImpl_const((int)&v35);
    v19 = v36;
    (*(void (__fastcall **)(int *))(*v18 + 12))(&dword_60CBFBC4[13 * a2]);
    v20 = &dword_60CBFBC4[13 * a2];
    v23 = (char *)v20[1];
    v22 = v20 + 1;
    v21 = v23;
    if ( v19 != v23 )
    {
      (*(void (__fastcall **)(int *))(*v18 + 12))(&dword_60CBFBC4[13 * a2]);
      v24 = *v22;
      while ( *(_BYTE *)(v24 + v17) )
      {
        if ( !*(_BYTE *)(v24 + v17 + 1) )
        {
          ++v17;
          break;
        }
        if ( !*(_BYTE *)(v24 + v17 + 2) )
        {
          v17 += 2;
          break;
        }
        v25 = v17 + 2 <= 0x7FFFF;
        v17 += 3;
        if ( !v25 )
        {
          v17 = 0;
          break;
        }
      }
      if ( v17 >= v37 )
        v17 = v37 - 1;
      qmemcpy(v19, v21, v17);
      v19[v17] = 0;
    }
    v26 = &dword_60CBFBC4[13 * a2];
    v28 = (_BYTE *)v26[3];
    v27 = (const void **)(v26 + 3);
    if ( *v28 )
    {
      v29 = v36;
      (*((void (__fastcall **)(const void **))*(v27 - 1) + 3))(v27 - 1);
      v30 = *v27;
      if ( v29 != *v27 )
      {
        (*((void (__fastcall **)(const void **))*(v27 - 1) + 3))(v27 - 1);
        v31 = *v27;
        v32 = 0;
        while ( v31[v32] )
        {
          if ( !v31[v32 + 1] )
          {
            ++v32;
            break;
          }
          if ( !v31[v32 + 2] )
          {
            v32 += 2;
            break;
          }
          v25 = v32 + 2 <= 0x7FFFF;
          v32 += 3;
          if ( !v25 )
          {
            v32 = 0;
            break;
          }
        }
        if ( v32 >= v37 )
          v32 = v37 - 1;
        qmemcpy(v29, v30, v32);
        v29[v32] = 0;
      }
      (*(void (__fastcall **)(_DWORD *, int *, int (***)(), int))(*a1 + 40))(a1, &v39, &v35, a2);
    }
    v33 = &dword_60CBFBC4[13 * a2];
    v34 = v33[8];
    (*(void (__fastcall **)(_DWORD *, int, int (***)(), int, float, float, float))(*a1 + 44))(
      a1,
      v39,
      &v35,
      v34,
      a3,
      a5,
      a4);
    a1[8] = -1;
    (*(void (__fastcall **)(_DWORD *, int, int (***)(), int, float, float, float))(*a1 + 48))(
      a1,
      v39,
      &v35,
      v34,
      a3,
      a5,
      a4);
    (*(void (__fastcall **)(_DWORD *))(*a1 + 52))(a1);
    return (*(int (__fastcall **)(_DWORD *, int))(*a1 + 32))(a1, v33[11]);
  }
  return result;
}
