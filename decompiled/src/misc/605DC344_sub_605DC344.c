/* sub_605DC344
 * address: 0x605DC344   size: 260   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_605DC344(int a1)
{
  _BYTE *v2; // r0
  unsigned int v3; // r1
  unsigned int v4; // t1
  int v5; // r1
  unsigned int v6; // r0
  int v7; // r5
  int v9; // r0

  v4 = FIELD_S8(a1, 6336);
  v2 = (_BYTE *)(a1 + 6336);
  v3 = v4;
  if ( v4 <= 3 && (v5 = *(_DWORD *)(PlayerMgr_instance + 4 * v3 + 32)) != 0 )
  {
    v6 = FIELD_U8(a1, 538);
    if ( (v6 & 2) != 0 )
    {
      sub_605DCC78(a1, v5, 1, (v6 >> 2) & 1);
      return 1;
    }
    else
    {
      v7 = 0;
      if ( (v6 & 1) != 0 )
      {
        sub_605DCC78(a1, v5, 0, 0);
        return 1;
      }
      return v7;
    }
  }
  else
  {
    *v2 = -1;
    FIELD_U32(a1, 6848) = 1;
    sub_605DAD24(a1, 1);
    if ( (FIELD_U8(a1, 6805) & 8) != 0 )
    {
      ((void (__fastcall *)(int, _DWORD, _DWORD, _DWORD))loc_605E6350)(a1, 0, 0, 0);
    }
    else
    {
      v9 = sub_605D792C(a1, FIELD_U32(a1, 80));
      FIELD_U32(a1, 156) = 0;
      FIELD_U32(a1, 160) = v9;
      FIELD_U32(a1, 164) = 0;
      (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 384))(a1);
    }
    return 1;
  }
}
