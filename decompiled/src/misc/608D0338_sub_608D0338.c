/* sub_608D0338
 * address: 0x608D0338   size: 876   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608D0338(int a1, const void *a2, size_t a3, int *a4)
{
  size_t v6; // r5
  int v8; // r0
  int v9; // r1
  bool v10; // zf
  int v11; // r8
  int v13; // r8
  int v14; // r0
  int v15; // r1
  size_t v16; // r0
  int v17; // r7
  int v18; // [sp+4h] [bp-24h] BYREF
  int v19; // [sp+8h] [bp-20h] BYREF
  int v20; // [sp+Ch] [bp-1Ch] BYREF

  v6 = a3;
  v8 = FIELD_U32(a1, 4);
  if ( !v8 )
    return (*(int (__fastcall **)(int, const void *, size_t, int *))(*(_DWORD *)v8 + 20))(v8, a2, v6, a4);
  v9 = FIELD_U32(a1, 12);
  v10 = v9 == 0;
  if ( v9 )
  {
    a3 = FIELD_U32(a1, 16);
    v10 = a3 == 0;
  }
  if ( v10 )
    return (*(int (__fastcall **)(int, const void *, size_t, int *))(*(_DWORD *)v8 + 20))(v8, a2, v6, a4);
  if ( a3 >= v6 )
  {
    if ( FIELD_U8(a1, 28) != 1 && a3 - FIELD_U32(a1, 24) < v6 && FIELD_U32(a1, 24) && FIELD_U8(a1, 28) == 2 )
    {
      v13 = FIELD_U32(a1, 20);
      if ( (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 28))(v8) == v13 )
      {
        v20 = 1;
      }
      else
      {
        if ( !(*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 44))(FIELD_U32(a1, 4)) )
        {
          v14 = 0x80000000;
          v6 = 0;
          v20 = 0x80000000;
          goto LABEL_41;
        }
        v14 = (*(int (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a1 + 4) + 24))(FIELD_U32(a1, 4), v13, 0);
        v20 = v14;
        if ( v14 < 0 )
          goto LABEL_23;
      }
      v20 = 0;
      (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD, int *))(**(_DWORD **)(a1 + 4) + 20))(
        FIELD_U32(a1, 4),
        FIELD_U32(a1, 12),
        FIELD_U32(a1, 24),
        &v20);
      FIELD_U8(a1, 28) = 0;
      FIELD_U32(a1, 20) = -1;
      FIELD_U32(a1, 24) = 0;
      v14 = v20;
      if ( v20 < 0 )
        goto LABEL_23;
      v9 = FIELD_U32(a1, 12);
    }
    qmemcpy((void *)(v9 + FIELD_U32(a1, 24)), a2, v6);
    if ( FIELD_U8(a1, 28) == 2 )
    {
      v15 = FIELD_U32(a1, 8);
      v16 = FIELD_U32(a1, 24) + v6;
    }
    else
    {
      FIELD_U8(a1, 28) = 2;
      v16 = v6;
      v15 = FIELD_U32(a1, 8);
      FIELD_U32(a1, 20) = v15;
    }
    FIELD_U32(a1, 24) = v16;
    FIELD_U32(a1, 8) = v15 + v6;
    if ( v16 != FIELD_U32(a1, 16) || !v16 )
      goto LABEL_38;
    v17 = FIELD_U32(a1, 20);
    if ( (*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 28))(FIELD_U32(a1, 4)) == v17 )
    {
      v18 = 1;
    }
    else
    {
      if ( !(*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 44))(FIELD_U32(a1, 4)) )
      {
        v14 = 0x80000000;
        v18 = 0x80000000;
        goto LABEL_41;
      }
      v14 = (*(int (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a1 + 4) + 24))(FIELD_U32(a1, 4), v17, 0);
      v18 = v14;
      if ( v14 < 0 )
        goto LABEL_41;
    }
    v18 = 0;
    (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD, int *))(**(_DWORD **)(a1 + 4) + 20))(
      FIELD_U32(a1, 4),
      FIELD_U32(a1, 12),
      FIELD_U32(a1, 24),
      &v18);
    FIELD_U8(a1, 28) = 0;
    FIELD_U32(a1, 20) = -1;
    FIELD_U32(a1, 24) = 0;
    v14 = v18;
    if ( v18 >= 0 )
    {
LABEL_38:
      if ( a4 )
        *a4 = 0;
      return v6;
    }
LABEL_41:
    if ( a4 )
      *a4 = v14;
    return v6;
  }
  if ( !FIELD_U32(a1, 24) || FIELD_U8(a1, 28) != 2 )
    return (*(int (__fastcall **)(int, const void *, size_t, int *))(*(_DWORD *)v8 + 20))(v8, a2, v6, a4);
  v11 = FIELD_U32(a1, 20);
  if ( (*(int (__fastcall **)(int))(*(_DWORD *)v8 + 28))(v8) == v11 )
  {
    v19 = 1;
  }
  else
  {
    if ( !(*(int (__fastcall **)(_DWORD))(**(_DWORD **)(a1 + 4) + 44))(FIELD_U32(a1, 4)) )
    {
      v14 = 0x80000000;
      v19 = 0x80000000;
      goto LABEL_23;
    }
    v14 = (*(int (__fastcall **)(_DWORD, int, _DWORD))(**(_DWORD **)(a1 + 4) + 24))(FIELD_U32(a1, 4), v11, 0);
    v19 = v14;
    if ( v14 < 0 )
    {
LABEL_23:
      v6 = 0;
      goto LABEL_41;
    }
  }
  v19 = 0;
  (*(void (__fastcall **)(_DWORD, _DWORD, _DWORD, int *))(**(_DWORD **)(a1 + 4) + 20))(
    FIELD_U32(a1, 4),
    FIELD_U32(a1, 12),
    FIELD_U32(a1, 24),
    &v19);
  FIELD_U8(a1, 28) = 0;
  FIELD_U32(a1, 20) = -1;
  FIELD_U32(a1, 24) = 0;
  v14 = v19;
  if ( v19 < 0 )
    goto LABEL_23;
  v8 = FIELD_U32(a1, 4);
  return (*(int (__fastcall **)(int, const void *, size_t, int *))(*(_DWORD *)v8 + 20))(v8, a2, v6, a4);
}
