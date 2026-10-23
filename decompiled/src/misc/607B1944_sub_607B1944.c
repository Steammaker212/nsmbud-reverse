/* sub_607B1944
 * address: 0x607B1944   size: 128   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B1944(_BYTE *a1)
{
  int v2; // r4

  v2 = 0;
  if ( !FIELD_U8(dword_60C9A1F0, 6536)
    && !(*(int (__fastcall **)(_BYTE *))(*(_DWORD *)a1 + 1064))(a1)
    && !sub_6075EDF8((int)a1)
    && (a1[6906] & 0x80) != 0 )
  {
    Player_changeState((int)a1, (StateBase *)&dword_60CC508C, 2);
    return 1;
  }
  return v2;
}
