/* sub_6085C99C
 * address: 0x6085C99C   size: 532   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085C99C(_DWORD *a1, int a2, _DWORD *a3, int a4, int a5)
{
  int v9; // r0
  int v10; // r0
  int v11; // r1
  unsigned int v12; // r0
  int v13; // r0
  int v14; // r0
  int v15; // r1
  __int16 v16; // r0
  int result; // r0
  int v18; // [sp+8h] [bp-30h] BYREF
  int v19; // [sp+Ch] [bp-2Ch]
  int v20; // [sp+10h] [bp-28h]
  int v21; // [sp+14h] [bp-24h]

  v9 = FIELD_U32(a4, 20);
  if ( !v9 )
    goto LABEL_10;
  if ( FIELD_U8(a4, 69) )
  {
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = -1;
    if ( (*(_BYTE *)a5 & 2) != 0 )
      v21 = FIELD_U32(a5, 12);
    (*(void (__fastcall **)(int, int *, _DWORD, _DWORD, _DWORD *, _DWORD))(*(_DWORD *)v9 + 12))(
      v9,
      &v18,
      a1[44],
      FIELD_U32(a4, 24),
      a1,
      FIELD_U32(a5, 4));
    v10 = (*(int (__fastcall **)(_DWORD *, _DWORD *, int, int *))(*a1 + 152))(a1, a3, a4, &v18);
  }
  else
  {
    v18 = 0;
    v19 = 0;
    v20 = 0;
    v21 = -1;
    if ( (*(_BYTE *)a5 & 2) != 0 )
      v21 = FIELD_U32(a5, 12);
    (*(void (__fastcall **)(int, int *, _DWORD, _DWORD, _DWORD *, _DWORD))(*(_DWORD *)v9 + 8))(
      v9,
      &v18,
      a1[44],
      FIELD_U32(a4, 24),
      a1,
      FIELD_U32(a5, 4));
    v10 = (*(int (__fastcall **)(_DWORD *, _DWORD *, int, int *))(*a1 + 148))(a1, a3, a4, &v18);
  }
  v11 = 1;
  if ( !v10 )
  {
LABEL_10:
    v12 = FIELD_U32(a5, 12);
    if ( v12 < FIELD_U32(a5, 16) )
      v12 = FIELD_U32(a5, 16);
    (*(void (__fastcall **)(_DWORD *, _DWORD *, _DWORD))(*a1 + 112))(a1, a3, (unsigned __int16)v12);
    v11 = 0;
  }
  v13 = FIELD_U32(a5, 16);
  if ( v13 >= 1 && !(v11 | (a1[43] == 0)) )
  {
    if ( FIELD_U8(a4, 69) )
      (*(void (__fastcall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(*a1 + 136))(
        a1,
        FIELD_U32(a5, 8),
        0,
        (unsigned __int16)v13);
    else
      (*(void (__fastcall **)(_DWORD *, _DWORD, _DWORD, _DWORD))(*a1 + 132))(
        a1,
        FIELD_U32(a5, 8),
        0,
        (unsigned __int16)v13);
  }
  v14 = 0;
  v21 = 0;
  v20 = 0;
  v19 = 0;
  v18 = 0;
  v15 = a1[65];
  if ( v15 )
    v14 = FIELD_U32(v15, 112);
  v20 = v14;
  v16 = *((_WORD *)a1 + 108);
  LOBYTE(v21) = (v16 & 8) != 0;
  BYTE1(v21) = (v16 & 0x20) != 0;
  BYTE2(v21) = (unsigned __int8)v16 >> 7;
  HIBYTE(v21) = (v16 & 0x400) != 0;
  result = sub_6084A168(a3, (int)&v18);
  if ( a2 )
  {
    result = FIELD_U32(a2, 4) + sub_6085F830(a3, 16, result);
    FIELD_U32(a2, 4) = result;
  }
  return result;
}
