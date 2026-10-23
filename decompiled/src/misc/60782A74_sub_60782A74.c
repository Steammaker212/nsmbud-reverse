/* sub_60782A74
 * address: 0x60782A74   size: 424   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60782A74(int a1, int a2, float a3)
{
  int v3; // r12
  int v4; // lr
  int v5; // r1
  int v6; // r0
  float *v7; // r3
  int v8; // r4
  int result; // r0

  v3 = 0;
  v4 = dword_60B0B318[a2];
  v5 = 0;
  v6 = FIELD_U32(a1, 16);
  switch ( v4 )
  {
    case 0:
      v3 = v6 + 960;
      break;
    case 1:
      v3 = v6 + 560;
      break;
    case 2:
      v3 = v6 + 1136;
      break;
    case 3:
      v3 = v6 + 1232;
      break;
    case 4:
      v3 = v6 + 640;
      break;
    case 5:
      v3 = v6 + 880;
      break;
    case 6:
      v3 = v6 + 800;
      break;
    case 7:
      v3 = v6 + 720;
      break;
    case 8:
      v3 = v6 + 120;
      break;
    case 9:
      v3 = v6 + 216;
      break;
    case 10:
      v3 = v6 + 248;
      break;
    case 11:
      v3 = v6 + 280;
      break;
    case 12:
      v3 = v6 + 416;
      break;
    case 13:
      v3 = v6 + 1040;
      break;
    case 14:
      v3 = v6 + 960;
      break;
    case 15:
      v3 = v6 + 480;
      break;
    case 16:
      v3 = v6 + 184;
      break;
    case 17:
      v3 = v6 + 32;
      break;
    case 18:
      v3 = v6 + 96;
      break;
    case 19:
      v3 = v6 + 48;
      break;
    case 20:
      v3 = v6 + 64;
      break;
    case 21:
      v3 = v6 + 80;
      break;
    case 22:
      v3 = v6 + 16;
      break;
    case 23:
      v3 = v6 + 152;
      break;
    case 24:
      v3 = v6 + 368;
      break;
    default:
      break;
  }
  v7 = (float *)(v3 + 4);
  v8 = dword_60B0B3CC[v4];
  result = 0;
  do
  {
    if ( v5 >= v8 - 1 )
      break;
    if ( *v7 > a3 )
      break;
    result = *((_DWORD *)v7 - 1);
    ++v5;
    v7 += 2;
  }
  while ( v5 < v8 );
  return result;
}
