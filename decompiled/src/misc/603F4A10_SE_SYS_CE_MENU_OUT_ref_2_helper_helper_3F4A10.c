/* SE_SYS_CE_MENU_OUT_ref_2_helper_helper_3F4A10
 * address: 0x603F4A10   size: 348   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall SE_SYS_CE_MENU_OUT_ref_2_helper_helper_3F4A10(int a1, int a2, char *a3)
{
  int v5; // r6
  int Area; // r0
  int v7; // r2
  int result; // r0
  char v9; // r1
  int v10; // r3
  int v11; // r0
  int v12; // r1
  int v13; // r2
  int v14; // r0
  int v15; // r1
  int v16; // r2
  int v17; // r1
  int v18; // r2
  int v19; // r1

  v5 = Level_instance;
  Area = Level_getArea(Level_instance, 0);
  if ( Area )
  {
    v7 = FIELD_U32(Area, 148);
    if ( v7 >= 1 )
    {
      result = FIELD_U32(Area, 28);
      v9 = 0;
      v10 = 0;
      while ( FIELD_U8(result, 19) != a2 )
      {
        ++v10;
        result += 24;
        if ( v10 >= v7 )
          goto LABEL_6;
      }
      goto LABEL_25;
    }
  }
LABEL_6:
  v11 = Level_getArea(v5, 1u);
  if ( v11 )
  {
    v12 = FIELD_U32(v11, 148);
    if ( v12 >= 1 )
    {
      result = FIELD_U32(v11, 28);
      v13 = 0;
      while ( FIELD_U8(result, 19) != a2 )
      {
        ++v13;
        result += 24;
        if ( v13 >= v12 )
          goto LABEL_11;
      }
      v9 = 1;
      goto LABEL_25;
    }
  }
LABEL_11:
  v14 = Level_getArea(v5, 2u);
  if ( v14 )
  {
    v15 = FIELD_U32(v14, 148);
    if ( v15 >= 1 )
    {
      result = FIELD_U32(v14, 28);
      v16 = 0;
      while ( FIELD_U8(result, 19) != a2 )
      {
        ++v16;
        result += 24;
        if ( v16 >= v15 )
          goto LABEL_16;
      }
      v9 = 2;
      goto LABEL_25;
    }
  }
LABEL_16:
  v17 = Level_getArea(v5, 3u);
  result = 0;
  if ( v17 )
  {
    v18 = FIELD_U32(v17, 148);
    if ( v18 >= 1 )
    {
      result = FIELD_U32(v17, 28);
      v19 = 0;
      while ( FIELD_U8(result, 19) != a2 )
      {
        ++v19;
        result += 24;
        if ( v19 >= v18 )
          return 0;
      }
      v9 = 3;
LABEL_25:
      if ( a3 )
        *a3 = v9;
    }
  }
  return result;
}
