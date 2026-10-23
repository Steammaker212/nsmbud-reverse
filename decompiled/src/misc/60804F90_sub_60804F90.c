/* sub_60804F90
 * address: 0x60804F90   size: 108   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

unsigned int __fastcall sub_60804F90(unsigned int result, int a2)
{
  void *v2; // r2
  int v3; // r3
  unsigned __int8 v4; // r1

  v2 = &unk_60B0DC88;
  if ( a2 )
    v2 = &unk_60B0DCAC;
  v3 = *(_DWORD *)result;
  if ( *(_DWORD *)result <= 7u )
  {
    result = FIELD_U8(result, 4);
    if ( ((1 << v3) & 0xC3) != 0 )
    {
      v2 = &unk_60B0DC58;
      v4 = 11;
    }
    else
    {
      v4 = 8;
      if ( v3 != 2 )
        return result;
    }
    if ( result > v4 )
      result = 0;
    return (unsigned int)v2 + 4 * result;
  }
  return result;
}
