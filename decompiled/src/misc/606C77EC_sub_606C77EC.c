/* sub_606C77EC
 * address: 0x606C77EC   size: 136   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606C77EC(int result)
{
  unsigned int v1; // r1
  int v2; // r2
  int *v3; // r3

  if ( FIELD_U8(result, 86) )
  {
    FIELD_U32(result, 116) = -985956352;
    v1 = FIELD_U32(result, 20);
  }
  else
  {
    v1 = FIELD_U32(result, 20);
    v2 = (v1 >> 8) & 0xF;
    if ( v2 == 1 )
    {
      FIELD_U32(result, 116) = -1040187392;
    }
    else
    {
      v3 = dword_606C7874;
      if ( v2 == 2 )
        v3 = &dword_606C7874[1];
      FIELD_U32(result, 116) = *v3;
    }
  }
  FIELD_U32(result, 7064) = v1 & 0xF;
  FIELD_U32(result, 7060) = FIELD_U8(result, 28);
  FIELD_U32(result, 7056) = (unsigned __int8)FIELD_U32(result, 24) >> 4;
  FIELD_U8(result, 7088) = -1;
  return result;
}
