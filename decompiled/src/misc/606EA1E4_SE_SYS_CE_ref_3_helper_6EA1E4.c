/* SE_SYS_CE_ref_3_helper_6EA1E4
 * address: 0x606EA1E4   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CE_ref_3_helper_6EA1E4(int a1, float *a2, int a3)
{
  int v6; // r4
  unsigned int v7; // r1
  char v8; // r10
  char v9; // r9
  int result; // r0
  _BYTE *v11; // r3
  int v12; // r1
  int v13; // r7
  int v14; // r3
  unsigned int i; // r1
  int v16; // r4
  int v17; // r0
  _BYTE *v18; // r2
  unsigned int v19; // r0

  v6 = FIELD_U8(a1, 148);
  v7 = FIELD_U8(LevelInfo_instance, 17);
  v8 = FIELD_U8(LevelInfo_instance, 18);
  v9 = FIELD_U8(LevelInfo_instance, 20);
  if ( v7 > 0x39 )
    v7 = 0;
  result = sub_603F7EE4(dword_60C99DC8, v7);
  if ( v6 )
  {
    v11 = (_BYTE *)(result + 2400);
    if ( FIELD_U8(result, 2400) == 255 )
    {
      v12 = 0;
    }
    else
    {
      v11 = (_BYTE *)(result + 2412);
      if ( FIELD_U8(result, 2412) == 255 )
      {
        v12 = 1;
      }
      else
      {
        if ( FIELD_U8(result, 2424) != 255 )
          return result;
        v12 = 2;
        v11 = (_BYTE *)(result + 2424);
      }
    }
    *v11 = v8;
    v17 = result + 12 * v12;
    FIELD_U8(v17, 2401) = v9;
    FIELD_F32(v17, 2404) = *a2;
    FIELD_F32(v17, 2408) = a2[1];
    result = a1 + 4 * v12;
    FIELD_U32(result, 1456) = a3;
  }
  else
  {
    v13 = 0;
    v14 = 2;
    for ( i = 0; ; i += 3 )
    {
      if ( *(unsigned __int8 *)(result + v13) == 255 )
      {
        v18 = (_BYTE *)(result + 8 * i);
        goto LABEL_21;
      }
      v16 = result + v13;
      if ( *(unsigned __int8 *)(result + v13 + 8) == 255 )
      {
        ++i;
        v18 = (_BYTE *)(result + 8 * i);
        goto LABEL_21;
      }
      if ( FIELD_U8(v16, 16) == 255 )
        break;
      v13 += 24;
      v14 += 3;
      if ( v13 == 2400 )
        return result;
    }
    v18 = (_BYTE *)(v16 + 16);
    i = v14;
LABEL_21:
    v19 = result + 8 * i;
    *v18 = v8;
    if ( i >= 0x12C )
      i = 0;
    FIELD_U8(v19, 1) = v9;
    FIELD_U16(v19, 4) = (unsigned int)*a2;
    FIELD_U16(v19, 6) = (unsigned int)(float)-a2[1];
    result = a1 + 4 * i;
    FIELD_U32(result, 256) = a3;
  }
  return result;
}
