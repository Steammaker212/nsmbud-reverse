/* sub_6067C890
 * address: 0x6067C890   size: 76   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_6067C890(int a1)
{
  int v2; // r0
  int v3; // r4

  v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 208))(a1);
  v3 = v2;
  if ( v2 )
  {
    FIELD_U32(a1, 10180) = FIELD_U32(v2, 8);
    StateMgr__changeState((StateMgr *)(a1 + 6084), (StateBase *)&dword_60CB7F2C);
  }
  return v3;
}
