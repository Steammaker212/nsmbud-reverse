/* sub_601E73A4
 * address: 0x601E73A4   size: 236   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

StateMethodExecuter *__fastcall sub_601E73A4(int a1)
{
  unsigned int v2; // r0
  int v4; // r0

  FIELD_U8(a1, 62) = 1;
  sub_601A12E0(dword_60C89E00);
  sub_601E74A4(a1);
  if ( !FIELD_U8(dword_60CC6D78, 28) && FIELD_U32(dword_60CC6D78, 32) != 5 )
  {
    v2 = FIELD_U32(dword_60CC6D78, 424) - 31;
    if ( v2 > 0x19 || ((1 << v2) & 0x3800007) == 0 )
    {
      v4 = sub_601918EC(dword_60C8996C);
      sub_6018F9B0(v4);
    }
  }
  if ( sub_60191B00((_DWORD *)dword_60C8996C) )
  {
    FIELD_U8(a1, 66) = 1;
    FIELD_U8(a1, 67) = 0;
  }
  else
  {
    FIELD_U8(a1, 66) = 0;
    FIELD_U8(a1, 67) = 1;
    sub_601E7F30();
  }
  return StateMgr__changeState((StateMgr *)(a1 + 40), &stru_60C8B148);
}
