/* sub_607C6648
 * address: 0x607C6648   size: 224   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607C6648(int a1)
{
  int v2; // r5
  int v3; // r7
  bool v4; // zf
  int *v5; // r1
  int v7; // [sp+4h] [bp-1Ch] BYREF

  v2 = 0;
  v3 = a1 + 6904;
  if ( (FIELD_U8(a1, 6904) & 0x1C) == 0 && (FIELD_U32(a1, 1208) & 0x4000070) == 0 )
  {
    v2 = 0;
    if ( sub_607868D4(a1 + 688, &v7) == 1 )
    {
      if ( sub_607C62F0(a1, v7) )
      {
        v4 = (FIELD_U8(v3, 1) & 0x80) == 0;
        if ( (FIELD_U8(v3, 1) & 0x80) == 0 )
          v4 = (FIELD_U8(a1, 1229) & 0x80) == 0;
        if ( v4 && FIELD_F32(a1, 124) < 0.0 )
        {
          v5 = &dword_60CC4DCC;
LABEL_14:
          Player_changeState(a1, (StateBase *)v5, 0);
          return 1;
        }
      }
      if ( sub_6078663C(a1 + 688) == 1 && sub_607C651C(a1, v7) )
      {
        v5 = &dword_60CC4DEC;
        goto LABEL_14;
      }
    }
  }
  return v2;
}
