/* sub_60895AD8
 * address: 0x60895AD8   size: 300   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60895AD8(int a1, _DWORD *a2, int a3, int a4)
{
  __int64 v5; // r8
  int v8; // r0
  int v9; // r0
  int v10; // r0
  int v11; // r0
  int v13; // [sp+8h] [bp+0h] BYREF
  int v14; // [sp+Ch] [bp+4h]
  int v15; // [sp+10h] [bp+8h]
  int v16; // [sp+14h] [bp+Ch]

  HIDWORD(v5) = a4;
  LODWORD(v5) = 0;
  *(_QWORD *)a1 = v5;
  v16 = 0;
  v15 = 0;
  v14 = 0;
  v13 = 0;
  sub_6083D5B0(&v13);
  v14 = 16;
  v8 = sub_608352A0(a2, (int)&v13);
  FIELD_U32(a1, 24) = (a3 + v8 - 1) & -v8;
  v9 = sub_60882028();
  if ( sub_6089632C(a1 + 32, a2, v9, 16, FIELD_U32(a1, 24)) == 1 )
  {
    sub_60835528(a1 + 32, a1 + 416);
    v10 = sub_60882028();
    if ( sub_6089632C(a1 + 440, a2, v10, 16, FIELD_U32(a1, 24)) == 1 )
    {
      sub_60835528(a1 + 440, a1 + 824);
      if ( FIELD_U32(a1, 4) != 3 )
      {
LABEL_6:
        LODWORD(v5) = 1;
        FIELD_U8(a1, 28) = 1;
        return v5;
      }
      v11 = sub_60882028();
      if ( sub_6089632C(a1 + 848, a2, v11, 16, FIELD_U32(a1, 24)) == 1 )
      {
        sub_60835528(a1 + 848, a1 + 1232);
        goto LABEL_6;
      }
    }
  }
  return v5;
}
