/* sub_602E2F10
 * address: 0x602E2F10   size: 284   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_602E2F10(int result)
{
  int v1; // r1
  int *v2; // r6
  _BYTE *v3; // r4
  char v4; // r2
  char v5; // r5
  float v6; // r8
  float v7; // r7
  float v8; // s16
  unsigned int U32; // r0
  int v10; // r2
  int v11; // s4
  int v12; // r0
  float v13; // s0
  float v14[5]; // [sp+0h] [bp-38h] BYREF
  __int16 v15; // [sp+14h] [bp-24h]
  char v16; // [sp+16h] [bp-22h]

  v2 = (int *)(result + 15388);
  v1 = FIELD_U32(result, 15388);
  if ( v1 >= 1 )
  {
    v3 = (_BYTE *)(result + 15439);
    if ( FIELD_U8(result, 15439) )
    {
      v4 = FIELD_U8(result, 15439) - 1;
      *v3 = v4;
      if ( !v4 )
      {
        v5 = v1 - 1;
        *v2 = v1 - 1;
        v6 = FIELD_F32(result, 6384);
        v7 = FIELD_F32(result, 6380);
        v8 = FIELD_F32(result, 6376);
        if ( v1 == 1 )
        {
          v10 = 0;
          v13 = 8.0;
          v12 = FIELD_F32(result, 120) < 0.0;
        }
        else
        {
          U32 = sead__Random__getU32((void *)(dword_60C9CF0C + 1340));
          v10 = *v2;
          v11 = (U32 >> 9) | 0x3F800000;
          v12 = v5 & 1;
          v13 = (float)((float)(*(float *)&v11 + -1.0) * 4.0) + -2.0;
        }
        v14[0] = v8 + v13;
        v14[1] = v7;
        v14[2] = v6;
        LODWORD(v14[3]) = v12;
        LODWORD(v14[4]) = 1;
        v15 = 3;
        v16 = 0;
        ((void (__fastcall *)(int, float *, int))sub_60583410)(dword_60CAF15C, v14, v10);
        *v3 = 2;
        return 2;
      }
    }
  }
  return result;
}
