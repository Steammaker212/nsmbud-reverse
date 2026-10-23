/* sub_607F65E0
 * address: 0x607F65E0   size: 308   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607F65E0(int a1, int a2, int a3, int a4)
{
  int v8; // r6
  int v9; // r4
  int v11[8]; // [sp+0h] [bp-20h] BYREF

  sub_6040D3A4(LevelInfo_instance, a3);
  sub_6040D3B8(LevelInfo_instance, a4);
  v8 = 0;
  v11[0] = 2;
  v11[1] = (int)sub_600246FC;
  if ( sub_607F6028(a1, a2, (int)v11, 0) )
  {
    sub_60023CB0(v11);
    if ( dword_60CC6D78 && FIELD_U8(dword_60CC6D78, 109032)
      || (v9 = dword_60C99DEC, sub_603F6960((unsigned __int8 *)(dword_60C99DEC + 16), a3, a4) == -1) )
    {
      sub_6040D3CC(LevelInfo_instance, 0);
      sub_6040D3E0(LevelInfo_instance, 255);
      v8 = 1;
      sub_6040D3F4(LevelInfo_instance, 1);
    }
    else
    {
      sub_6040D3CC(LevelInfo_instance, FIELD_U8(v9, 22));
      sub_6040D3E0(LevelInfo_instance, FIELD_U8(v9, 23));
      sub_6040D3F4(LevelInfo_instance, 2);
      return 1;
    }
  }
  return v8;
}
