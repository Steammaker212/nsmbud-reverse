/* sub_606A8FA4
 * address: 0x606A8FA4   size: 232   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_606A8FA4(int a1, int a2)
{
  int v3; // r0
  int v4; // r4

  if ( FIELD_U8(a1, 6115) )
  {
    v3 = sub_606D4B48(a2);
    v4 = v3;
    if ( v3 )
      goto LABEL_5;
  }
  else
  {
    v3 = sub_606D4ABC(a2);
    v4 = v3;
    if ( v3 )
    {
LABEL_5:
      FIELD_U32(a1, 6108) = FIELD_U32(v3, 8);
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 196))(a1, v3);
      (*(void (__fastcall **)(int, int))(*(_DWORD *)a1 + 200))(a1, v4);
      StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB9DA0);
      return v4;
    }
  }
  return 0;
}
