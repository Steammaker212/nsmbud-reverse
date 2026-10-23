/* MiiFacelineTexture_ref
 * address: 0x6041CD6C   size: 256   group: player
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MiiFacelineTexture_ref(_DWORD *a1)
{
  _DWORD *v2; // r5
  int v3; // r0
  int v4; // r0
  int result; // r0

  v2 = a1 + 193;
  v3 = sub_6083DF1C(a1 + 193, 0);
  if ( v3 )
  {
    a1[400] = sub_60916740(dword_60CCFC8C, FIELD_U32(v3, 8), FIELD_U32(v3, 16), "MiiFacelineTexture");
    a1[401] = 0;
    sub_6083DF24(v2, 0);
  }
  v4 = sub_6083DF1C(v2, 1);
  if ( v4 )
  {
    a1[402] = sub_60916740(dword_60CCFC8C, FIELD_U32(v4, 8), FIELD_U32(v4, 16), "MiiFacelineTexture");
    a1[403] = 0;
    sub_6083DF24(v2, 1);
  }
  result = sub_6083DF1C(v2, 2);
  if ( result )
  {
    a1[404] = sub_60916740(dword_60CCFC8C, FIELD_U32(result, 8), FIELD_U32(result, 16), "MiiFacelineTexture");
    a1[405] = 0;
    return sub_6083DF24(v2, 2);
  }
  return result;
}
