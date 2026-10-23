/* sub_608521F4
 * address: 0x608521F4   size: 452   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608521F4(int result, int a2, unsigned int a3)
{
  unsigned int v3; // lr
  unsigned int v4; // r6
  int v5; // r12
  unsigned int v6; // r0
  unsigned __int8 *v7; // r7
  unsigned int v8; // r6
  unsigned int v9; // lr
  unsigned int v10; // r4
  unsigned int v11; // r5
  int v12; // r0

  if ( a2 <= 27 )
  {
    v3 = a2 / 4;
    if ( (unsigned int)(a2 / 4) > 1 )
    {
      if ( v3 <= 6 )
      {
        v4 = FIELD_U32(result, 12);
        if ( (v4 & 0x10000) != 0 )
        {
          v5 = FIELD_U32(result, 20)
             + ((8 * v4) & 0x18)
             + (v4 & 0x30)
             + ((v4 >> 6) & 8)
             + 4 * ((v4 >> 10) & 3)
             + 4 * ((v4 >> 6) & 7)
             + ((v4 >> 12) & 8)
             + (-((v4 >> 12) & 1) & 0xC)
             + 20 * (((v4 >> 13) & 3) + ((v4 >> 2) & 3));
          v6 = v3 - 2;
          v7 = (unsigned __int8 *)(v5 + 4 * ((v3 - 2) % 5));
          v8 = v7[4] | (v7[5] << 8) | ((v7[6] | (v7[7] << 8)) << 16);
          v9 = HIBYTE(v8);
          v10 = HIWORD(v8);
          v11 = v8 >> 8;
          switch ( a2 % 4 )
          {
            case 0:
              goto LABEL_15;
            case 1:
              LOBYTE(v11) = a3;
              goto LABEL_14;
            case 2:
              LOBYTE(v10) = a3;
              goto LABEL_14;
            case 3:
              v9 = a3;
              goto LABEL_14;
            default:
LABEL_14:
              LOBYTE(a3) = v7[4];
LABEL_15:
              v12 = v5 + 4 * v6;
              FIELD_U8(v12, 4) = a3;
              result = v12 + 4;
              FIELD_U8(result, 3) = ((v9 << 24) | ((unsigned __int8)v10 << 16)) >> 24;
              FIELD_U8(result, 2) = ((v9 << 24) | ((unsigned __int8)v10 << 16)) >> 16;
              FIELD_U8(result, 1) = v11;
              break;
          }
        }
      }
    }
    else
    {
      switch ( a2 % 4 )
      {
        case 0:
          result += 4 * v3;
          FIELD_U8(result, 4) = a3;
          break;
        case 1:
          result += 4 * v3;
          FIELD_U8(result, 5) = a3;
          break;
        case 2:
          result += 4 * v3;
          FIELD_U8(result, 6) = a3;
          break;
        case 3:
          result += 4 * v3;
          FIELD_U8(result, 7) = a3;
          break;
        default:
          return result;
      }
    }
  }
  return result;
}
