/* sub_6085CD2C
 * address: 0x6085CD2C   size: 684   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6085CD2C(int a1, int a2, int a3)
{
  int v6; // r7
  int v7; // r0
  int v8; // r0
  int v9; // r0
  int v10; // r4
  char v11; // r1
  char v12; // r2
  char v13; // r12
  char v14; // r3
  char v15; // r1
  int v16; // r0
  unsigned int v17; // r0
  int v18; // r7
  void *v19; // r0
  int v20; // r0
  bool v21; // zf
  int v22; // r1
  int v23; // r1
  int v24; // r3
  int v25; // r6
  int v26; // r0
  int v27; // r0

  sub_6085852C(a1, a2);
  v6 = 0;
  *(_DWORD *)a1 = off_60C5A464;
  FIELD_U32(a1, 176) = FIELD_U32(a2, 176);
  FIELD_U32(a1, 188) = FIELD_U32(a2, 188);
  v7 = FIELD_U32(a2, 192);
  FIELD_U32(a1, 196) = FIELD_U32(a2, 196);
  FIELD_U32(a1, 192) = v7;
  FIELD_U32(a1, 200) = FIELD_U32(a2, 200);
  FIELD_U32(a1, 204) = FIELD_U32(a2, 204);
  FIELD_U32(a1, 208) = FIELD_U32(a2, 208);
  FIELD_U32(a1, 212) = 0;
  FIELD_U16(a1, 216) = FIELD_U16(a2, 216);
  FIELD_U8(a1, 218) = FIELD_U8(a2, 218);
  FIELD_U8(a1, 219) = FIELD_U8(a2, 219);
  FIELD_U32(a1, 220) = FIELD_U32(a2, 220);
  v8 = FIELD_U32(a2, 224);
  FIELD_U32(a1, 228) = FIELD_U32(a2, 228);
  FIELD_U32(a1, 224) = v8;
  v9 = FIELD_U32(a2, 232);
  FIELD_U32(a1, 236) = FIELD_U32(a2, 236);
  FIELD_U32(a1, 232) = v9;
  FIELD_U32(a1, 240) = FIELD_U32(a2, 240);
  FIELD_U32(a1, 244) = FIELD_U32(a2, 244);
  FIELD_U32(a1, 248) = FIELD_U32(a2, 248);
  FIELD_U32(a1, 172) = 0;
  FIELD_U32(a1, 252) = 0;
  v10 = a1 + 252;
  FIELD_U32(a1, 256) = 0;
  FIELD_U32(a1, 260) = 0;
  FIELD_U32(a1, 264) = 0;
  v11 = FIELD_U8(a2, 180);
  v12 = FIELD_U8(a2, 182);
  LOBYTE(v9) = FIELD_U8(a2, 183);
  FIELD_U8(a1, 181) = FIELD_U8(a2, 181);
  FIELD_U8(a1, 180) = v11;
  FIELD_U8(a1, 183) = v9;
  FIELD_U8(a1, 182) = v12;
  v13 = FIELD_U8(a2, 184);
  v14 = FIELD_U8(a2, 186);
  v15 = FIELD_U8(a2, 187);
  FIELD_U8(a1, 185) = FIELD_U8(a2, 185);
  FIELD_U8(a1, 184) = v13;
  FIELD_U8(a1, 187) = v15;
  FIELD_U8(a1, 186) = v14;
  if ( FIELD_U32(a2, 252) )
  {
    *(_DWORD *)v10 = sub_60855BC8(8);
    *(_DWORD *)(*(_DWORD *)v10 + 4) = sub_60855BC8(64);
    **(_DWORD **)v10 = sub_60855BC8(64);
    do
    {
      *(_DWORD *)(*(_DWORD *)(*(_DWORD *)v10 + 4) + 4 * v6) = *(_DWORD *)(*(_DWORD *)(FIELD_U32(a2, 252) + 4) + 4 * v6);
      *(_DWORD *)(**(_DWORD **)v10 + 4 * v6) = *(_DWORD *)(**(_DWORD **)(a2 + 252) + 4 * v6);
      ++v6;
    }
    while ( v6 != 16 );
  }
  v16 = FIELD_U32(a2, 264);
  if ( v16 )
  {
    v17 = FIELD_U8(v16, 14);
    v18 = 28;
    if ( v17 >= 2 )
      v18 = 8 * v17 + 20;
    v19 = (void *)sub_60855BC8(v18);
    FIELD_U32(a1, 264) = v19;
    qmemcpy(v19, *(const void **)(a2 + 264), v18);
    *(_DWORD *)(FIELD_U32(a1, 264) + 8) = 0;
  }
  v20 = FIELD_U16(a2, 212);
  v21 = v20 == 0;
  if ( FIELD_U16(a2, 212) )
  {
    LOWORD(v20) = v20 - 1;
    v21 = (unsigned __int16)v20 == 0;
  }
  if ( !v21 )
  {
    v22 = FIELD_U32(a2, 260);
    if ( v22 )
      v23 = FIELD_U32(v22, 112);
    else
      LOWORD(v23) = 0;
    (*(void (__fastcall **)(int, int, _DWORD, _DWORD))(*(_DWORD *)a1 + 116))(
      a1,
      a3,
      (unsigned __int16)v20,
      (unsigned __int16)v23);
    v24 = FIELD_U16(a2, 214);
    if ( FIELD_U8(a1, 219) )
      (*(void (__fastcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)a1 + 136))(a1, FIELD_U32(a2, 172), 0, v24);
    else
      (*(void (__fastcall **)(int, _DWORD, _DWORD, int))(*(_DWORD *)a1 + 132))(a1, FIELD_U32(a2, 172), 0, v24);
  }
  v25 = FIELD_U32(a2, 256);
  v26 = sub_60855BC8(52);
  if ( v26 )
    v27 = sub_6086735C(v26, v25, a3);
  else
    v27 = 0;
  FIELD_U32(a1, 256) = v27;
  return a1;
}
