/* sub_608A9A94
 * address: 0x608A9A94   size: 8   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608A9A94(int a1, unsigned int a2)
{
  _DWORD *v2; // r12
  int result; // r0
  int v4; // r2
  unsigned int v5; // r1
  unsigned int *v6; // r1
  char *v7; // r12
  unsigned int v8; // t1
  unsigned int v9; // r1
  char *v10; // r1

  v2 = *(_DWORD **)(FIELD_U32(a1, 4) + 60);
  result = -1;
  switch ( HIBYTE(a2) )
  {
    case 1u:
      goto LABEL_2;
    case 2u:
      if ( (a2 & 0xFF000000) != 0x2000000 )
        return result;
      v5 = a2 & 0xFFFFFF;
      if ( v5 >= *(_DWORD *)((char *)v2 + v2[3]) )
        return result;
      v6 = (_DWORD *)((char *)v2 + v2[3] + *(_DWORD *)((char *)&v2[2 * v5 + 2] + v2[3]));
      if ( !v6 )
        return result;
      a2 = *v6;
LABEL_2:
      if ( (a2 & 0xFF000000) != 0x1000000 )
        return result;
      v4 = v2[1];
      break;
    case 3u:
      if ( (a2 & 0xFF000000) != 0x3000000 )
        return result;
      v4 = v2[5];
      break;
    case 5u:
      if ( (a2 & 0xFF000000) != 0x5000000 )
        return result;
      v4 = v2[7];
      break;
    case 6u:
      if ( (a2 & 0xFF000000) != 0x6000000 )
        return result;
      v4 = v2[9];
      break;
    default:
      return result;
  }
  v8 = *(_DWORD *)((char *)v2 + v4);
  v7 = (char *)v2 + v4;
  v9 = a2 & 0xFFFFFF;
  if ( v9 < v8 )
  {
    v10 = &v7[*(_DWORD *)&v7[8 * v9 + 8]];
    if ( v10 )
      return *(_DWORD *)v10;
  }
  return result;
}
