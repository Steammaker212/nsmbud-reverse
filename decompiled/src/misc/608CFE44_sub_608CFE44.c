/* sub_608CFE44
 * address: 0x608CFE44   size: 1268   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608CFE44(int a1, char *a2, size_t a3, int *a4, int a5, int a6)
{
  int v10; // r0
  bool v11; // zf
  unsigned int v12; // r5
  int v13; // r5
  int v14; // r0
  int v15; // r0
  int v16; // r1
  int v17; // r2
  unsigned int v18; // r1
  size_t v19; // r11
  int v20; // r11
  int v21; // r1
  unsigned int v22; // r2
  unsigned int v23; // r11
  int v24; // r0
  size_t v25; // r2
  unsigned int v26; // r0
  size_t v27; // r6
  int v28; // r0
  size_t v29; // r2
  int v31; // r6
  int v32; // [sp+4h] [bp-2Ch] BYREF
  _DWORD v33[10]; // [sp+8h] [bp-28h] BYREF

  v10 = FIELD_U32(a1, 4);
  v11 = v10 == 0;
  if ( v10 )
    v11 = FIELD_U32(a1, 12) == 0;
  if ( v11 || !FIELD_U32(a1, 16) )
  {
    if ( a5 )
    {
      (**(void (__fastcall ***)(int, int))a5)(a5, a6);
      v10 = FIELD_U32(a1, 4);
    }
    v12 = (*(int (__fastcall **)(int, char *, size_t, int *))(*(_DWORD *)v10 + 16))(v10, a2, a3, a4);
    if ( a5 )
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a5 + 4))(a5, a6);
    return v12;
  }
  v12 = 0;
  if ( !FIELD_U32(a1, 24) )
    goto LABEL_17;
  v12 = FIELD_U32(a1, 24);
  if ( FIELD_U8(a1, 28) != 2 )
    goto LABEL_17;
  v13 = FIELD_U32(a1, 20);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v10 + 28))(v10) == v13 )
  {
    v33[0] = 1;
  }
  else
  {
    if ( !(*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 44))(FIELD_U32(a1, 4)) )
    {
      v14 = 0x80000000;
      v33[0] = 0x80000000;
      goto LABEL_47;
    }
    v14 = (*(int (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a1 + 4) + 24))(FIELD_U32(a1, 4), v13, 0);
    v33[0] = v14;
    if ( v14 < 0 )
      goto LABEL_47;
  }
  v12 = 0;
  v33[0] = 0;
  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD *))(**(_DWORD **)(a1 + 4) + 20))(
    FIELD_U32(a1, 4),
    FIELD_U32(a1, 12),
    FIELD_U32(a1, 24),
    v33);
  FIELD_U8(a1, 28) = 0;
  FIELD_U32(a1, 20) = -1;
  FIELD_U32(a1, 24) = 0;
  v14 = v33[0];
  if ( v33[0] < 0 )
    goto LABEL_47;
  if ( FIELD_U32(a1, 4) )
  {
LABEL_17:
    v15 = FIELD_U32(a1, 12);
    if ( !v15
      || !FIELD_U32(a1, 16)
      || FIELD_U8(a1, 28) != 1
      || (v16 = FIELD_U32(a1, 20), v16 == -1)
      || (v17 = FIELD_U32(a1, 8), v17 < v16) )
    {
      v12 = 0;
      if ( !a3 )
        return a3;
      goto LABEL_33;
    }
    v18 = v17 - v16;
    v19 = a3;
    if ( v12 >= v18 + a3 )
      goto LABEL_28;
    if ( v12 > v18 )
    {
      v19 = v12 - v18;
LABEL_28:
      v12 = 0;
      if ( v19 )
      {
        qmemcpy(a2, (const void *)(v15 + v18), v19);
        v12 = v19;
        FIELD_U32(a1, 8) += v19;
        if ( v19 >= a3 )
          return a3;
        goto LABEL_33;
      }
      goto LABEL_32;
    }
    v12 = 0;
  }
LABEL_32:
  if ( !a3 )
    return a3;
LABEL_33:
  v20 = FIELD_U32(a1, 8);
  if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 28))(FIELD_U32(a1, 4)) != v20 )
  {
    v21 = (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 44))(FIELD_U32(a1, 4));
    v14 = 0x80000000;
    if ( v21 != 1
      || (v14 = (*(int (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a1 + 4) + 24))(FIELD_U32(a1, 4), v20, 0),
          v14 < 0) )
    {
LABEL_47:
      v12 = 0;
      if ( a4 )
        *a4 = v14;
      return v12;
    }
  }
  v22 = FIELD_U32(a1, 16);
  if ( a3 - v12 > v22 )
  {
    if ( a5 )
      (**(void (__fastcall ***)(int, int))a5)(a5, a6);
    v32 = 0;
    v23 = (*(int (__fastcall **)(_DWORD, char *, size_t, int *))(**(_DWORD **)(a1 + 4) + 16))(
            FIELD_U32(a1, 4),
            a2,
            a3 - v12,
            &v32);
    if ( a5 )
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a5 + 4))(a5, a6);
    v24 = v32;
    if ( a4 )
      *a4 = v32;
    if ( v24 >= 0 )
    {
      v25 = FIELD_U32(a1, 16);
      v26 = v23;
      if ( v25 < v23 )
        v26 = FIELD_U32(a1, 16);
      FIELD_U32(a1, 24) = v26;
      FIELD_U32(a1, 20) = FIELD_U32(a1, 8) - v26;
      qmemcpy(*(void **)(a1 + 12), &a2[-(__int16)v26], v25);
      v27 = a3 - v12;
      goto LABEL_60;
    }
LABEL_65:
    if ( !FIELD_U32(a1, 24) || FIELD_U8(a1, 28) != 2 )
      goto LABEL_73;
    v31 = FIELD_U32(a1, 20);
    if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 28))(FIELD_U32(a1, 4)) == v31 )
    {
      v33[0] = 1;
    }
    else
    {
      if ( !(*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 44))(FIELD_U32(a1, 4)) )
      {
        v33[0] = 0x80000000;
        goto LABEL_73;
      }
      v33[0] = (*(int (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a1 + 4) + 24))(FIELD_U32(a1, 4), v31, 0);
      if ( v33[0] < 0 )
      {
LABEL_73:
        FIELD_U32(a1, 20) = -1;
        FIELD_U32(a1, 24) = 0;
        return v12;
      }
    }
    v33[0] = 0;
    (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD, _DWORD *))(**(_DWORD **)(a1 + 4) + 20))(
      FIELD_U32(a1, 4),
      FIELD_U32(a1, 12),
      FIELD_U32(a1, 24),
      v33);
    FIELD_U8(a1, 28) = 0;
    FIELD_U32(a1, 20) = -1;
    FIELD_U32(a1, 24) = 0;
    goto LABEL_73;
  }
  if ( a5 )
  {
    (**(void (__fastcall ***)(int, int))a5)(a5, a6);
    v22 = FIELD_U32(a1, 16);
  }
  v32 = 0;
  v23 = (*(int (__fastcall **)(_DWORD, _DWORD, unsigned int, int *))(**(_DWORD **)(a1 + 4) + 16))(
          FIELD_U32(a1, 4),
          FIELD_U32(a1, 12),
          v22,
          &v32);
  if ( a5 )
    (*(void (__fastcall **)(int, int))(*(_DWORD *)a5 + 4))(a5, a6);
  v28 = v32;
  if ( a4 )
    *a4 = v32;
  if ( v28 < 0 )
    goto LABEL_65;
  v29 = v23;
  FIELD_U8(a1, 28) = 1;
  FIELD_U32(a1, 20) = FIELD_U32(a1, 8);
  FIELD_U32(a1, 24) = v23;
  v27 = a3 - v12;
  if ( v23 >= a3 - v12 )
    v29 = a3 - v12;
  qmemcpy(&a2[v12], *(const void **)(a1 + 12), v29);
LABEL_60:
  v12 += v23;
  FIELD_U32(a1, 8) += v27;
  if ( v12 >= a3 )
  {
    if ( a4 )
      *a4 = 0;
    return a3;
  }
  return v12;
}
