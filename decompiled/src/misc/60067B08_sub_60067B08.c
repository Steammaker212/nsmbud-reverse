/* sub_60067B08
 * address: 0x60067B08   size: 112   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_60067B08(int a1)
{
  int v2; // r5
  int result; // r0
  _DWORD *v4; // r1
  unsigned int v5; // r0

  v2 = a1 + 7112;
  j_ModelWrapper_updateAnims(FIELD_U32(a1, 7112));
  result = *(unsigned __int8 *)(v2 - 799);
  if ( !*(_BYTE *)(v2 - 799) )
  {
    v4 = *(_DWORD **)(*(_DWORD *)v2 + 12);
    v5 = *(_DWORD *)(*(_DWORD *)v2 + 68);
    if ( *(_DWORD *)(*(_DWORD *)v2 + 8) > v5 )
      v4 += v5;
    result = sub_60418548(*v4 + 4);
    if ( result == 1 )
    {
      FIELD_U32(a1, 25360) = 1;
      return sub_60077C30(a1);
    }
  }
  return result;
}
