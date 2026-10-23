/* sub_603FF76C
 * address: 0x603FF76C   size: 164   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603FF76C(int a1, int a2)
{
  int result; // r0
  bool v4; // zf
  char v5; // [sp+4h] [bp-14h] BYREF

  result = FIELD_U8(a1, 2689);
  if ( result )
  {
    result = FIELD_U8(a1, 2699);
    if ( !FIELD_U8(a1, 2699) )
    {
      result = FIELD_U8(a1, 2691);
      if ( !FIELD_U8(a1, 2691) )
      {
        result = FIELD_U8(a1, 2702);
        if ( !FIELD_U8(a1, 2702) )
        {
          result = FIELD_U8(a1, 2701);
          if ( !FIELD_U8(a1, 2701) )
          {
            result = FIELD_U8(a1, 2690);
            if ( !FIELD_U8(a1, 2690) )
            {
              v4 = a2 == 0;
              if ( a2 )
              {
                result = FIELD_U8(a1, 2700);
                v4 = result == 0;
              }
              if ( !v4 )
              {
                sub_6090A260(a2, &v5);
                FIELD_U32(a1, 2584) = -1077936128;
                FIELD_U32(a1, 2576) = -1041235968;
                FIELD_U32(a1, 488) = 0;
                FIELD_U32(a1, 492) = 0;
                FIELD_U32(a1, 496) = 0;
                return 0;
              }
            }
          }
        }
      }
    }
  }
  return result;
}
