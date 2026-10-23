/* sub_6000A60C
 * address: 0x6000A60C   size: 64   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_6000A60C()
{
  int result; // r0
  int v1; // r1
  unsigned int v2; // r1
  int v3; // r2

  result = dword_60C99DD4;
  v1 = ((FIELD_U8(dword_60C99DD4, 735) >> 7) ^ 1)
     + ((FIELD_U8(dword_60C99DD4, 734) >> 7) ^ 1)
     + ((FIELD_U8(dword_60C99DD4, 733) >> 7) ^ 1);
  if ( v1 )
  {
    result = dword_60C99DD4 + 852;
    v2 = FIELD_U32(dword_60C99DD4, 856) + (unsigned __int8)v1;
    v3 = 9999;
    if ( v2 < 0x270F )
      v3 = v2;
    FIELD_U32(dword_60C99DD4, 856) = v3;
  }
  return result;
}
