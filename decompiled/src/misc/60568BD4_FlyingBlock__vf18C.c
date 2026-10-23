/* FlyingBlock__vf18C
 * address: 0x60568BD4   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: BlockBase : 0x605632B4
// 
// Overridden by: None
int __fastcall FlyingBlock__vf18C(int a1)
{
  int result; // r0
  int v3; // r0
  int v4; // r1
  int v5; // r2

  result = FIELD_U8(dword_60CC6D8C, 17);
  if ( FIELD_U8(dword_60CC6D8C, 17) )
  {
    result = Actor__getProfileId((Actor *)a1);
    if ( result == 290 )
    {
      result = a1 + 6884;
      if ( (float)((float)(FIELD_F32(a1, 6888) * FIELD_F32(a1, 6888))
                 + (float)(FIELD_F32(a1, 6884) * FIELD_F32(a1, 6884))) > 65536.0 )
      {
        v3 = FIELD_U32(a1, 108);
        v4 = FIELD_U32(a1, 112);
        v5 = FIELD_U32(a1, 116);
        FIELD_U32(a1, 584) = v3;
        FIELD_U32(a1, 588) = v4;
        FIELD_U32(a1, 592) = v5;
        FIELD_U32(a1, 608) = v3;
        FIELD_U32(a1, 612) = v4;
        FIELD_U32(a1, 616) = v5;
        return sub_60160948((_DWORD *)(a1 + 6120));
      }
    }
  }
  return result;
}
