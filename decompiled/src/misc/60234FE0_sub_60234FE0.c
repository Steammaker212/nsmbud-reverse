/* sub_60234FE0
 * address: 0x60234FE0   size: 200   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60234FE0(int a1, int a2)
{
  int result; // r0
  unsigned int U32; // r0
  unsigned int v5; // r0

  result = FIELD_U8(a1, 10);
  if ( !result )
  {
    result = FIELD_U32(a1, 52);
    if ( a2 == 1 )
    {
      switch ( result )
      {
        case 3:
          goto LABEL_6;
        case 2:
          return result;
        case -1:
LABEL_6:
          U32 = sead__Random__getU32((void *)sead__GlobalRandom__sInstance);
          FIELD_U32(a1, 56) = (5 * (unsigned __int64)U32) >> 32;
          if ( is_mul_ok(5u, U32) )
            JUMPOUT(0x60234958);
          result = 3;
          goto LABEL_12;
      }
    }
    else
    {
      v5 = result + 1;
      if ( v5 <= 4 && ((1 << v5) & 0x19) != 0 )
      {
        result = ((5 * (unsigned __int64)sead__Random__getU32((void *)sead__GlobalRandom__sInstance)) >> 32) + 20;
        FIELD_U32(a1, 52) = 2;
        FIELD_U32(a1, 56) = result;
        return result;
      }
    }
    result = -1;
LABEL_12:
    FIELD_U32(a1, 52) = result;
  }
  return result;
}
