/* sub_604E2228
 * address: 0x604E2228   size: 780   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_604E2228(_DWORD *a1)
{
  int v2; // r2
  unsigned int v3; // r1
  int *v4; // r5
  unsigned int v5; // r0
  int result; // r0
  int v7; // r8
  unsigned int v8; // r1
  int v9; // r0
  bool v10; // zf
  int v11; // r1
  unsigned int v12; // r1
  int v13; // r0
  unsigned int v14; // r1
  int v15; // r0

  v2 = 0;
  *(_BYTE *)(a1[897] + 64) &= ~1u;
  *(_BYTE *)(a1[898] + 64) &= ~1u;
  *(_BYTE *)(a1[899] + 64) &= ~1u;
  *(_BYTE *)(a1[900] + 64) &= ~1u;
  *(_BYTE *)(a1[901] + 64) &= ~1u;
  *(_BYTE *)(a1[902] + 64) &= ~1u;
  *(_BYTE *)(a1[903] + 64) &= ~1u;
  *(_BYTE *)(a1[904] + 64) &= ~1u;
  *(_BYTE *)(a1[905] + 64) &= ~1u;
  *(_BYTE *)(a1[906] + 64) &= ~1u;
  *(_BYTE *)(a1[907] + 64) &= ~1u;
  *(_BYTE *)(a1[908] + 64) &= ~1u;
  *(_BYTE *)(a1[909] + 64) &= ~1u;
  *(_BYTE *)(a1[910] + 64) &= ~1u;
  *(_BYTE *)(a1[911] + 64) &= ~1u;
  v4 = a1 + 1431;
  v3 = a1[1431];
  v5 = 0;
  if ( v3 < 4 )
    v5 = v3;
  result = *(_DWORD *)(PlayerMgr_instance + 4 * v5 + 32);
  if ( result )
  {
    v7 = FIELD_U8(dword_60CC6D78, 20);
    switch ( a1[1428] )
    {
      case 1:
      case 2:
      case 9:
      case 0xA:
      case 0x10:
      case 0x13:
      case 0x14:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x1B:
      case 0x1D:
      case 0x1F:
        v2 = 5;
        break;
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
      case 8:
      case 0x11:
      case 0x12:
        v8 = sub_6045B330((__guard *)dword_60C9CFB8, v3) - 3;
        v9 = FIELD_U32(dword_60C9CFB8, 16);
        if ( v8 > 1 )
        {
          v2 = 2;
          if ( !v9 )
            v2 = 1;
        }
        else
        {
          v2 = 4;
          if ( !v9 )
            v2 = 3;
        }
        break;
      case 0x1C:
        v12 = sub_6045B330((__guard *)dword_60C9CFB8, v3) - 3;
        v13 = FIELD_U32(dword_60C9CFB8, 16);
        if ( v12 > 1 )
        {
          v2 = 10;
          if ( !v13 )
            v2 = 9;
        }
        else
        {
          v2 = 8;
          if ( !v13 )
            v2 = 7;
        }
        break;
      case 0x1E:
        v14 = sub_6045B330((__guard *)dword_60C9CFB8, v3) - 3;
        v15 = FIELD_U32(dword_60C9CFB8, 16);
        if ( v14 > 1 )
        {
          v2 = 11;
          if ( !v15 )
            v2 = 12;
        }
        else
        {
          v2 = 13;
          if ( !v15 )
            v2 = 14;
        }
        break;
      default:
        break;
    }
    v10 = v2 == 5;
    result = v7 ^ 1;
    *(_BYTE *)(a1[v2 + 897] + 64) |= 1u;
    if ( v2 == 5 )
      v10 = a1[1428] == 27;
    if ( v10 )
      *(_BYTE *)(a1[903] + 64) |= 1u;
    a1[1432] = v2;
    v11 = *v4;
    if ( (unsigned int)*v4 >= 4 )
      v11 = 0;
    a1[v11 + 916] = result;
  }
  return result;
}
