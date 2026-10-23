/* sub_603ECBA8
 * address: 0x603ECBA8   size: 436   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_603ECBA8(int a1)
{
  __int16 v2; // r0
  int v3; // r0
  int v4; // r1
  float v5; // lr
  float v6; // r5
  float v7; // r2
  float v8; // r12
  float v9; // s12
  float v10; // r3
  float v11; // s2
  float v12; // s10
  float v13; // s2
  float v14; // s4
  float v15; // s14
  unsigned int result; // r0
  _BYTE v17[64]; // [sp+0h] [bp-40h] BYREF

  v2 = FIELD_U16(a1, 88) - 1;
  FIELD_U16(a1, 88) = v2;
  if ( v2 )
  {
    FIELD_U32(a1, 76) += dword_60C99AF0;
    v3 = 0;
    do
    {
      v4 = a1 + v3;
      v5 = *(float *)(a1 + v3 + 108);
      FIELD_F32(a1, 20) = v5;
      v6 = *(float *)(a1 + v3 + 112);
      FIELD_F32(a1, 24) = v6;
      v7 = *(float *)(a1 + v3 + 116);
      FIELD_F32(a1, 28) = v7;
      v8 = *(float *)(a1 + v3 + 120);
      FIELD_F32(a1, 32) = v8;
      v9 = v8;
      v10 = *(float *)(a1 + v3 + 128);
      v11 = *(float *)(a1 + v3 + 124);
      FIELD_F32(a1, 40) = v10;
      v12 = v10;
      v13 = v11 + FIELD_F32(a1, 80);
      FIELD_F32(a1, 36) = v13;
      v14 = FIELD_F32(a1, 48);
      if ( v13 < v14 )
      {
        FIELD_F32(a1, 36) = v14;
        v13 = v14;
      }
      if ( (FIELD_U8(a1, 84) & 0x10) != 0 )
      {
        v12 = v10 * 0.5;
        v15 = v13 * 0.5;
        v9 = v8 * 0.5;
      }
      else
      {
        v15 = v13;
      }
      v3 += 24;
      FIELD_F32(a1, 20) = v5 + v9;
      FIELD_F32(a1, 24) = v6 + v15;
      FIELD_F32(a1, 28) = v7 + v12;
      FIELD_F32(v4, 120) = v8;
      FIELD_F32(v4, 124) = v13;
      FIELD_U32(v4, 128) = FIELD_U32(a1, 40);
      FIELD_U32(v4, 108) = FIELD_U32(a1, 20);
      FIELD_U32(v4, 112) = FIELD_U32(a1, 24);
      FIELD_U32(v4, 116) = FIELD_U32(a1, 28);
    }
    while ( v3 != 96 );
    sub_603EC9F0((_DWORD *)a1);
    result = FIELD_U32(a1, 204) & 0xFFFFFFFE;
    if ( result == 4 )
    {
      (*(void (__fastcall **)(_DWORD, _DWORD, _BYTE *))(***(_DWORD ***)(a1 + 92) + 108))(**(_DWORD **)(a1 + 92), 0, v17);
      (*(void (__fastcall **)(_DWORD, _DWORD, _BYTE *))(***(_DWORD ***)(a1 + 96) + 108))(**(_DWORD **)(a1 + 96), 0, v17);
      (*(void (__fastcall **)(_DWORD, _DWORD, _BYTE *))(***(_DWORD ***)(a1 + 100) + 108))(
        **(_DWORD **)(a1 + 100),
        0,
        v17);
      return (*(int (__fastcall **)(_DWORD, _DWORD, _BYTE *))(***(_DWORD ***)(a1 + 104) + 108))(
               **(_DWORD **)(a1 + 104),
               0,
               v17);
    }
  }
  else
  {
    FIELD_U8(a1, 16) = 1;
    return 1;
  }
  return result;
}
