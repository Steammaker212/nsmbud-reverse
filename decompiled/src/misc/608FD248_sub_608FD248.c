/* sub_608FD248
 * address: 0x608FD248   size: 204   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int sub_608FD248()
{
  bool v0; // zf
  int v1; // r4
  unsigned int v2; // r0
  char *v3; // r1
  int v4; // r0
  int result; // r0
  unsigned int v6; // r0
  char *v7; // r1

  v0 = dword_60CCEF74 == 0;
  if ( dword_60CCEF74 )
    v0 = FIELD_U8(dword_60CCEF74, 32) == 0;
  if ( !v0 )
    return FIELD_U32(dword_60CCEF74, 16);
  v1 = sub_608FCCAC();
  v2 = v1 + 6 * sub_608FCF50();
  v3 = (char *)&unk_60B3B9DC;
  if ( v2 < 0x42 )
    v3 = (char *)&unk_60B3B9DC + v2;
  result = *v3;
  if ( result < 0 )
  {
    if ( (unsigned int)(v1 - 1) > 4 )
      v4 = 0;
    else
      v4 = dword_60B3BA20[v1 - 1];
    v6 = v1 + 6 * v4;
    v7 = (char *)&unk_60B3B9DC;
    if ( v6 < 0x42 )
      v7 = (char *)&unk_60B3B9DC + v6;
    result = *v7;
    if ( result <= 0 )
      return 0;
  }
  return result;
}
