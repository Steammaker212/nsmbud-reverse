/* sub_60566EDC
 * address: 0x60566EDC   size: 356   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60566EDC(int a1)
{
  int result; // r0
  int v3; // r1

  result = FIELD_U32(a1, 6420);
  if ( result == 41 )
  {
    result = FIELD_U8(a1, 6260);
    if ( (result & 0x10) != 0 )
    {
      (*(void (__fastcall **)(int, int *))(*(_DWORD *)a1 + 192))(a1, &dword_60CB0534);
      FIELD_U8(a1, 6846) = 1;
      FIELD_U32(a1, 6864) = 2;
      FIELD_U32(a1, 7368) = 2;
      FIELD_U32(a1, 7296) = 50;
      FIELD_U8(a1, 535) = 1;
      FIELD_U32(a1, 6432) = sub_605B348C;
      FIELD_U32(a1, 6436) = sub_605B3934;
      FIELD_U32(a1, 6440) = sub_605B4110;
      if ( FIELD_U8(dword_60CC6D8C, 17) )
        v3 = 12;
      else
        v3 = 7;
      ColliderBase_setType((ColliderBase *)(a1 + 6120), v3);
      FIELD_U32(a1, 6256) |= 0x18u;
      FIELD_U8(a1, 6843) = 0;
      FIELD_U8(a1, 84) = FIELD_U32(a1, 6860);
      sub_605B5274(a1);
      sub_605B52E0(a1);
      FIELD_U32(a1, 3192) |= 0x40000004u;
      sub_605B6364(a1, a1 + 6856, FIELD_S8(a1, 6850));
      sub_605641B4(a1);
      return sub_605BA078(dword_60CB061C, a1 + 6980, 1, FIELD_U8(LevelInfo_instance, 18));
    }
  }
  return result;
}
