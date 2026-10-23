/* sub_6085DD1C
 * address: 0x6085DD1C   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_6085DD1C(int a1, int a2)
{
  unsigned int result; // r0
  unsigned int v5; // r8
  float v6; // s0
  unsigned int v7; // r7
  float v8; // s16
  unsigned int v9; // r10
  float v10; // s18
  const char **v11; // r2
  unsigned int v12; // r6
  const char *v13; // r2
  unsigned __int8 v14; // [sp+3h] [bp-45h] BYREF
  char v15[4]; // [sp+4h] [bp-44h] BYREF
  int v16; // [sp+8h] [bp-40h] BYREF
  unsigned int v17[15]; // [sp+Ch] [bp-3Ch] BYREF

  result = FIELD_U32(a1, 260);
  v5 = FIELD_U32(result, 116);
  if ( v5 )
  {
    v6 = sub_6085EC24(a1, a2);
    v7 = FIELD_U32(a1, 172);
    v8 = v6;
    v9 = 0;
    v10 = **(float **)(a1 + 264);
    do
    {
      if ( (FIELD_U8(a1, 217) & 2) != 0 )
      {
        while ( 1 )
        {
          v12 = (*(int (__fastcall **)(int, unsigned __int8 *, unsigned int))(*(_DWORD *)a2 + 36))(a2, &v14, v7);
          result = v14;
          if ( v14 )
            break;
          if ( v12 > v7 )
          {
            v7 = v12;
            result = FIELD_U32(a1, 172) + FIELD_U16(a1, 214);
            if ( result >= v12 )
              continue;
          }
          return result;
        }
        *(_DWORD *)v15 = v7;
        v17[0] = 0;
        nn__util__PickOutCharacterFromUtf8String((nn__util *)v17, v15, v11);
        v16 = 0;
        result = nn__util__ConvertCharacterUtf8ToUtf32((nn__util *)&v16, v17, v13);
        if ( !v12 )
          return result;
        v7 = v12;
        if ( v9 )
          v10 = v10
              + (float)(v8
                      * (float)((float)(*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 188) + 64))(
                                         FIELD_U32(a1, 188),
                                         v16)
                              + FIELD_F32(a1, 204)));
      }
      else
      {
        v10 = **(float **)(a1 + 264) + (float)(v8 * (float)v9);
      }
      result = ((int (__fastcall *)(int, unsigned int, float))loc_6085E980)(
                 a1,
                 *(_DWORD *)(FIELD_U32(a1, 264) + 8) + 52 * v9++,
                 v10);
    }
    while ( v9 < v5 );
  }
  return result;
}
