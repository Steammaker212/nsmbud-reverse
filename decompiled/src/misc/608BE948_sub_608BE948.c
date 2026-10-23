/* sub_608BE948
 * address: 0x608BE948   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_608BE948(int a1, int a2)
{
  int v4; // r6
  int v5; // r0
  int v6; // r0
  int v7; // r0
  _BYTE v9[76]; // [sp+4h] [bp-6Ch] BYREF
  int v10; // [sp+50h] [bp-20h]
  _DWORD v11[7]; // [sp+54h] [bp-1Ch] BYREF

  v4 = 0;
  if ( sub_608C1208(a2, v11, 0) == 1 )
  {
    FIELD_U32(a1, 972) = v11[0];
    FIELD_U32(a1, 976) = v11[1];
    FIELD_U32(a1, 980) = v11[2];
    sub_608C1178(a2, v9);
    FIELD_U32(a1, 304) = *(_DWORD *)sub_608BCA50(FIELD_U32(a2, 8));
    v5 = sub_608C113C(a2);
    sub_608D7058(a1 + 252, v9, v5);
    if ( sub_608C113C(a2) == 1 )
    {
      FIELD_U8(a1, 988) = 1;
      v6 = v10;
    }
    else
    {
      v6 = 0;
      FIELD_U8(a1, 988) = 0;
    }
    FIELD_U32(a1, 992) = v6;
    v4 = 1;
    v7 = FIELD_U32(a1, 304);
    if ( v7 >= 16 )
      v7 = 16;
    FIELD_U32(a1, 996) = v7;
  }
  return v4;
}
