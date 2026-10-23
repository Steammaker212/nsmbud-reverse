/* sub_607CDFEC
 * address: 0x607CDFEC   size: 48   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607CDFEC(int a1, int a2)
{
  int v3; // r0

  v3 = sub_607D6C28(a1);
  if ( v3 )
    return (*(int (__fastcall **)(int, int))(*(_DWORD *)v3 + 224))(v3, a2);
  else
    return 0;
}
