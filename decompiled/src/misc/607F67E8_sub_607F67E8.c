/* sub_607F67E8
 * address: 0x607F67E8   size: 180   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F67E8(int a1, int a2, char a3, char a4)
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
    v7 = 1;
    sub_6040D3F4(LevelInfo_instance, 1);
    sub_603FD238(dword_60C99DEC + 16);
  }
  return v7;
}
