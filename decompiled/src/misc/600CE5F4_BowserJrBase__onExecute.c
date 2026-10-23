/* BowserJrBase__onExecute
 * address: 0x600CE5F4   size: 176   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

// Overrides: Actor : 0x60002F3C
// 
// Overridden by: None
int __fastcall BowserJrBase__onExecute(int a1)
{
  int v2; // r0
  _DWORD *v3; // r0
  float v4; // s2
  float v6[14]; // [sp+0h] [bp-38h] BYREF

  if ( FIELD_U32(a1, 7244) )
  {
    v2 = (*(int (__fastcall **)(int))(*(_DWORD *)a1 + 1028))(a1);
    v3 = (_DWORD *)sub_600D1798(v2);
    FIELD_U32(a1, 108) = *v3;
    FIELD_U32(a1, 112) = v3[1];
    FIELD_U32(a1, 116) = v3[2];
  }
  StateMgr__execute((StateMgr *)(a1 + 6084));
  (*(void (__fastcall **)(_DWORD, int, float *))(***(_DWORD ***)(a1 + 7100) + 108))(**(_DWORD **)(a1 + 7100), 11, v6);
  v4 = v6[7] - FIELD_F32(a1, 112);
  FIELD_F32(a1, 304) = v6[3] - FIELD_F32(a1, 108);
  FIELD_F32(a1, 308) = v4;
  (*(void (__fastcall **)(int))(*(_DWORD *)a1 + 1048))(a1);
  return 1;
}
