/* sub_606DF4A4
 * address: 0x606DF4A4   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606DF4A4(int result, int a2, float a3)
{
  float v3; // s2
  int v4; // r2
  float v5; // s0
  unsigned int v6; // r2
  int v7; // r12
  float v8; // s2
  int v9; // r2
  int v10; // r3
  int v11; // r12
  int v12; // lr
  _BOOL4 v13; // r5
  int v14; // r2

  v3 = FIELD_F32(result, 28);
  if ( !FIELD_U32(EnemyCounterMaybe_instance, 28) && *(_DWORD *)result )
  {
    FIELD_U32(result, 4) = *(_DWORD *)result;
    FIELD_U32(result, 8) = 0;
    FIELD_U32(result, 12) = 0;
  }
  v4 = FIELD_U32(result, 4);
  v5 = a3 - v3;
  if ( v4 )
  {
    v6 = FIELD_U32(result, 12) + ((v4 >> 31) & 0xF8000000 | 0x4000000);
    FIELD_U32(result, 12) = v6;
    v7 = FIELD_U32(result, 8);
    FIELD_U32(result, 8) = v7 + 0x4000000;
    if ( v7 < -67108864 )
    {
      v6 = 0;
      FIELD_U32(result, 4) = 0;
      FIELD_U32(result, 8) = 0;
      FIELD_U32(result, 12) = 0;
    }
    v8 = FIELD_F32(result, 32)
       * (float)(*(float *)((char *)sinLutTable + ((v6 >> 20) & 0xFF0))
               + (float)((float)((float)(v6 & 0xFFFFFF) * *(float *)((char *)&sinLutTable[1] + ((v6 >> 20) & 0xFF0)))
                       * 0.000000059605));
  }
  else
  {
    v8 = 0.0;
  }
  v9 = 0;
  FIELD_F32(result, 36) = v5 + v8;
  v10 = FIELD_U32(result, 20);
  v11 = FIELD_U32(result, 24);
  v12 = FIELD_U32(result, 16);
  v13 = v10 < -67108863;
  if ( !v11 )
    v13 = v10 >= 0x4000000;
  if ( v13 )
  {
    if ( v12 - 0x100000 > 0 )
      v9 = v12 - 0x100000;
  }
  else
  {
    v9 = v12 + 0x100000;
    if ( v12 + 0x100000 >= 0x1000000 )
      v9 = 0x1000000;
  }
  FIELD_U32(result, 16) = v9;
  if ( v11 )
  {
    FIELD_U32(result, 20) = v10 - v9;
    if ( !v9 )
    {
      v14 = 0;
LABEL_22:
      FIELD_U32(result, 24) = v14;
    }
  }
  else
  {
    FIELD_U32(result, 20) = v9 + v10;
    if ( !v9 )
    {
      v14 = 1;
      goto LABEL_22;
    }
  }
  *(_DWORD *)result = a2;
  return result;
}
