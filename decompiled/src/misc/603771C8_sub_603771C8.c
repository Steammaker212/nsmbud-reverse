/* sub_603771C8
 * address: 0x603771C8   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603771C8(int a1)
{
  int result; // r0
  unsigned int v3; // r5
  int Area; // r7
  int v5; // r4
  int v6; // r0
  _DWORD v7[12]; // [sp+0h] [bp-30h] BYREF

  result = FIELD_U8(dword_60CC6D78, 109032);
  if ( FIELD_U8(dword_60CC6D78, 109032) )
  {
    v3 = 0;
    FIELD_U8(a1, 112) = 0;
    FIELD_U32(a1, 116) = 0;
    while ( 1 )
    {
      Area = Level_getArea(Level_instance, FIELD_U8(LevelInfo_instance, 18));
      v5 = sub_60727908(Area, v3 + 90);
      if ( !v5 )
        break;
      v7[2] = v3 + 90;
      v7[0] = sub_60727950(Area, v3 + 90);
      v7[1] = FIELD_U16(v5, 4);
      ((void (__fastcall *)(int, unsigned int, _DWORD *))sub_603778B4)(a1, v3++, v7);
      v6 = FIELD_U32(a1, 96) + 1;
      FIELD_U32(a1, 96) = v6;
      if ( v3 >= 0xA )
        goto LABEL_7;
    }
    v6 = FIELD_U32(a1, 96);
LABEL_7:
    if ( v6 >= 1 )
      FIELD_U32(a1, 100) = 1;
    result = FIELD_U8(LevelInfo_instance, 18);
    FIELD_U32(a1, 124) = result;
  }
  return result;
}
