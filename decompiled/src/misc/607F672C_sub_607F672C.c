/* sub_607F672C
 * address: 0x607F672C   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F672C(int a1, int a2, char a3, char a4)
{
  int v7; // r4
  int v9[8]; // [sp+0h] [bp-20h] BYREF

  sub_6040D3A4(LevelInfo_instance, a3);
  sub_6040D3B8(LevelInfo_instance, a4);
  v7 = 0;
  v9[0] = 2;
  v9[1] = (int)sub_600246FC;
  if ( sub_607F6028(a1, a2, (int)v9, 0) )
  {
    sub_60023CB0(v9);
    sub_6040D3CC(LevelInfo_instance, 2);
    sub_6040D3E0(LevelInfo_instance, 255);
    v7 = 1;
    sub_6040D3F4(LevelInfo_instance, 1);
  }
  return v7;
}
