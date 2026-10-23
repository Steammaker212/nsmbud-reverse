/* sub_6074EC70
 * address: 0x6074EC70   size: 132   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_6074EC70(int a1)
{
  nn__prepo__PlayReport *v2; // r0
  int v4; // r0
  _QWORD v6[3]; // [sp+0h] [bp-18h] BYREF

  if ( FIELD_U8(a1, 16) )
  {
    UserInfo_getUid(UserInfo_istance, v6);
    if ( v6[0] )
    {
      v2 = *(nn__prepo__PlayReport **)(a1 + 64);
    }
    else
    {
      v2 = *(nn__prepo__PlayReport **)(a1 + 64);
      if ( !v6[1] )
      {
        v4 = nn__prepo__PlayReport__Save_9AD700(v2);
        return v4 == 0;
      }
    }
    v4 = nn__prepo__PlayReport__Save(v2, v6);
    return v4 == 0;
  }
  return 0;
}
