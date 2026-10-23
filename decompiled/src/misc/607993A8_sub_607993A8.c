/* sub_607993A8
 * address: 0x607993A8   size: 596   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607993A8(int a1)
{
  int v2; // r0
  int v3; // r6
  int v4; // r7
  int v5; // r5
  int v6; // r6
  int v7; // r0
  bool v8; // zf
  int v9; // r0
  bool v10; // zf
  _DWORD *v11; // r5
  int v12; // r1
  int v13; // r1
  int result; // r0

  v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 644))(a1);
  if ( FIELD_F32(a1, 124) > 0.0 )
    goto LABEL_5;
  v3 = 2;
  if ( v2 )
    v3 = 0;
  if ( (FIELD_U8(a1, 1236) & 0x20) != 0 )
  {
LABEL_5:
    v4 = FIELD_U32(a1, 1216);
    v5 = 1024;
    v6 = 608;
    if ( (v4 & 0x90) == 0x10 )
      goto LABEL_27;
    if ( !sub_6075EDF8(a1) )
    {
      if ( !sub_6075EE0C(a1) )
        goto LABEL_11;
      v7 = FIELD_U32(a1, 1320);
      v8 = v7 == 0;
      if ( v7 )
        v8 = v7 == 3;
      if ( !v8 )
      {
LABEL_11:
        if ( (v4 & 8) != 0 )
          goto LABEL_27;
      }
    }
    if ( (FIELD_U8(a1, 1221) & 0x80) != 0 )
      goto LABEL_25;
    v9 = FIELD_U32(a1, 1320);
    v10 = v9 == 3;
    if ( v9 != 3 )
      v10 = v9 == 0;
    if ( !v10 )
      goto LABEL_27;
    v11 = (_DWORD *)sub_6079D894(a1);
    v3 = 1;
    if ( v11 )
      v3 = sub_6075F914((_DWORD *)a1) && sub_6075F914(v11);
    if ( sub_6079E090(a1) )
      v3 = 0;
  }
  if ( !v3 )
  {
    v5 = 1024;
    v6 = 608;
    goto LABEL_27;
  }
  if ( v3 != 1 )
    goto LABEL_28;
LABEL_25:
  v5 = 256;
  v6 = 32;
LABEL_27:
  FIELD_U32(a1, 3872) |= v5 | v6;
LABEL_28:
  if ( (FIELD_U32(a1, 1216) & 0x90) == 0x10 )
  {
    v12 = FIELD_U32(a1, 3864);
    FIELD_U32(a1, 3856) |= 0xD000660u;
    FIELD_U32(a1, 3864) = v12 | 0xD000660;
    FIELD_U32(a1, 12136) = 3;
  }
  else if ( !sub_6075EDF8(a1) )
  {
    sub_6075EE0C(a1);
  }
  if ( (FIELD_U8(a1, 1226) & 0x40) != 0 )
  {
    FIELD_U32(a1, 3880) |= 0xD000660u;
    v13 = FIELD_U32(a1, 3864);
    FIELD_U32(a1, 3856) |= 0xD000660u;
    FIELD_U32(a1, 3864) = v13 | 0xD000660;
    FIELD_U32(a1, 3872) |= 0xD000660u;
    FIELD_U32(a1, 12136) = 5;
    goto LABEL_36;
  }
  if ( FIELD_U32(a1, 12136) )
  {
LABEL_36:
    FIELD_U32(a1, 3884) |= 0x400000u;
    FIELD_U32(a1, 3860) |= 0x400000u;
    FIELD_U32(a1, 3868) |= 0x400000u;
    FIELD_U32(a1, 3876) |= 0x400000u;
  }
  result = FIELD_U8(a1, 1235);
  if ( (result & 0x40) != 0 )
  {
    FIELD_U32(a1, 3880) |= 0x40000000u;
    FIELD_U32(a1, 3856) |= 0x40000000u;
    FIELD_U32(a1, 3864) |= 0x40000000u;
    result = FIELD_U32(a1, 3872) | 0x40000000;
    FIELD_U32(a1, 3872) = result;
  }
  return result;
}
