/* sub_6069747C
 * address: 0x6069747C   size: 340   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6069747C(int a1)
{
  int result; // r0
  unsigned int v3; // r1
  float *v4; // r2
  float v5; // s2
  float v6; // s4

  result = 6124;
  v3 = FIELD_U32(a1, 6124);
  if ( v3 )
  {
    result = ActorMgrRelated_getById(ActorMgr__instance + 27168, v3);
    v4 = (float *)result;
    if ( result )
    {
      result = FIELD_U8(a1, 6137);
      if ( (unsigned int)(result - 2) < 2 )
      {
        result = sub_606D465C(a1 + 108, a1 + 6152);
        FIELD_F32(a1, 108) = FIELD_F32(a1, 108) - FIELD_F32(a1, 572);
        FIELD_F32(a1, 112) = FIELD_F32(a1, 112) - FIELD_F32(a1, 576);
        FIELD_F32(a1, 116) = FIELD_F32(a1, 116) - FIELD_F32(a1, 580);
      }
      else if ( result == 1 )
      {
        if ( FIELD_U8(a1, 6139) )
        {
          result = FIELD_U32(a1, 6144);
          FIELD_U32(a1, 112) = result;
        }
        else
        {
          result = FIELD_U32(a1, 6140);
          FIELD_U32(a1, 108) = result;
        }
      }
      else if ( !FIELD_U8(a1, 6137) )
      {
        v5 = v4[28] + FIELD_F32(a1, 6144);
        v6 = v4[29] + FIELD_F32(a1, 6148);
        FIELD_F32(a1, 108) = v4[27] + FIELD_F32(a1, 6140);
        FIELD_F32(a1, 112) = v5;
        FIELD_F32(a1, 116) = v6;
        return a1 + 6148;
      }
    }
  }
  return result;
}
