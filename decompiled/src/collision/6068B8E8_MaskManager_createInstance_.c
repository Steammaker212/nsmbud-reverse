/* MaskManager_createInstance_
 * address: 0x6068B8E8   size: 168   group: collision
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall MaskManager_createInstance_(int a1)
{
  int v2; // r4

  v2 = MaskMgr_instance;
  if ( !MaskMgr_instance )
  {
    v2 = operator_new_8DE2C8(0xA1Cu, a1, 4);
    sead__IDisposer__ctor((_DWORD *)v2, a1, 3u);
    *(_DWORD *)v2 = off_60C17524;
    dword_60CB84A0 = v2;
    FIELD_U32(v2, 16) = 0;
    FIELD_U8(v2, 20) = 0;
    memset((void *)(v2 + 24), 0, 1284);
    MaskManager_createInstance__helper(v2 + 28);
    memset((void *)(v2 + 1308), 0, 1280);
    MaskManager_createInstance__helper(v2 + 1308);
    MaskMgr_instance = v2;
  }
  return v2;
}
