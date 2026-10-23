/* sub_60867C18
 * address: 0x60867C18   size: 540   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60867C18(int a1, int a2, unsigned int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int v11; // r9
  unsigned int v12; // r0
  _DWORD *v13; // r0
  char *v14; // r6
  int v15; // r1
  int v16; // r6
  int v17; // r1
  int result; // r0
  _WORD v19[18]; // [sp+4h] [bp-24h] BYREF

  v11 = FIELD_U8(a1, 50) & 2;
  if ( (FIELD_U8(a1, 50) & 2) == 0 )
    FIELD_U8(a2, 213) = FIELD_U8(a1, 16) & 3;
  FIELD_U8(a2, 211) = 0;
  v12 = FIELD_U8(a1, 49);
  if ( v12 == 15 )
  {
    v12 = a4
        - FIELD_U8(a1, 51) % (((unsigned __int8)(FIELD_U8(a1, 50) & 0x40) >> 6) ^ 3u)
        + FIELD_U8(a1, 51);
  }
  else
  {
    if ( !FIELD_U32(a1, 24) )
      FIELD_U32(a1, 24) = FIELD_U32(a2, 184);
    LOBYTE(v12) = v12 + 14 * a4;
  }
  FIELD_U8(a1, 51) = v12;
  v13 = *(_DWORD **)(FIELD_U32(a2, 192) + 32);
  if ( v13 )
    v14 = (char *)v13 + FIELD_U32(a1, 32);
  else
    v14 = 0;
  if ( a4 == 1 )
  {
    if ( v13 )
      v13 = (_DWORD *)((char *)v13 + FIELD_U32(a1, 32));
    v13[116] = 1132396544;
    v13[117] = 1132396544;
    v13[118] = 1132396544;
    v13[119] = 1132396544;
    v13[120] = 1132396544;
    v13[121] = 1132396544;
    v13[122] = 1132396544;
    v13[123] = 1132396544;
    v13[124] = 1132396544;
    v13[125] = 1132396544;
    v13[126] = 1132396544;
    v13[127] = 1132396544;
    v13[128] = 1132396544;
    v13[129] = 1132396544;
    v13[130] = 1132396544;
    v13[131] = 1132396544;
  }
  *((_DWORD *)v14 + 52) = 998277249;
  *((_DWORD *)v14 + 53) = 998277249;
  *((_DWORD *)v14 + 54) = 998277249;
  *((float *)v14 + 55) = (float)a3 * 0.000015379;
  sub_6085409C((_QWORD *)a2, v14);
  if ( a5 == 1 )
    *((_DWORD *)v14 + 139) = 0;
  sub_60867E54(a1, a2, a6, a7);
  if ( (FIELD_U8(a1, 16) & 3) != 0 && FIELD_S8(a2, 213) >= 1 )
  {
    v15 = *(_DWORD *)(FIELD_U32(a2, 192) + 32);
    v16 = v15 ? v15 + FIELD_U32(a1, 32) : 0;
    v17 = *(_DWORD *)(FIELD_U32(a1, 20) + 4);
    if ( v17 )
    {
      (*(void (__fastcall **)(_WORD *))(*(_DWORD *)v17 + 16))(v19);
      FIELD_F32(v16, 448) = 1.0 / (float)v19[0];
      FIELD_F32(v16, 452) = 1.0 / (float)v19[1];
      FIELD_U32(v16, 456) = 0;
      FIELD_U32(v16, 460) = 0;
    }
  }
  if ( !v11 )
    sub_6086827C(a1, a2, a8, a9);
  result = FIELD_U8(a2, 213);
  FIELD_U8(a1, 48) = result;
  return result;
}
