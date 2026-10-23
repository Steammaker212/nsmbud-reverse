/* sub_600BFF2C
 * address: 0x600BFF2C   size: 272   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

bool __fastcall sub_600BFF2C(_DWORD *a1)
{
  _DWORD *v1; // lr
  _DWORD *v2; // r3
  _DWORD *v3; // r2
  _DWORD *v4; // r12
  __int16 v5; // r1
  bool v6; // zf
  bool v7; // zf
  _BOOL4 result; // r0
  bool v9; // zf
  bool v10; // zf
  bool v11; // zf
  bool v12; // zf
  bool v13; // zf
  bool v14; // zf

  v1 = a1 + 1864;
  v2 = a1 + 1863;
  v3 = a1 + 1862;
  v4 = a1 + 1865;
  v5 = FIELD_U16(PlayerMgr_instance, 66);
  v6 = (v5 & 1) == 0;
  if ( (v5 & 1) != 0 )
    v6 = *v3 == 0;
  if ( v6 )
    goto LABEL_8;
  v7 = *v2 == 0;
  if ( *v2 )
    v7 = *v1 == 0;
  if ( v7 || (result = 0, !*v4) )
  {
LABEL_8:
    v9 = (v5 & 2) == 0;
    if ( (v5 & 2) != 0 )
      v9 = *v3 == 1;
    if ( v9 )
      goto LABEL_15;
    v10 = *v2 == 1;
    if ( *v2 != 1 )
      v10 = *v1 == 1;
    if ( v10 || (result = 0, *v4 == 1) )
    {
LABEL_15:
      v11 = (v5 & 4) == 0;
      if ( (v5 & 4) != 0 )
        v11 = *v3 == 2;
      if ( v11 )
        goto LABEL_22;
      v12 = *v2 == 2;
      if ( *v2 != 2 )
        v12 = *v1 == 2;
      if ( v12 || (result = 0, *v4 == 2) )
      {
LABEL_22:
        v13 = (v5 & 8) == 0;
        if ( (v5 & 8) != 0 )
          v13 = *v3 == 3;
        if ( v13 )
          return 1;
        v14 = *v2 == 3;
        if ( *v2 != 3 )
          v14 = *v1 == 3;
        return v14 || *v4 == 3;
      }
    }
  }
  return result;
}
