/* sub_60951610
 * address: 0x60951610   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60951610(int *a1)
{
  int v1; // r12
  unsigned int v2; // r2
  int result; // r0
  int v4; // r12
  int i; // r0

  v1 = *a1;
  v2 = *(_DWORD *)(*a1 + 4);
  result = 4;
  switch ( HIBYTE(v2) )
  {
    case 0u:
    case 1u:
    case 2u:
    case 0x11u:
      return result;
    case 3u:
      result = 8;
      break;
    case 4u:
      result = 12;
      break;
    case 5u:
    case 6u:
    case 0x10u:
      result = 16;
      break;
    case 7u:
    case 8u:
    case 0xFu:
    case 0x14u:
      v4 = v1 + ((4 * v2) & 0x3FFFFFC);
      for ( i = 0; *(_BYTE *)(v4 + i); i += 3 )
      {
        if ( !*(_BYTE *)(v4 + i + 1) )
          return i + 2;
        if ( !*(_BYTE *)(v4 + i + 2) )
        {
          i += 2;
          break;
        }
        if ( i + 2 >= 0x80000 )
          return 1;
      }
      result = i + 1;
      break;
    case 9u:
      result = 128;
      break;
    case 0xAu:
      result = 256;
      break;
    case 0xBu:
      result = 384;
      break;
    case 0xCu:
      result = 512;
      break;
    case 0xDu:
    case 0xEu:
    case 0x12u:
      result = 4 * *(_DWORD *)(v1 + ((4 * v2) & 0x3FFFFFC) - 4);
      break;
    case 0x13u:
      result = *(_DWORD *)(v1 + ((4 * v2) & 0x3FFFFFC) - 4);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}
