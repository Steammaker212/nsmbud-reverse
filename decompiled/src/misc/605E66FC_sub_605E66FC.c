/* sub_605E66FC
 * address: 0x605E66FC   size: 60   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605E66FC(_DWORD *a1)
{
  int v1; // r2
  int v2; // r2

  v1 = a1[2006];
  if ( v1 )
    a1[2006] = v1 - 1;
  v2 = a1[2007];
  if ( v2 )
    a1[2007] = v2 - 1;
  return (*(int (__fastcall **)(_DWORD *))(*a1 + 420))(a1);
}
