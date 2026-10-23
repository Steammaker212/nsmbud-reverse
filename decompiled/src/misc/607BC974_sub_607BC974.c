/* sub_607BC974
 * address: 0x607BC974   size: 152   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

void __fastcall sub_607BC974(_DWORD *a1)
{
  if ( (*(int (__fastcall **)(_DWORD *))(*a1 + 1064))(a1) == 1 )
  {
    if ( sub_6079DF08((int)a1) )
    {
      sub_6079B7A4((int)a1);
      goto LABEL_9;
    }
  }
  else if ( a1[330] == 5 || sub_6075EE0C((int)a1) || sub_6075EDF8((int)a1) )
  {
LABEL_9:
    JUMPOUT(0x607BBBF8);
  }
  JUMPOUT(0x607BE458);
}
