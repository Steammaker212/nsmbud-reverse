/* sub_6040D310
 * address: 0x6040D310   size: 140   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6040D310(int a1)
{
  int Area; // r0
  int v3; // r1
  int v4; // r2
  int v5; // r2

  Area = Level_getArea(Level_instance, FIELD_U8(a1, 30));
  v3 = FIELD_U8(a1, 31);
  if ( v3 == 255 )
  {
    v4 = FIELD_U32(Area, 8);
    v3 = FIELD_U8(v4, 16);
    if ( (unsigned int)(FIELD_U32(dword_60C99DD4, 764) - 1) <= 1 )
    {
      v5 = FIELD_U8(v4, 19);
      if ( v5 )
        v3 = v5;
    }
    FIELD_U8(a1, 31) = v3;
  }
  FIELD_U8(a1, 20) = *(_BYTE *)(sub_60727D48(Area, v3) + 13);
  FIELD_U8(a1, 18) = FIELD_U8(a1, 30);
  FIELD_U8(a1, 19) = FIELD_U8(a1, 31);
  FIELD_U32(a1, 24) = FIELD_U32(a1, 32);
  FIELD_U32(a1, 32) = 0;
  return 0;
}
