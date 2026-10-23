/* sub_606E5000
 * address: 0x606E5000   size: 352   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606E5000(int a1, int a2)
{
  int result; // r0
  int *i; // r6
  int v6; // r1
  int v7; // r2
  int v8; // r7
  float v9; // s4

  FIELD_U8(a1, 713) = FIELD_U8(a1, 712);
  FIELD_U8(a1, 712) = 0;
  if ( FIELD_U32(a1, 644) != -1 )
  {
    FIELD_U8(a1, 649) = FIELD_U8(a1, 648);
    FIELD_U8(a1, 648) = 0;
    FIELD_U32(a1, 652) = 0;
    FIELD_U32(a1, 656) = 0;
  }
  if ( FIELD_U32(a1, 660) != -1 )
  {
    FIELD_U8(a1, 665) = FIELD_U8(a1, 664);
    FIELD_U8(a1, 664) = 0;
    FIELD_U32(a1, 668) = 0;
    FIELD_U32(a1, 672) = 0;
  }
  if ( FIELD_U32(a1, 676) != -1 )
  {
    FIELD_U8(a1, 681) = FIELD_U8(a1, 680);
    FIELD_U8(a1, 680) = 0;
    FIELD_U32(a1, 684) = 0;
    FIELD_U32(a1, 688) = 0;
  }
  result = FIELD_U32(a1, 692);
  if ( result != -1 )
  {
    FIELD_U8(a1, 697) = FIELD_U8(a1, 696);
    result = 0;
    FIELD_U8(a1, 696) = 0;
    FIELD_U32(a1, 700) = 0;
    FIELD_U32(a1, 704) = 0;
  }
  for ( i = *(int **)(a1 + 1080); i; i = (int *)i[1] )
  {
    result = *i;
    if ( *i )
    {
      result = FIELD_U32(result, 2196);
      if ( FIELD_U8(result, 533) == 1 )
      {
        v6 = FIELD_S8(result, 84);
        if ( v6 <= 3 )
        {
          v7 = a2 + 16 * v6;
          v8 = a1 + 16 * v6;
          FIELD_U8(v7, 12) = v6;
          *(_DWORD *)v7 = 0;
          FIELD_U8(v8, 648) = 1;
          FIELD_U32(v7, 4) = FIELD_U32(a1, 1152);
          FIELD_U32(v7, 8) = FIELD_U32(a1, 980);
          v9 = FIELD_F32(a1, 108) - FIELD_F32(result, 108);
          FIELD_F32(v8, 652) = sqrtf(
                                   (float)((float)(FIELD_F32(a1, 112) - FIELD_F32(result, 112))
                                         * (float)(FIELD_F32(a1, 112) - FIELD_F32(result, 112)))
                                 + (float)(v9 * v9));
          result = FIELD_U32(a1, 1152);
          FIELD_U32(v8, 656) = result;
          FIELD_U8(a1, 712) = 1;
        }
      }
    }
  }
  return result;
}
