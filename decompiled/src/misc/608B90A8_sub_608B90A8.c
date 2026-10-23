/* sub_608B90A8
 * address: 0x608B90A8   size: 528   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608B90A8(int a1)
{
  int result; // r0
  float v3; // s20
  unsigned __int64 v4; // r0
  unsigned int v5; // r10
  unsigned int v6; // r8
  int v7; // r6
  bool v8; // cf
  int v9; // r7
  char v10; // r4
  int v11; // r5
  char v12; // r0
  int v13; // r0
  int v14; // r5

  result = FIELD_U16(a1, 218) * FIELD_U8(a1, 217);
  v3 = (float)(FIELD_F32(a1, 196) * (float)result) / 60000.0;
  if ( v3 != 0.0 )
  {
    v4 = (unsigned __int64)(float)((float)(FIELD_F32(a1, 200) * 65536.0) / v3);
    v5 = 0;
    v6 = 327680;
    if ( (WORD2(v4) & 0x8000u) < __PAIR64__(HIWORD(HIDWORD(v4)), 1) )
    {
LABEL_15:
      *(float *)&result = (float)(v4 - __PAIR64__(v5, v6));
      FIELD_F32(a1, 200) = (float)(v3 * *(float *)&result) * 0.000015259;
    }
    else
    {
      v7 = a1 + 244;
      v6 = 327680;
      v5 = 0;
      while ( 1 )
      {
        v8 = v6 >= (unsigned int)v4;
        v6 -= v4;
        LODWORD(v4) = FIELD_S16(a1, 224);
        v9 = 0;
        v10 = 0;
        v5 -= HIDWORD(v4) + !v8;
        if ( (int)v4 < FIELD_S16(a1, 222) )
          FIELD_U16(a1, 224) = v4 + 1;
        do
        {
          v11 = *(_DWORD *)(v7 + 4 * v9);
          if ( v11 )
          {
            sub_608BB200(*(_DWORD *)(v7 + 4 * v9));
            if ( sub_608BB288(v11, 1) < 0 && *(_DWORD *)(v7 + 4 * v9) )
            {
              sub_608BB040();
              (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 232) + 12))(
                FIELD_U32(a1, 232),
                *(_DWORD *)(v7 + 4 * v9));
              *(_DWORD *)(v7 + 4 * v9) = 0;
            }
            v12 = FIELD_U8(v11, 5);
            v10 |= v12 != 0;
          }
          ++v9;
        }
        while ( v9 != 16 );
        if ( (v10 & 1) == 0 )
          break;
        ++FIELD_U32(a1, 340);
        result = FIELD_U16(a1, 218) * FIELD_U8(a1, 217);
        v3 = (float)(FIELD_F32(a1, 196) * (float)result) / 60000.0;
        if ( v3 == 0.0 )
          return result;
        v4 = (unsigned __int64)(float)(65536.0 / v3);
        if ( v4 >= __PAIR64__(v5, v6) )
          goto LABEL_15;
      }
      if ( FIELD_U8(a1, 458) )
      {
        v13 = sub_608C3C60(FIELD_U8(a1, 458));
        sub_608C411C(v13, a1 + 176);
        FIELD_U8(a1, 458) = 0;
      }
      v14 = 0;
      if ( FIELD_U8(a1, 37) )
        FIELD_U8(a1, 37) = 0;
      do
      {
        if ( *(_DWORD *)(v7 + 4 * v14) )
        {
          sub_608BB040();
          (*(void (__fastcall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 232) + 12))(
            FIELD_U32(a1, 232),
            *(_DWORD *)(v7 + 4 * v14));
          *(_DWORD *)(v7 + 4 * v14) = 0;
        }
        ++v14;
      }
      while ( v14 != 16 );
      FIELD_U8(a1, 39) = 1;
      return 1;
    }
  }
  return result;
}
