/* TileMgr_createInstance
 * address: 0x60710CB8   size: 120   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall TileMgr_createInstance(int a1)
{
  int v2; // r4
  _DWORD *v3; // r0

  v2 = TileMgr_instance;
  if ( !TileMgr_instance )
  {
    v2 = operator_new_8DE2C8(0xBA80u, a1, 8);
    v3 = sead__IDisposer__ctor((_DWORD *)(v2 + 4), a1, 3u);
    FIELD_U32(v2, 4) = off_60C21C68;
    dword_60CBD250 = (int)v3;
    TileMgr_ctor(v2);
    TileMgr_instance = v2;
  }
  return v2;
}
