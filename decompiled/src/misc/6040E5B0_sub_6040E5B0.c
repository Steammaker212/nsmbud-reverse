/* sub_6040E5B0
 * address: 0x6040E5B0   size: 588   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040E5B0(unsigned int a1, unsigned int a2, int a3)
{
  int result; // r0
  _DWORD *v5; // r4
  int v6; // r4
  int v7; // r5
  unsigned int v8; // r2
  int v9; // r1
  int v10; // r0
  signed int v11; // r1
  unsigned int v12; // r2
  int v13; // r2
  unsigned int v14; // r4
  int v15; // r0
  signed int v16; // r1

  result = -1;
  if ( a1 > 8 )
    return result;
  v5 = &unk_60B02244;
  if ( a3 )
    v5 = &unk_60B02268;
  v6 = v5[a1];
  if ( a2 <= 0xB )
  {
    result = -1;
    if ( (signed int)a2 < dword_60B021B4[a1] )
      return v6 + a2;
    return result;
  }
  v7 = dword_60B021B4[a1] + v6;
  if ( a3 )
    goto LABEL_9;
  if ( a2 - 24 <= 0x1D && ((1 << (a2 - 24)) & 0x3FC0007F) != 0 )
  {
    v10 = -24;
    if ( a2 > 0x2D )
      v10 = -39;
    v11 = v10 + a2;
    result = -1;
    if ( v11 < dword_60B021FC[a1] )
      return v7 + v11;
  }
  else
  {
    v13 = dword_60B021FC[a1] + v7;
    if ( a2 == 57 )
    {
      if ( a1 )
        return -1;
      return v13;
    }
    else
    {
      v14 = a2 - 31;
      if ( !a1 )
        ++v13;
      if ( v14 > 0x19 || ((1 << v14) & 0x3800007) == 0 )
      {
        v7 = dword_60B021D8[a1] + v13;
LABEL_9:
        v8 = a2 - 12;
        if ( (unsigned __int8)(a2 - 12) > 4u )
        {
          v12 = a2 - 19;
          v9 = 1;
          switch ( v12 )
          {
            case 0u:
              goto LABEL_11;
            case 1u:
              v9 = 2;
              goto LABEL_11;
            case 2u:
              v9 = 3;
              goto LABEL_11;
            case 3u:
              v9 = 4;
              if ( a1 != 7 )
                goto LABEL_11;
              break;
            case 0x11u:
              v9 = 6;
              goto LABEL_11;
            case 0x16u:
              v9 = 4;
              if ( a1 == 7 )
                goto LABEL_11;
              break;
            case 0x17u:
              v9 = 5;
              goto LABEL_11;
            default:
              return result;
          }
        }
        else
        {
          v9 = 0;
          if ( v8 == a1 )
          {
LABEL_11:
            if ( (byte_60AC73A0[a1] & (1 << v9)) != 0 )
              return v7 + sub_608FBBD0(byte_60AC73A0[a1], v9) - 1;
          }
        }
        return result;
      }
      v15 = -31;
      if ( a2 > 0x35 )
        v15 = -51;
      v16 = v15 + a2;
      result = -1;
      if ( v16 < dword_60B021D8[a1] )
        return v13 + v16;
    }
  }
  return result;
}
