/* sub_607291A8
 * address: 0x607291A8   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607291A8(float a1, float a2, int a3, _DWORD *a4, unsigned int a5)
{
  int Area; // r0
  int v9; // r1
  float v10; // s0
  int v11; // r5
  char *i; // r0
  float v13; // s6
  float v14; // s8
  unsigned __int8 v15; // r7
  float v16; // s10
  float v17; // s12
  float v18; // s8

  Area = Level_getArea(Level_instance, a5);
  v9 = FIELD_U32(Area, 148);
  if ( v9 < 1 )
    return 0;
  v10 = -a2;
  v11 = 0;
  for ( i = (char *)(FIELD_U32(Area, 28) + 8); ; i += 24 )
  {
    if ( !((unsigned __int8)i[8] >> 7) )
    {
      v13 = 16.0;
      v14 = 32.0;
      v15 = i[3] - 5;
      if ( v15 <= 0xEu )
      {
        v14 = flt_60B0A190[(char)v15];
        v13 = flt_60B0A150[(char)v15];
      }
      v16 = (float)*((unsigned __int16 *)i - 4);
      v17 = (float)*((unsigned __int16 *)i - 3);
      v18 = v14 + v16;
      if ( (float)(v13 + v17) > v10 && v17 <= v10 && v16 <= a1 && v18 > a1 )
        break;
    }
    if ( ++v11 >= v9 )
      return 0;
  }
  *a4 = *i;
  return 1;
}
