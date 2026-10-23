/* sub_603D3F84
 * address: 0x603D3F84   size: 28   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_603D3F84(int a1, int a2)
{
  int v2; // r0

  v2 = FIELD_U32(a2, 64);
  if ( v2 )
    return (*(int (__fastcall **)(int))(*(_DWORD *)v2 + 624))(v2);
  else
    return 0;
}
