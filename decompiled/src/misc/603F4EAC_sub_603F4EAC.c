/* sub_603F4EAC
 * address: 0x603F4EAC   size: 292   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603F4EAC(int a1)
{
  int v2; // r6
  int result; // r0
  int v4; // r5
  char v5; // r6
  int v6; // r2
  float v7; // s0
  int v8; // r0
  float v9; // [sp+0h] [bp-20h] BYREF
  float v10; // [sp+4h] [bp-1Ch]
  int v11; // [sp+8h] [bp-18h]
  float v12; // [sp+Ch] [bp-14h]

  v2 = FIELD_U8(LevelInfo_instance, 20);
  result = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
  v4 = result;
  if ( result )
  {
    v9 = 3.4028e38;
    v10 = 3.4028e38;
    v11 = -8388609;
    v12 = -3.4028e38;
    sub_60727620(result, v2, &v9);
    v5 = 0;
    v6 = 0;
    while ( 1 )
    {
      result = sub_60727CF0(v4, 486, v6);
      v6 = result;
      if ( !result )
        break;
      if ( v9 <= (float)FIELD_U16(result, 2) )
      {
        v7 = -(float)FIELD_U16(result, 4);
        if ( v10 <= v7 )
        {
          result = v12 >= v7;
          v5 |= result;
          if ( v12 >= v7 )
            goto LABEL_9;
        }
      }
    }
    v6 = 0;
LABEL_9:
    if ( (v5 & 1) != 0 )
    {
      result = FIELD_U32(v6, 8) & 0xF;
      if ( result == 1 )
      {
        v8 = operator_new(0xDE4u);
        result = sub_604DEB08(v8);
        FIELD_U32(a1, 2588) = result;
      }
    }
  }
  return result;
}
