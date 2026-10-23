/* sub_608C5B2C
 * address: 0x608C5B2C   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_608C5B2C(unsigned int result)
{
  unsigned int v1; // r4
  int v2; // r1
  float (__fastcall *v3)(float); // r0

  v1 = result;
  if ( *(float *)result != 0.0 )
  {
    result = FIELD_U32(result, 8);
    if ( FIELD_U32(v1, 16) >= result )
    {
      v2 = FIELD_U8(v1, 13);
      v3 = (float (__fastcall *)(float))dword_60CC95FC[v2];
      if ( v3 )
      {
        if ( v2 == 4 )
        {
          if ( FIELD_U8(v1, 29) )
            FIELD_F32(v1, 24) = v3(FIELD_F32(v1, 20));
        }
        else
        {
          v3(FIELD_F32(v1, 20));
        }
      }
      return FIELD_U8(v1, 12);
    }
  }
  return result;
}
