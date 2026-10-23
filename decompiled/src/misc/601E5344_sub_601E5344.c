/* sub_601E5344
 * address: 0x601E5344   size: 252   group: misc
 * Decompiled from the retail Deluxe (Switch) main module v1.0.0.
 */
#include "nsmbudx_field.h"
#include "nsmbudx_data_symbols.h"
#include "nsmbudx_prototypes.h"
#include "nsmbudx_undeclared.h"
#include "nsmbudx_prelude.h"

int __fastcall sub_601E5344(int a1)
{
  int v2; // r4
  _DWORD *v3; // r0

  v2 = dword_60C8B144;
  if ( !dword_60C8B144 )
  {
    v2 = operator_new_8DE2C8(0x48u, a1, 4);
    v3 = sead__IDisposer__ctor((_DWORD *)(v2 + 4), a1, 3u);
    FIELD_U32(v2, 4) = off_60BD6E48;
    dword_60C8B140 = (int)v3;
    *(_DWORD *)v2 = off_60BD6E58;
    FIELD_U32(v2, 20) = &off_60BD6E9C;
    FIELD_U32(v2, 24) = &off_60BD6EAC;
    FIELD_U32(v2, 28) = &off_60BD6ED0;
    FIELD_U32(v2, 32) = v2;
    FIELD_U32(v2, 36) = 0;
    StateMgr_ctor((StateMgr *)(v2 + 40), (StateExecuter *)(v2 + 24), &NullState);
    FIELD_U32(v2, 20) = &off_60BD6E8C;
    FIELD_U16(v2, 70) = 0;
    FIELD_U16(v2, 68) = 0;
    FIELD_U16(v2, 66) = 0;
    FIELD_U16(v2, 64) = 0;
    FIELD_U16(v2, 62) = 0;
    FIELD_U16(v2, 60) = 0;
    FIELD_U16(v2, 58) = 0;
    FIELD_U16(v2, 56) = 0;
    dword_60C8B144 = v2;
  }
  return v2;
}
