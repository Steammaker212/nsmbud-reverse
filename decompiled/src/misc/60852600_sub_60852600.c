/* sub_60852600
 * address: 0x60852600   size: 376   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60852600(int a1, float a2)
{
  unsigned int result; // r0
  float v4; // s2
  float v5; // s16
  int v6; // s0
  int v7; // r1
  int v8; // r5
  int v9; // r0
  unsigned int v10; // s0
  float v11; // s0
  float v12; // s0

  result = FIELD_U32(a1, 44) & 0xFFFFFFF8;
  FIELD_U32(a1, 44) = result;
  v4 = FIELD_F32(a1, 36);
  if ( v4 != 0.0 )
  {
    v5 = FIELD_F32(a1, 16) + (float)(v4 * a2);
    if ( v4 <= 0.0 )
    {
      if ( v5 <= 0.0 )
      {
        v7 = FIELD_U32(a1, 40);
        switch ( v7 )
        {
          case 2:
            v5 = -v5;
            result |= 4u;
            FIELD_F32(a1, 36) = -v4;
            goto LABEL_17;
          case 1:
            v12 = (float)(unsigned int)sub_608502E4(a1);
            result = FIELD_U32(a1, 44) | 4;
            v5 = v5 + v12;
            goto LABEL_17;
          case 0:
            v5 = 0.0;
            result |= 1u;
            FIELD_U32(a1, 36) = 0;
            goto LABEL_17;
        }
      }
    }
    else
    {
      result = sub_608502E4(a1);
      if ( v5 >= (float)result )
      {
        result = FIELD_U32(a1, 40);
        switch ( result )
        {
          case 2u:
            v8 = sub_608502E4(a1);
            v9 = sub_608502E4(a1);
            FIELD_F32(a1, 36) = -FIELD_F32(a1, 36);
            v10 = v9;
            result = FIELD_U32(a1, 44) | 2;
            v5 = (float)(unsigned int)v8 - (float)(v5 - (float)v10);
            goto LABEL_17;
          case 1u:
            v11 = (float)(unsigned int)sub_608502E4(a1);
            result = FIELD_U32(a1, 44) | 2;
            v5 = v5 - v11;
            goto LABEL_17;
          case 0u:
            v6 = sub_608502E4(a1);
            FIELD_U32(a1, 36) = 0;
            v5 = (float)(unsigned int)v6;
            result = FIELD_U32(a1, 44) | 1;
LABEL_17:
            FIELD_U32(a1, 44) = result;
            break;
        }
      }
    }
    FIELD_F32(a1, 16) = v5;
  }
  return result;
}
