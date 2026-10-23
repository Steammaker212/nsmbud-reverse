/* sub_6085EC24
 * address: 0x6085EC24   size: 360   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_6085EC24(int a1, int a2)
{
  unsigned int v4; // r8
  float v6; // s16
  unsigned int v7; // r7
  unsigned int i; // r9
  unsigned int v9; // r6
  const char **v10; // r2
  const char *v11; // r2
  char v12; // [sp+3h] [bp-3Dh] BYREF
  char v13[4]; // [sp+4h] [bp-3Ch] BYREF
  int v14; // [sp+8h] [bp-38h] BYREF
  unsigned int v15[13]; // [sp+Ch] [bp-34h] BYREF

  v4 = *(_DWORD *)(FIELD_U32(a1, 260) + 116);
  if ( (FIELD_U8(a1, 217) & 2) != 0 )
  {
    if ( v4 )
    {
      v6 = 0.0;
      v7 = FIELD_U32(a1, 172);
      for ( i = 0; i < v4; ++i )
      {
        v9 = v7;
        while ( 1 )
        {
          v7 = (*(int (__fastcall **)(int, char *, unsigned int))(*(_DWORD *)a2 + 36))(a2, &v12, v9);
          if ( v12 )
            break;
          if ( v7 > v9 )
          {
            v9 = v7;
            if ( FIELD_U32(a1, 172) + (unsigned int)FIELD_U16(a1, 214) >= v7 )
              continue;
          }
          goto LABEL_15;
        }
        *(_DWORD *)v13 = v9;
        v15[0] = 0;
        nn__util__PickOutCharacterFromUtf8String((nn__util *)v15, v13, v10);
        v14 = 0;
        nn__util__ConvertCharacterUtf8ToUtf32((nn__util *)&v14, v15, v11);
        if ( !v7 )
          break;
        if ( i )
          v6 = v6
             + (float)((float)(*(int (__fastcall **)(_DWORD, int))(**(_DWORD **)(a1 + 188) + 64))(
                                FIELD_U32(a1, 188),
                                v14)
                     + FIELD_F32(a1, 204));
      }
LABEL_15:
      if ( v6 == 0.0 )
        return 0.0;
      else
        return *(float *)(FIELD_U32(a1, 264) + 4) / v6;
    }
    else
    {
      return 0.0;
    }
  }
  else if ( v4 == 1 )
  {
    return 0.0;
  }
  else
  {
    return *(float *)(FIELD_U32(a1, 264) + 4) / (float)(v4 - 1);
  }
}
