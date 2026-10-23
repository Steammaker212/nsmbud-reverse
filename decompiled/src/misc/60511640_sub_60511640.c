/* sub_60511640
 * address: 0x60511640   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int *__fastcall sub_60511640(int a1)
{
  int v1; // r5
  int *result; // r0
  int v4; // r6
  int v5; // r7
  bool v6; // zf
  unsigned int v7; // r0
  int v8; // r8
  float v9; // s0
  unsigned int v10; // r5
  int v11; // r0
  unsigned int v12; // r5

  result = &dword_60C99DD4;
  v4 = dword_60C99DD4;
  if ( dword_60C99DD4 )
  {
    result = &dword_60CC6D78;
    v5 = dword_60CC6D78;
    v6 = dword_60CC6D78 == 0;
    if ( dword_60CC6D78 )
    {
      result = &LevelInfo_instance;
      v1 = LevelInfo_instance;
      v6 = LevelInfo_instance == 0;
    }
    if ( !v6 )
    {
      result = *(int **)(sub_60834614(result) + 492);
      if ( !result )
      {
        v7 = sub_6019A628(FIELD_U8(v1, 16), FIELD_U8(v1, 17));
        v8 = 0;
        if ( v7 <= 5 && ((1 << v7) & 0x31) != 0 && !sub_6040E3D0(v1) && !sub_6040E438(v1) && !FIELD_U8(v5, 109032) )
        {
          if ( (FIELD_U8(v5, 44) & 1) == 0 )
          {
            sub_6040E4C8(v1);
LABEL_17:
            v10 = FIELD_U32(a1, 5788);
            if ( v10 != 256 )
            {
              sub_6047EEC4(a1 + 3744, FIELD_U32(a1, 5788), v9);
              v11 = a1 + 3704;
              if ( v10 < 0x100 )
                v11 += v10;
              FIELD_U8(v11, 500) = 0;
            }
            result = (int *)5800;
            v12 = FIELD_U32(a1, 5800);
            if ( v12 != 256 )
            {
              sub_6047EEC4(a1 + 3744, FIELD_U32(a1, 5800), v9);
              result = (int *)(a1 + 3704);
              if ( v12 < 0x100 )
                result = (int *)((char *)result + v12);
              *((_BYTE *)result + 500) = 0;
            }
            return result;
          }
          v8 = FIELD_U8(v4, 1380);
          if ( FIELD_U8(v4, 1380) )
            v8 = 1;
        }
        result = (int *)sub_6040E4C8(v1);
        if ( !v8 && result != (int *)1 )
          return result;
        goto LABEL_17;
      }
    }
  }
  return result;
}
