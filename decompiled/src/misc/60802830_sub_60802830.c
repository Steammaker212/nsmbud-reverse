/* sub_60802830
 * address: 0x60802830   size: 116   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60802830(unsigned int a1)
{
  unsigned int v2; // r2
  int result; // r0
  int v4; // r1

  v2 = 0;
  result = 0;
  if ( a1 < 6 )
    v2 = a1;
  if ( *(_BYTE *)(dword_60C99DD4 + 72 * v2 + 292) )
  {
    result = 0;
    if ( a1 >= 4 )
      a1 = 0;
    v4 = *(_DWORD *)(PlayerMgr_instance + 4 * a1 + 32);
    if ( v4 )
    {
      if ( (FIELD_U32(v4, 11484) | 2) != 3 )
        return v4;
    }
  }
  return result;
}
