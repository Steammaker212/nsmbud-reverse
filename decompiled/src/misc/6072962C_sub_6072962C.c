/* sub_6072962C
 * address: 0x6072962C   size: 412   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6072962C(int a1)
{
  int Area; // r6
  int v3; // r0
  int v4; // r5
  int v5; // r1
  unsigned __int16 *v6; // r0
  int v7; // r6
  unsigned __int8 v8; // r0
  int v9; // r7
  int v10; // r0
  int v11; // r0
  int v12; // r1

  Area = Level_getArea(Level_instance, FIELD_U8(a1, 25));
  v3 = sub_60727D48(Area, FIELD_U8(a1, 26));
  v4 = LevelInfo_instance;
  v5 = 0;
  if ( FIELD_U8(LevelInfo_instance, 18) == FIELD_U8(a1, 25) )
  {
    v5 = 1;
    if ( FIELD_U8(LevelInfo_instance, 20) == FIELD_U8(a1, 29) )
      v5 = 2;
  }
  FIELD_U32(a1, 44) = v5;
  v6 = sub_60727620(Area, FIELD_U8(v3, 13), 0);
  sub_60023F84((int)v6);
  v7 = 5;
  v8 = FIELD_U8(a1, 27) - 2;
  if ( v8 <= 0x11u )
    v7 = dword_60B0A100[(char)v8];
  v9 = v7;
  if ( FIELD_U8(a1, 38) )
    v9 = FIELD_U8(a1, 38) - 1;
  v10 = Level_getArea(Level_instance, FIELD_U8(a1, 25));
  v11 = *(unsigned __int8 *)(sub_60727D48(v10, FIELD_U8(a1, 26)) + 22);
  if ( v11 )
    v7 = v11 - 1;
  if ( dword_60C99DD4 && FIELD_U32(dword_60C99DD4, 764) == 4 && dword_60CC6D78 && !FIELD_U8(dword_60CC6D78, 20) )
  {
    v12 = 786444;
    if ( !dword_60C9A1F0 )
      v12 = v7 | (v9 << 16);
  }
  else
  {
    v12 = v7 | (v9 << 16);
  }
  FIELD_U32(dword_60CC62E4, 108) = v12;
  sub_6040D3A4(v4, FIELD_U8(v4, 16));
  sub_6040D3B8(v4, FIELD_U8(v4, 29));
  sub_6040D3CC(v4, FIELD_U8(a1, 25));
  sub_6040D3E0(v4, FIELD_U8(a1, 26));
  sub_6040D3F4(v4, 3);
  return sub_603F4960(AreaTask_intance);
}
