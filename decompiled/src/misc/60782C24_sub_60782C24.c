/* sub_60782C24
 * address: 0x60782C24   size: 368   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

float __fastcall sub_60782C24(int a1, int a2)
{
  int v2; // r1
  int v3; // r0
  int v4; // r0

  v2 = dword_60B0B318[a2];
  v3 = FIELD_U32(a1, 16);
  switch ( v2 )
  {
    case 0:
      v4 = v3 + 960;
      break;
    case 1:
      v4 = v3 + 560;
      break;
    case 2:
      v4 = v3 + 1136;
      break;
    case 3:
      v4 = v3 + 1232;
      break;
    case 4:
      v4 = v3 + 640;
      break;
    case 5:
      v4 = v3 + 880;
      break;
    case 6:
      v4 = v3 + 800;
      break;
    case 7:
      v4 = v3 + 720;
      break;
    case 8:
      v4 = v3 + 120;
      break;
    case 9:
      v4 = v3 + 216;
      break;
    case 10:
      v4 = v3 + 248;
      break;
    case 11:
      v4 = v3 + 280;
      break;
    case 12:
      v4 = v3 + 416;
      break;
    case 13:
      v4 = v3 + 1040;
      break;
    case 14:
      v4 = v3 + 960;
      break;
    case 15:
      v4 = v3 + 480;
      break;
    case 16:
      v4 = v3 + 184;
      break;
    case 17:
      v4 = v3 + 32;
      break;
    case 18:
      v4 = v3 + 96;
      break;
    case 19:
      v4 = v3 + 48;
      break;
    case 20:
      v4 = v3 + 64;
      break;
    case 21:
      v4 = v3 + 80;
      break;
    case 22:
      v4 = v3 + 16;
      break;
    case 23:
      v4 = v3 + 152;
      break;
    case 24:
      v4 = v3 + 368;
      break;
    default:
      v4 = 0;
      break;
  }
  return *(float *)(v4 + 8 * dword_60B0B3CC[v2] - 4);
}
