/* sub_607B17A4
 * address: 0x607B17A4   size: 156   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_607B17A4(int a1)
{
  int v2; // r4
  int v3; // r0
  int v4; // r2

  v2 = 0;
  if ( !FIELD_U8(dword_60C9A1F0, 6536)
    && !sub_6075EDF8(a1)
    && (FIELD_U8(a1, 6906) & 0x80) != 0
    && FIELD_F32(a1, 124) <= 0.0 )
  {
    v3 = FIELD_U32(a1, 1224);
    if ( (v3 & 0x4000) != 0 )
    {
      v4 = 2;
      goto LABEL_9;
    }
    if ( (v3 & 0x8000) != 0 )
    {
      v4 = 0;
LABEL_9:
      Player_changeState(a1, (StateBase *)&dword_60CC508C, v4);
      return 1;
    }
  }
  return v2;
}
